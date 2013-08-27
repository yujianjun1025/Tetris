#ifndef GAM
#define GAM
#include"GLOBAL.h"
#include "MAIN.h"
class game_init
{
public:
	game_init()
	{
		ghDC=GetDC(ghWnd);

	}
	~game_init()
	{

	}
	void EnableOpenGL();
	void SceneInit(int w,int h);
};

#endif