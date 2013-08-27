#include"MAIN.h"
#include"GLOBAL.h"
#include"GAMEINIT.h"
#include"GAMEMAIN.h"
#include"GAMEDOWN.h"
#include"Sprite.h"


HWND				ghWnd;      // globally track main window
HINSTANCE			ghInstance; // globally track hinstance
HDC					ghDC;       // GDI设备环境
HGLRC				ghRC;       // 渲染环境
PAINTSTRUCT         ps;         // used in WM_PAINT
HDC                 hdc;        // handle to a device context

int					keys[256];  //void f(int keys[])
int					keyvariable;
int                 cude;
int                 cudetemp;  
Game				game;

LRESULT CALLBACK WindowProc(HWND hwnd, 
                                                        UINT msg, 
                                                        WPARAM wparam, 
                                                        LPARAM lparam)
{
    
       

        switch(msg)
        {       
        case WM_CREATE: 
                {
                        return(0);
                } break;
        case WM_DESTROY: 
                {

                        PostQuitMessage(0);
                        return(0);
                } break;
		case WM_KEYDOWN:
			{
				keyvariable=wparam;
				keys[keyvariable]=1;
				return 0;
			}break;
		case WM_KEYUP:
			{
				keyvariable=wparam;
				keys[keyvariable]=0;
				return 0;
			}break;

        default:break;

        } 
		
	    return (DefWindowProc(hwnd, msg, wparam, lparam));

} 

int WINAPI WinMain(     HINSTANCE hinstance,
                                   HINSTANCE hprevinstance,
                                   LPSTR lpcmdline,
                                   int ncmdshow)
{

        WNDCLASSEX winclass; // this will hold the class we create
        HWND       hwnd;         // generic window handle
        MSG                msg;          // generic message

        winclass.cbSize				    = sizeof(WNDCLASSEX);
        winclass.style                  = CS_HREDRAW | CS_VREDRAW;
        winclass.lpfnWndProc			= WindowProc;
        winclass.cbClsExtra             = 0;
        winclass.cbWndExtra             = 0;
        winclass.hInstance              = hinstance;
        winclass.hIcon                  = LoadIcon(NULL, IDI_APPLICATION);
        winclass.hCursor                = LoadCursor(NULL, IDC_ARROW); 
        winclass.hbrBackground  = (HBRUSH)GetStockObject(BLACK_BRUSH);

        winclass.lpszMenuName   = NULL;
		winclass.lpszClassName  = WINDOW_CLASS_NAME;
	
        winclass.hIconSm        = LoadIcon(NULL, IDI_APPLICATION);

        ghInstance = hinstance;

        if (!RegisterClassEx(&winclass))
                return(0);

        // create the window
        if (!(hwnd = CreateWindowEx(NULL,                 // extended style
                WINDOW_CLASS_NAME,     // class
	
                WINDOW_TITLE, // title
			   
			   
                WS_OVERLAPPEDWINDOW | WS_VISIBLE,
                0,0,      // initial x,y
                WIDTH,HEIGHT,  // initial width, height
                NULL,     // handle to parent 
                NULL,     // handle to menu
                hinstance,// instance of this application
                NULL))) // extra creation parms
		{
			return(1);

		}  


        ghWnd = hwnd;


		srand(GetTickCount());

	
		game.EnableOpenGL();
		game.SceneInit(WIDTH,HEIGHT);
		game.sprite.Init();
		while(1)
        {
                if (PeekMessage(&msg,NULL,0,0,PM_REMOVE))
                { 
                       
                        if (msg.message == WM_QUIT)
                                break;
     
                        TranslateMessage(&msg);
                        DispatchMessage(&msg);
                }
				
				DWORD dwStartTime;
				dwStartTime = GetTickCount();
				
				game.SceneShow();//这里进行绘图

				// 控制帧率
				while(GetTickCount() - dwStartTime < TIME_IN_FRAME)
				{
				      Sleep(1);
				}

				SwapBuffers(ghDC);
        } 

	
		game.DisableOpenGL();

        return(msg.wParam);
} 
