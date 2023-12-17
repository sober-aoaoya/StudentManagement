#pragma once
#include "afxdialogex.h"
#include <iostream>


// CStudententranceDlg 对话框

class CStudententranceDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CStudententranceDlg)

public:
	CStudententranceDlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CStudententranceDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	// afx_msg void OnBnClickedButton1();
// afx_msg void OnBnClickedButton1();
	CComboBox Combo1;
	CComboBox Combo2;
	afx_msg void OnCbnSelchangeCombo1();
	afx_msg void OnBnClickedButton2();
	CEdit m_pathname;
	CEdit getName;
	CEdit getID;
	CString college;
	CString major;
	std::string gender;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnCbnSelchangeCombo2();
	afx_msg void OnBnClickedCheck1();
	int m_radio1;
	BOOL m_radio2;
};
