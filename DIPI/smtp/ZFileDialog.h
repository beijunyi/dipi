/*++++++++++++++++++++++++ Copyright (c) 2006 ++++++++++++++++++++++++

��������:

    ��³��(zhangluduo) : Ϊ���а��ҵ��˺��Ұ�����Ŭ��!

��ϵ��ʽ:

    zhangluduo@msn.com
	[oopfans]Ⱥ:34064264

�޸�ʱ��:

    2007-03-03

��������:

    ����Win32API����ϵͳ���öԻ���(�ļ���,����,Ŀ¼ѡ��..)

��Ȩ����:

    ����κε�λ,��������ʹ��,����,�޸�,ɢ����������ݴ���,���Ǳ��뱣
    ���˰�Ȩ��Ϣ,��ο���������ڵ��Ͷ�,�������˴������Դ,�����˷ݴ���
    ���κ�BUG,��֪ͨ����,�Ա��ֲ���������ˮƽ���޶����µ�һЩ����Ͳ�
    ��,лл!

++++++++++++++++++++++++ Copyright (c) 2006 ++++++++++++++++++++++++*/

#ifndef _ZFILEDIALOG
#define _ZFILEDIALOG

#pragma warning(disable:4786) 
#include <string>
#include <deque>
#include <functional>
#include <algorithm>
using namespace std;
#include "ZThunk.h"
#include "ZSysInfo.h"
#include <io.h>

class ZFileDialog  
{
public:

	ZFileDialog();
	virtual ~ZFileDialog();

private:

	ZThunk m_thunk;
	ZSysInfo m_sysinfo;

	struct OPENFILENAMEEX : public OPENFILENAME
	{ 
		void* pvReserved;
		DWORD dwReserved;
		DWORD FlagsEx;
	};

public:

	//ѡ��Ŀ¼
	string GetSelectDirectory(HWND hwnd,const char* szTitle=_T("Please select directory"));

private:

	// �ļ��򿪶Ի���Ļص�����,����ʹ�򿪻򱣴�Ի������
	UINT_PTR OFNHookProc(HWND hdlg,UINT uiMsg,WPARAM wParam,LPARAM lParam);

public:

	/*********************************************************
	ѡ���ļ�(��ѡ���ѡ)
	ultiSelect�ļ��Ƿ���Զ�ѡ
	Filter�ļ����͹���
	��  ע:��:Filter=="�����ļ� (*.*)\0*.*\0�ı��ļ� (*.txt)\0*.txt\0\0";
	*********************************************************/
	deque<string> GetOpenFileName(HWND hwnd,bool MultiSelect,const char* szFilter);

	/*********************************************************
	��ȡ�û�������ļ���
	AutoAddSuffixName�Ƿ��Զ���ӱ�����ļ���׺��(�����ļ���Ĺ������������)
	Filter�ļ����͹���
	��  ע:��:Filter=="�����ļ� (*.*)\0*.*\0�ı��ļ� (*.txt)\0*.txt\0\0";
	*********************************************************/
	string GetSaveFileName(HWND hwnd,bool AutoAddSuffixName,const char* szFilter);
};

#endif
