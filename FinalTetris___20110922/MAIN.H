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
extern HDC ghDC;                                       // GDI设备环境
extern HGLRC ghRC;           // 渲染环境
extern int keys[];

#endif