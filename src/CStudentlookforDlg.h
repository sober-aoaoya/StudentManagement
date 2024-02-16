#pragma once
#include "afxdialogex.h"


// CStudentlookforDlg 对话框

class CStudentlookforDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CStudentlookforDlg)

public:
	CStudentlookforDlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CStudentlookforDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CEdit m_getname;
	CEdit m_getID;
	CEdit m_showinfo;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
};
