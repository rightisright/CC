#include "botton.h"

// 开始菜单的按钮

// 开始游戏
void botton_start(int x, int y, int w, int h) {}
// 游戏设置
void botton_setting(int x, int y, int w, int h) {}
// 关于游戏
void botton_about(int x, int y, int w, int h) {}
// 退出游戏
void botton_exit(int x, int y, int w, int h) {}

// 游戏界面的按钮

// 暂停，音效，重玩
void botton_pause(int x, int y, int w, int h) {
	char s[] = "暂停";
	ExMessage msg = { 0 };
	int W = textwidth(s);
	int H = textheight(s);
	settextcolor(BLACK);
	setbkmode(TRANSPARENT);
	while (true) {
		if (peekmessage(&msg, EX_MOUSE | EX_KEY)) {}
		BeginBatchDraw();
		if (msg.message == WM_LBUTTONDOWN && msg.x > x && msg.x<x + w && msg.y>y && msg.y < y + h) {
			setfillcolor(RGB(70, 70, 70));
			fillroundrect(x, y, x + w, y + h, 10, 10);
		}
		else {
			setfillcolor(WHITE);
			fillroundrect(x, y, x + w, y + h, 10, 10);

		}
		outtextxy((w - W) / 2 + x, (h - H) / 2 + y, s);
		EndBatchDraw();
	}
	getchar();
}
void botton_voice(int x, int y, int w, int h) {
	char s[] = "音量";
	ExMessage msg = { 0 };
	int W = textwidth(s);
	int H = textheight(s);
	settextcolor(BLACK);
	setbkmode(TRANSPARENT);
	while (true) {
		if (peekmessage(&msg, EX_MOUSE | EX_KEY)) {}
		BeginBatchDraw();
		if (msg.message == WM_LBUTTONDOWN && msg.x > x && msg.x<x + w && msg.y>y && msg.y < y + h) {
			setfillcolor(RGB(70, 70, 70));
			fillroundrect(x, y, x + w, y + h, 10, 10);
		}
		else {
			setfillcolor(WHITE);
			fillroundrect(x, y, x + w, y + h, 10, 10);

		}
		outtextxy((w - W) / 2 + x, (h - H) / 2 + y, s);
		EndBatchDraw();
	}
	getchar();
}
int botton_reset(int x, int y, int w, int h) {
	char s[] = "重新开始";
	ExMessage msg = { 0 };
	int W = textwidth(s);
	int H = textheight(s);
	settextcolor(BLACK);
	setbkmode(TRANSPARENT);
	while (true) {
		if (peekmessage(&msg, EX_MOUSE | EX_KEY)) {}
		BeginBatchDraw();
		if (msg.message == WM_LBUTTONDOWN && msg.x > x && msg.x<x + w && msg.y>y && msg.y < y + h) {
			setfillcolor(RGB(70, 70, 70));
			fillroundrect(x, y, x + w, y + h, 10, 10);
		}
		else {
			setfillcolor(WHITE);
			fillroundrect(x, y, x + w, y + h, 10, 10);

		}
		outtextxy((w - W) / 2 + x, (h - H) / 2 + y, s);
		EndBatchDraw();
	}
	getchar();
}

// 左右下移，掉落 view
int botton_moveleft(int x, int y, int w, int h) {}
int botton_moveright(int x, int y, int w, int h) {}
int botton_movedown(int x, int y, int w, int h) {}
int botton_movetobottom(int x, int y, int w, int h) {}

// 关于游戏的按钮

// 游戏规则按钮
void botton_aboutrule(int x, int y, int w, int h) {}
// 开发人员按钮
void botton_aboutdevelopers(int x, int y, int w, int h) {}
