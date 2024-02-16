// CStudentlookforDlg.cpp: 实现文件
//

#include "pch.h"
#include "StudentManagement.h"
#include "afxdialogex.h"
#include "CStudentlookforDlg.h"
#include "CPublic.h"


// CStudentlookforDlg 对话框

IMPLEMENT_DYNAMIC(CStudentlookforDlg, CDialogEx)

CStudentlookforDlg::CStudentlookforDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG3, pParent)
{

}

CStudentlookforDlg::~CStudentlookforDlg()
{
}

void CStudentlookforDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, m_getname);
	DDX_Control(pDX, IDC_EDIT2, m_getID);
	DDX_Control(pDX, IDC_EDIT3, m_showinfo);
}


BEGIN_MESSAGE_MAP(CStudentlookforDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CStudentlookforDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CStudentlookforDlg::OnBnClickedButton2)
END_MESSAGE_MAP()


// CStudentlookforDlg 消息处理程序


void CStudentlookforDlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	CString name;
	Student* pstu;
	m_getname.GetWindowTextW(name);
	USES_CONVERSION;
	std::string theName(W2A(name));
	pstu=CPublic::mc.infoByName(theName);
	if (pstu != nullptr) 
	{
		std::string studentInfo = "Name: " + pstu->getName() + "      "
			+ "Gender: " + pstu->getGender() + "      "
			+ "ID: " + std::to_string(pstu->getID()) + "      "
			+ "College: " + pstu->getCollege() + "      "
			+ "Major: " + pstu->getMajor();
		CString cstrStudentInfo(studentInfo.c_str());
		m_showinfo.SetWindowText(cstrStudentInfo);
	}
	else 
	{
		MessageBox(0, _T("未找到该学生!"));
	}
}


void CStudentlookforDlg::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	CString ID;
	Student* pstu;
	m_getID.GetWindowTextW(ID);
	long int theID = _ttoi(ID);
	pstu = CPublic::mc.infoByID(theID);
	if (pstu != nullptr)
	{
		std::string studentInfo = "Name: " + pstu->getName() + "      "
			+ "Gender: " + pstu->getGender() + "      "
			+ "ID: " + std::to_string(pstu->getID()) + "      "
			+ "College: " + pstu->getCollege() + "      "
			+ "Major: " + pstu->getMajor();
		CString cstrStudentInfo(studentInfo.c_str());
		m_showinfo.SetWindowText(cstrStudentInfo);
	}
	else
	{
		MessageBox(0, _T("未找到该学生!"));
	}
}
