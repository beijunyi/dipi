
// DIPI.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CDIPIApp:
// �йش����ʵ�֣������ DIPI.cpp
//

class CDIPIApp : public CWinApp
{
public:
	CDIPIApp();
	//����û���
	int MAXACCOUNT;
	COleDateTime G_LICENCEDATE;
// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CDIPIApp theApp;