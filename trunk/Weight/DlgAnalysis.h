#pragma once


// CDlgAnalysis 对话框

class CDlgAnalysis : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgAnalysis)

public:
	CDlgAnalysis(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CDlgAnalysis();

// 对话框数据
	enum { IDD = IDD_DIALOG_ANALYSIS };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
};
