
// DIPIDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"
#include "publicfunction.h"
#include "afxcmn.h"
#include "smtp/ZSmtp.h"
//#include <stdlib.h>
//#include <crtdbg.h>
//#define   _CRTDBG_MAP_ALLOC
//_CrtDumpMemoryLeaks();
// CDIPIDlg �Ի���
class CDIPIDlg : public CDialogEx
{
// ����
public:
	CDIPIDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_DIPI_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedAppend();
	CListCtrl m_list;
	afx_msg void OnBnClickedDelete();
	afx_msg void OnBnClickedClear();
	int m_line;
	ZSmtp smtp;
	afx_msg void OnDestroy();
	afx_msg void OnBnClickedStart();
	BOOL SelectLine();
	UINT TimerOn;
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	CStatic m_time;
	void CallbackMsg(NOTIFYPARA *pNotifyPara);
	afx_msg void OnBnClickedStop();
	afx_msg void OnLbnSelchangeList1();
	CListBox m_message;		
	CListCtrl m_charinfo;
	afx_msg void OnMenuRun();
	afx_msg void OnMenuStop();
	afx_msg void OnMenuPause();
	BOOL m_autorun;
	BOOL CharLogin(int index);
	afx_msg void OnBnClickedMenu();
	afx_msg void OnSinglelogin();
	afx_msg void OnSinglelogout();
	afx_msg void OnNMClickListchar(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnNMRClickListchar(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnBnClickedChktalk();
	afx_msg void OnLvnColumnclickList2(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnBnClickedSave();
	afx_msg void OnNMDblclkListchar(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnBnClickedChkupdate();
};
