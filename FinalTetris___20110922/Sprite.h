// Sprite.h: interface for the Sprite class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_SPRITE_H__212301F6_9918_4FEB_8060_B939A2325C3F__INCLUDED_)
#define AFX_SPRITE_H__212301F6_9918_4FEB_8060_B939A2325C3F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include"GLOBAL.h"
#include"MAIN.h"
#include "Key.h"

class Sprite : public Key
{
private:
	int flag;
	int i;
public:
	int arry;
	int arrx;
	int arrz;

	
	void Init();
	void Draw(int cudetemp); //��䷽��
	void DrawFallCude();  //����������Ǹ�����
	void ArrMarkFlag(int xxx,float xx,float zz);//������������������������ʱ�Ա��������и�ֵ���

	Sprite();
	virtual ~Sprite();

};

#endif // !defined(AFX_SPRITE_H__212301F6_9918_4FEB_8060_B939A2325C3F__INCLUDED_)
