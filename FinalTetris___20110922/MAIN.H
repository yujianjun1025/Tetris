#ifndef MAI
#define MAI
#include <windows.h> 
#include <stdio.h> 
#include <GL/glu.h>

#pragma comment( lib, "opengl32.lib" ) 
#pragma comment( lib, "glu32.lib" )

extern   int keyvariable;
extern HWND ghWnd;//globally track main window
extern HINSTANCE ghInstance; // globally track hinstance
extern HDC ghDC;                                       // GDI�豸����
extern HGLRC ghRC;           // ��Ⱦ����
extern int keys[];

#endif