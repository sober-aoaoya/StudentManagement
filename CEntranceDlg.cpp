// CEntranceDlg.cpp: 实现文件
//

#include "pch.h"
#include "StudentManagement.h"
#include "afxdialogex.h"
#include "CEntranceDlg.h"
#include "CStudententranceDlg.h"
#include "CStudentlookforDlg.h"
#include "CStudenteditDlg.h"

// CEntranceDlg 对话框

IMPLEMENT_DYNAMIC(CEntranceDlg, CDialogEx)

CEntranceDlg::CEntranceDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

CEntranceDlg::~CEntranceDlg()
{
}

void CEntranceDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CEntranceDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CEntranceDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON3, &CEntranceDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON2, &CEntranceDlg::OnBnClickedButton2)
END_MESSAGE_MAP()


// CEntranceDlg 消息处理程序


void CEntranceDlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	CStudententranceDlg cStudententranceDlg;
	cStudententranceDlg.DoModal();
}


void CEntranceDlg::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	CStudentlookforDlg cstudentlookforDlg;
	cstudentlookforDlg.DoModal();
}


void CEntranceDlg::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	CStudenteditDlg cstudenteditDlg;
	cstudenteditDlg.DoModal();
}
