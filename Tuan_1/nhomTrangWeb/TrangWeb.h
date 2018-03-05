#pragma
#include "stdio.h"

typedef struct trangWeb
{
	char strTenTrangWeb[50];
	unsigned int iSoLuotNgay; //Số lượt truy cập trong ngày
	unsigned int iSoLuotThang; //Số lượt truy cập trong tháng
} TRANGWEB;

void nhapMotTrangWeb(TRANGWEB &t);
void xuatMotTrangWeb(TRANGWEB t);

/*So sánh số lượt truy cập trong ngày của 2 trang web
	Input: 
		t1, t2 : thông tin của 2 web
	Output:
		0: số lượt truy cập của web 1 ít hơn số lượt của web 2
		1: ngược lại */

int soSanhHaiTrangWeb(TRANGWEB t1, TRANGWEB t2);

//#endif