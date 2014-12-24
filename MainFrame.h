#include <afxwin.h>
#include "fysik/Physics.h"
#include "Player.h"
#include <iostream>

using namespace std;

#define UPDATE_TIMER 1

class CMainFrame: public CFrameWnd {
private:
	Physics engine;
	vector<Object*> *objects;
	Player p1;
	Player p2;
	CPoint MousePos;
	bool start;
	char keys[255];
	int angle;

public:
	CMainFrame();
	~CMainFrame();

	afx_msg void OnPaint();
	afx_msg void OnKeyDown(UINT nChar, UINT nRep, UINT nFlags);
	afx_msg void OnKeyUp(UINT nChar, UINT nRep, UINT nFlags);
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg void OnMouseMove(UINT nFlags, CPoint pt);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint pt);
	
	DECLARE_MESSAGE_MAP();
};
