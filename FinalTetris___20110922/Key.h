// Key.h: interface for the Key class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GRAPHICS_H__D2F3CDCB_F430_47E9_84F4_F44A75EC44EC__INCLUDED_)
#define AFX_GRAPHICS_H__D2F3CDCB_F430_47E9_84F4_F44A75EC44EC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include"GLOBAL.h"
#include"MAIN.h"
class Key  
{
public:
	int b_key,y_key,j_key,g_key,null_key;
	int arr[20][20][20];

	int m_iSKey;

	float m_fXrot;
	float m_fYrot;
	float m_fZrot;
	float m_fXtra;
	float m_fYtra;
	float m_fZtra;


	int loop1;
    int loop2;
    int loop3;
	
	float cout;
    float count1;
	
	float m_fX_cudetra;
	float m_fZ_cudetra;

	
	Key();
	virtual ~Key();
	void KeyMessage(int arry,int arrx,int arrz);

};

#endif // !defined(AFX_GRAPHICS_H__D2F3CDCB_F430_47E9_84F4_F44A75EC44EC__INCLUDED_)
