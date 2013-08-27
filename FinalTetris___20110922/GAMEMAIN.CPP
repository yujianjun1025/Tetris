#include"GAMEMAIN.h"
#include"Map.h"
#include"Sprite.h"
#include"ARRMARK.h"

DWORD
void Game::EnableOpenGL()
{
		PIXELFORMATDESCRIPTOR pfd;
        int iFormat;

        ghDC = GetDC( ghWnd );


        ZeroMemory( &pfd, sizeof( pfd ) );
        pfd.nSize = sizeof( pfd );  
        pfd.nVersion = 1;      //版本，一般设为1
        pfd.dwFlags =   PFD_DRAW_TO_WINDOW | //一组表明象素缓冲特性的标志位
                PFD_SUPPORT_OPENGL;
        pfd.iPixelType = PFD_TYPE_RGBA;   //明象素数据类型是RGBA还是颜色索引;
        pfd.cColorBits = 32;     //每个颜色缓冲区中颜色位平面的数目，对颜色索引方式是缓冲区大小
        pfd.iLayerType = PFD_MAIN_PLANE; //被忽略，为了一致性而包含的

        iFormat = ChoosePixelFormat( ghDC, &pfd );//选择一个像素格式

        SetPixelFormat( ghDC, iFormat, &pfd ); //设置到DC中

        ghRC = wglCreateContext( ghDC );    //创建绘图描述表
   
		wglMakeCurrent( ghDC, ghRC );     //使之成为当前绘图描述表
} 
void Game::SceneInit(int w,int h)
{
	    glClearColor(0.0f, 0.0f, 0.0f, 0.5f);      // 黑色背景 
		glClearDepth(1.0f);
	//	glEnable(GL_DEPTH_TEST);	
        glViewport(0,0,w,h);
	

        glShadeModel(GL_SMOOTH);//选择单位或平滑阴影
        glMatrixMode(GL_PROJECTION);			//选择射影矩阵
        glLoadIdentity();

		gluPerspective(45.0f,(GLfloat)w/(GLfloat)h,0.1f,100.0f);

		glMatrixMode(GL_MODELVIEW);				//选择模型视图矩阵 Select The Modelview Matrix
	    glLoadIdentity();						// Reset The Modelview Matrix

		glEnable(GL_LINE_SMOOTH);


}
void Game::SceneShow()
{
	
	    Map_draw.KeyMessage(sprite.arry,sprite.arrx,sprite.arrz);   //整个地图的键盘处理事件

		Map_draw.DrawGrid();     //地图————画Grid与Aex
        
		sprite.Draw(cudetemp);//检测填充方块

		Map_draw.DrawDiamond(Map_draw.m_fX_cudetra,Map_draw.m_fZ_cudetra); //地图———画移动标记的那个菱形

	
		sprite.DrawFallCude();//绘制下落的那个方块
		 
		sprite.ArrMarkFlag(cudetemp,Map_draw.m_fX_cudetra,Map_draw.m_fZ_cudetra);//方块下落过程如果不能再下落时对标记数组进行赋值标记
    
}

void Game::DisableOpenGL()
{
	 wglMakeCurrent( NULL, NULL );
     wglDeleteContext( ghRC );
     ReleaseDC( ghWnd, ghDC );

}