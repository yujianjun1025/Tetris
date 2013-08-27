// Map.h: interface for the Map class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_MAP_H__F7450607_FFA7_41D0_BE18_DC1030A1A3DF__INCLUDED_)
#define AFX_MAP_H__F7450607_FFA7_41D0_BE18_DC1030A1A3DF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "Key.h"

class Map : public Key
{

public:

	void DrawGrid();
	void DrawDiamond(float m_fX_cudetra,float m_fZ_cudetra);
	void Init();
	Map();
	virtual ~Map();

};

#endif // !defined(AFX_MAP_H__F7450607_FFA7_41D0_BE18_DC1030A1A3DF__INCLUDED_)
