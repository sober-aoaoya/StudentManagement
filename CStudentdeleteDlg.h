#pragma once
#include "afxdialogex.h"


// CStudentdeleteDlg 对话框

class CStudentdeleteDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CStudentdeleteDlg)

public:
	CStudentdeleteDlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CStudentdeleteDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG5 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	CEdit deleteID;
};
