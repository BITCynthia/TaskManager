/*
PAGE4.h: ＾猟周箝誓￣匈遊猟周
恬宀��1120151782 藍從浣
*/
//！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！<藍從浣>
#pragma once


// PAGE4 斤三崇

class PAGE4 : public CDialogEx
{
	DECLARE_DYNAMIC(PAGE4)

public:
	PAGE4(CWnd* pParent = NULL);   // 炎彈更夛痕方
	virtual ~PAGE4();

	// 斤三崇方象
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PAGE4 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 屶隔
	CImageList m_ImageList;  //夕�饒弍�   
	HTREEITEM m_hRoot;       //Tree准泣鞘凹 功潤泣
	CString m_Dest;
	CString DirPath;
	CString PackPath;
	DECLARE_MESSAGE_MAP()
public:
	CListCtrl m_ListDir;
	CTreeCtrl m_TreeDir;
	virtual BOOL OnInitDialog();
	void GetDrives(HTREEITEM hParent);
	void WalkDir(HTREEITEM hParent);
	CString GetCurrentDir(HTREEITEM hCurrent);
	void AddSubDir(HTREEITEM hParent);
	//For File Copy
	void SetDirStr(CString str);
	CString GetDirStr();
	//For Package Copy
	void SetPackStr(CString str);
	CString GetPackStr();
	BOOL DeleteFolder(CString strPath);

	void ShowFileList(CString str);  //For Update
	afx_msg void OnItemexpandedTreeDir(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnSelchangedTreeDir(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnRclickListDir(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnDirAttr();
	afx_msg void OnDirDele();
	afx_msg void OnDirCreate();
	afx_msg void OnDirUpdate();
	afx_msg void OnSetfocusEditDest();
	afx_msg void OnEnChangeEditDest();
	afx_msg void OnClickedListOk();
	afx_msg void OnDirCopy();
	afx_msg void OnRclickTreeDir(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnPackCopy();
	afx_msg void OnTreeUpdate();
	afx_msg void OnPackDele();
};
//！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！</藍從浣>