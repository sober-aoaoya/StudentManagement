#pragma once
#include "afxdialogex.h"


// CStudenteditDlg 对话框

class CStudenteditDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CStudenteditDlg)

public:
	CStudenteditDlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CStudenteditDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG4 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton2();
};
