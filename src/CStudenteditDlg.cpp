// CStudenteditDlg.cpp: 实现文件
//

#include "pch.h"
#include "StudentManagement.h"
#include "afxdialogex.h"
#include "CStudenteditDlg.h"
#include "CStudentdeleteDlg.h"
#include "CStudentallfindDlg.h"
#include "Cpublic.h"
#include <fstream>


// CStudenteditDlg 对话框

IMPLEMENT_DYNAMIC(CStudenteditDlg, CDialogEx)

CStudenteditDlg::CStudenteditDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG4, pParent)
{

}

CStudenteditDlg::~CStudenteditDlg()
{
}

void CStudenteditDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CStudenteditDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CStudenteditDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON3, &CStudenteditDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CStudenteditDlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON2, &CStudenteditDlg::OnBnClickedButton2)
END_MESSAGE_MAP()


// CStudenteditDlg 消息处理程序


void CStudenteditDlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	CStudentdeleteDlg cstudentdeleteDlg;
	cstudentdeleteDlg.DoModal();
}


void CStudenteditDlg::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	CPublic::mc.sortStudentByID();
	std::ofstream ofs;
	ofs.open("students.txt", std::ofstream::out | std::ofstream::trunc);
	ofs.close();
	CPublic::mc.saveStudent("students.txt");
}


void CStudenteditDlg::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	CPublic::mc.sortStudentByMajor();
	std::ofstream ofs;
	ofs.open("students.txt", std::ofstream::out | std::ofstream::trunc);
	ofs.close();
	CPublic::mc.saveStudent("students.txt");
}


void CStudenteditDlg::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	CStudentallfindDlg cstudentallfindDlg;
	cstudentallfindDlg.DoModal();
}
