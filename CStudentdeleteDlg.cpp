// CStudentdeleteDlg.cpp: 实现文件
//

#include "pch.h"
#include "StudentManagement.h"
#include "afxdialogex.h"
#include "CStudentdeleteDlg.h"
#include "CPublic.h"
#include <fstream>


// CStudentdeleteDlg 对话框

IMPLEMENT_DYNAMIC(CStudentdeleteDlg, CDialogEx)

CStudentdeleteDlg::CStudentdeleteDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG5, pParent)
{

}

CStudentdeleteDlg::~CStudentdeleteDlg()
{
}

void CStudentdeleteDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, deleteID);
}


BEGIN_MESSAGE_MAP(CStudentdeleteDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CStudentdeleteDlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// CStudentdeleteDlg 消息处理程序


void CStudentdeleteDlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnOK();
	CString ID;
	deleteID.GetWindowTextW(ID);
	long int theID = _ttoi(ID);

	CPublic::mc.deleteStudent(theID);
	std::ofstream ofs;
	ofs.open("students.txt", std::ofstream::out | std::ofstream::trunc);
	ofs.close();
	CPublic::mc.saveStudent("students.txt");
}
