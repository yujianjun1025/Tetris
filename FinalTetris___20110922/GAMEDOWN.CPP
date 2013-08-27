#include"GAMEDOWN.h"
void game_shutdown::DisableOpenGL()
{
	 wglMakeCurrent( NULL, NULL );
     wglDeleteContext( ghRC );
     ReleaseDC( ghWnd, ghDC );

}