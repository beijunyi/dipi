#pragma once


// AccountEdit �Ի���

class AccountEdit : public CDialogEx
{
	DECLARE_DYNAMIC(AccountEdit)

public:
	AccountEdit(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~AccountEdit();

// �Ի�������
	enum { IDD = IDD_ACCOUNT_EDIT };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	CString szAccount;
	CString szPwd;
	CString szSafeCode;
	CString szScript;
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedBrowse();
};
