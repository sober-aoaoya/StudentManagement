// CStudentallfindDlg.cpp: 实现文件
//

#include "pch.h"
#include "StudentManagement.h"
#include "afxdialogex.h"
#include "CStudentallfindDlg.h"


// CStudentallfindDlg 对话框

IMPLEMENT_DYNAMIC(CStudentallfindDlg, CDialogEx)

CStudentallfindDlg::CStudentallfindDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG6, pParent)
{

}

CStudentallfindDlg::~CStudentallfindDlg()
{
}

void CStudentallfindDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, n_pathname);
	DDX_Control(pDX, IDC_EDIT3, n_showcontent);
}


BEGIN_MESSAGE_MAP(CStudentallfindDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CStudentallfindDlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// CStudentallfindDlg 消息处理程序


void CStudentallfindDlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	CFileDialog* pOpenFile;
	pOpenFile = new CFileDialog(TRUE, _T("txt"), NULL, OFN_HIDEREADONLY, _T("TXT Files (*.txt)|*.txt|DAT Files (*.dat)|*.dat||"));
	pOpenFile->DoModal();

	CString filepath;
	filepath = pOpenFile->GetPathName();
	n_pathname.SetWindowTextW(filepath);

	CFile file(filepath, CFile::modeRead);
	char* pBuf;
	int iLen = file.GetLength();
	pBuf = new char[iLen + 1];
	file.Read(pBuf, iLen);
	pBuf[iLen] = 0;
	file.Close();
	CString str = CA2T(pBuf);
	n_showcontent.SetWindowText(str);
	delete[] pBuf;
}
