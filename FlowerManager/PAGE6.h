/*
PAGE6.h: ＾�袁湖渡◆衛獲稽勅�
恬宀��1120151764 蛎珍杷
*/
//！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！<蛎珍杷>
#pragma once
#include "afxcmn.h"

//#pragma comment(lib,"atlsd.lib") 


// PAGE6 斤三崇

class PAGE6 : public CDialogEx
{
	DECLARE_DYNAMIC(PAGE6)

public:
	PAGE6(CWnd* pParent = NULL);   // 炎彈更夛痕方
	virtual ~PAGE6();

	// 斤三崇方象
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PAGE6 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 屶隔
	static int CALLBACK MyCompareProc(LPARAM lParam1, LPARAM lParam2, LPARAM lParamSort);
	DECLARE_MESSAGE_MAP()
public:
	CListCtrl m_list_page6;
	virtual BOOL OnInitDialog();
	void AddItem(TCHAR* name, TCHAR* pid, TCHAR* memory, TCHAR* description);
	void ListProc();
	void GetProcessFilePath(IN HANDLE hProcess, OUT CString& sFilePath);
	DWORD GetProcessidFromName(LPCTSTR name);
	afx_msg void OnLvnColumnclickListDetail(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnBnClickedButtonKillprocess();
	afx_msg void OnBnClickedButtonFreshenP6();
	afx_msg void OnBnClickedButtonVmwalker();
};
//！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！</蛎珍杷>