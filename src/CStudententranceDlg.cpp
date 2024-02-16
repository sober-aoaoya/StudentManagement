// CStudententranceDlg.cpp: 实现文件
//

#include "pch.h"
#include "StudentManagement.h"
#include "afxdialogex.h"
#include "CStudententranceDlg.h"
#include <fstream>
#include "Cpublic.h"

// CStudententranceDlg 对话框

IMPLEMENT_DYNAMIC(CStudententranceDlg, CDialogEx)

CStudententranceDlg::CStudententranceDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG2, pParent)
	, m_radio1(0)
	, m_radio2(FALSE)
{

}

CStudententranceDlg::~CStudententranceDlg()
{
}

void CStudententranceDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_COMBO1, Combo1);
	DDX_Control(pDX, IDC_COMBO2, Combo2);
	DDX_Control(pDX, IDC_EDIT3, m_pathname);
	DDX_Control(pDX, IDC_EDIT1, getName);
	DDX_Control(pDX, IDC_EDIT2, getID);
	DDX_Check(pDX, IDC_CHECK1, m_radio1);
	DDX_Check(pDX, IDC_CHECK2, m_radio2);
}


BEGIN_MESSAGE_MAP(CStudententranceDlg, CDialogEx)
//	ON_BN_CLICKED(IDC_BUTTON1, &CStudententranceDlg::OnBnClickedButton1)
	ON_CBN_SELCHANGE(IDC_COMBO1, &CStudententranceDlg::OnCbnSelchangeCombo1)
	ON_BN_CLICKED(IDC_BUTTON2, &CStudententranceDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON1, &CStudententranceDlg::OnBnClickedButton1)
	ON_CBN_SELCHANGE(IDC_COMBO2, &CStudententranceDlg::OnCbnSelchangeCombo2)
	ON_BN_CLICKED(IDC_CHECK1, &CStudententranceDlg::OnBnClickedCheck1)
END_MESSAGE_MAP()


// CStudententranceDlg 消息处理程序


//void CStudententranceDlg::OnBnClickedButton1()
//{
	// TODO: 在此添加控件通知处理程序代码
//	MessageBox(_T("录入成功"));
//}


void CStudententranceDlg::OnCbnSelchangeCombo1()
{
	// TODO: 在此添加控件通知处理程序代码
	int i = Combo1.GetCurSel();

	if (i == 0) {
		Combo2.ResetContent();
		Combo2.AddString(_T("智能制造"));
		Combo2.AddString(_T("机械工程"));
		Combo2.AddString(_T("测控技术与仪器"));
		Combo2.AddString(_T("工业工程"));
		Combo2.AddString(_T("过程控制与成型"));
	}
	else if (i == 1) {
		Combo2.ResetContent();
		Combo2.AddString(_T("信息工程"));
		Combo2.AddString(_T("通信工程"));
		Combo2.AddString(_T("电子信息工程"));
		Combo2.AddString(_T("电子科学与技术"));
	}
	int iIndex1 = Combo1.GetCurSel();
	if (iIndex1 != CB_ERR)
	{
		Combo1.GetLBText(iIndex1, college);
	}
}

void CStudententranceDlg::OnCbnSelchangeCombo2()
{
	// TODO: 在此添加控件通知处理程序代码
	int iIndex2 = Combo2.GetCurSel();
	if (iIndex2 != CB_ERR)
	{
		Combo2.GetLBText(iIndex2, major);
	}
}


void CStudententranceDlg::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	CFileDialog* pOpenFile;
	pOpenFile = new CFileDialog(TRUE, _T("txt"), NULL, OFN_HIDEREADONLY, _T("TXT Files (*.txt)|*.txt|DAT Files (*.dat)|*.dat||"));
	pOpenFile->DoModal();

	CString filepath;
	filepath = pOpenFile->GetPathName();
	m_pathname.SetWindowTextW(filepath);
}

void CStudententranceDlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnOK();
	CString name;
	getName.GetWindowTextW(name);
	USES_CONVERSION;
	std::string theName(W2A(name));

	CString ID;
	getID.GetWindowTextW(ID);
	long int theID = _ttoi(ID);

	CString filepath;
	m_pathname.GetWindowTextW(filepath);
	std::string theFilepath(W2A(filepath));

	std::string theCollege(W2A(college));
	std::string theMajor(W2A(major));
	std::string theGender = gender;

	CPublic::mc.addStudent(theName, theID, theCollege, theMajor,theGender);
	CPublic::mc.saveStudent(theFilepath);
}

void CStudententranceDlg::OnBnClickedCheck1()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
	if(m_radio1==1 && m_radio2==0){
		gender = "男";
	}
	else if (m_radio2==1 && m_radio1 == 0) {
		gender = "女";
	}
	else if (m_radio1==1 && m_radio2==1) {
		MessageBox(_T("只能选择一个性别"));
	}
	else {
		MessageBox(_T("请选择性别"));
	}
	UpdateData(FALSE);
}
