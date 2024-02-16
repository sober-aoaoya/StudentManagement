#pragma once
#include "afxdialogex.h"


// CEntranceDlg 对话框

class CEntranceDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CEntranceDlg)

public:
	CEntranceDlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CEntranceDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton2();
};
