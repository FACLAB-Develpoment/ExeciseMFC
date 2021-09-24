
// ExamMFCDlg.h : header file
//

#pragma once


// CExamMFCDlg dialog
class CExamMFCDlg : public CDialogEx
{
// Construction
public:
	CExamMFCDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_EXAMMFC_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
	virtual LRESULT WindowProc(UINT message, WPARAM wParam, LPARAM lParam);
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
<<<<<<< HEAD
=======
	afx_msg void OnBnClickedButtonShowStr();
>>>>>>> 4c13b26532bd1312258ef8caa8e900a8771343e8
};
