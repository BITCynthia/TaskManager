/*
VMWalker.h: ＾�袁湖渡◆頴蘢眥擺耙獲稽勅�
恬宀��1120151764 蛎珍杷
*/
//！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！<蛎珍杷>
#pragma once


// VMWalker 斤三崇

class VMWalker : public CDialogEx
{
	DECLARE_DYNAMIC(VMWalker)

public:
	VMWalker(CWnd* pParent = nullptr);   // 炎彈更夛痕方
	virtual ~VMWalker();

	// 斤三崇方象
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_VMWALKER };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 屶隔

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	CString pid;
	CString pname;
	CString psize;
	CEdit m_pid;
	CEdit m_pname;
	CEdit m_psize;
	CListCtrl m_list_vmwalker;
	void AddItem(TCHAR* startAddtrss, TCHAR* endAddress, TCHAR* size,
		TCHAR* state, TCHAR* protection, TCHAR* type, TCHAR* name);
	void WalkVM(HANDLE hProcess);
	DWORD GetProcessidFromName(LPCTSTR name);
};
//！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！</蛎珍杷>