
#pragma once
#include "Exp.h"

// UploadFileDlg 对话框
class UploadFileDlg : public CDialogEx
{
// 构造
public:
	UploadFileDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_UPLOADFILE_DIALOG};

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
private:
	CString editTextURL;
	CString editTextResult;
	CString editTextWriteData;
	Exp exp;

public:
	afx_msg void OnBnClickedGetrootpath();
	afx_msg void OnBnClickedWritebtn();
private:
	CString editTextWritePath;
};
