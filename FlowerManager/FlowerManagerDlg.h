/*
FlowerManagerDlg.h: 麼崇尺遊猟周
恬宀��1120151769 作房群
	 1120151775 袋浣
*/
//！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！<作房群>

#pragma once
#include"PAGE1.h"
#include"PAGE2.h"
#include"PAGE3.h"
#include"PAGE4.h"
#include"PAGE5.h"
#include"PAGE6.h"
#include"PAGE7.h"

#define WM_SHOWTASK (WM_USER +1) 

// FlowerManagerDlg 斤三崇
class FlowerManagerDlg : public CDialogEx
{
	// 更夛
public:
	FlowerManagerDlg(CWnd* pParent = NULL);	// 炎彈更夛痕方

											// 斤三崇方象
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TASKMGR_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 屶隔


														// 糞��
protected:
	HICON m_hIcon;
	CMenu TopMenu;
//！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！</作房群>
//！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！<袋浣>
	CTabCtrl m_tab;				//炎禰匈
	PAGE1 Process;				//序殻
	PAGE2 Performance;			//來嬬
	PAGE3 Net;					//利大
	PAGE4 FileLook;				//猟周箝誓
	PAGE5 FileClean;			//猟周賠尖
	PAGE6 Detail;				//�袁湖渡�
	PAGE7 Memeory;				//坪贋
								// 伏撹議��連啌符痕方
	virtual BOOL OnInitDialog();
//！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！</袋浣>
//！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！<作房群>
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
//！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！</作房群>
//！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！<袋浣>
public:
	afx_msg void OnTcnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult);	//俳算炎禰匈
//！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！</袋浣>
//！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！<作房群>
	afx_msg void OnExit();												//曜竃砿尖匂
	afx_msg void OnUpdateTop(CCmdUI *pCmdUI);							//崔競才函��崔競
	afx_msg LRESULT OnShowTask(WPARAM wParam, LPARAM lParam);			//志鹸順中痕方
	void ToTray();														//恷弌晒欺熔徒
	void DeleteTray();													//評茅熔徒
	afx_msg void OnAbout();												//起竃＾購噐￣崇
};

static int TopClick = 0;		//崔競暇汽泣似肝方
//！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！</作房群>