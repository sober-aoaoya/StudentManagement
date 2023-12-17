#pragma once
#include "afxdialogex.h"


// CStudentallfindDlg 对话框

class CStudentallfindDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CStudentallfindDlg)

public:
	CStudentallfindDlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CStudentallfindDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG6 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CEdit n_pathname;
	afx_msg void OnBnClickedButton1();
	CEdit n_showcontent;
};
