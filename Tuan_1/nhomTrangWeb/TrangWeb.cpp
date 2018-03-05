#pragma
#include "TrangWeb.h"

void nhapMotTrangWeb(TRANGWEB &t)
{
	printf("\nNhap dia chi: ");
	gets_s(t.strTenTrangWeb);
	printf("\nNhap so luong truy cap trong ngay va trong thang:  ");
	scanf_s("%d%d", &t.iSoLuotNgay, &t.iSoLuotThang);
	//Hai dòng code này có mục đích xóa " dấu Enter" 
	//tránh việc '\n' bị đưa vào gets
	int c;
	while ((c = getchar()) != '\n'&&c != EOF);
}

void xuatMotTrangWeb(TRANGWEB t)
{
	printf("\nTenn Web: %s", t.strTenTrangWeb);
	printf("\nSo luot truy cap trong ngay va thang: %d, %d", t.iSoLuotNgay, t.iSoLuotThang);
}

/*So sánh số lượt truy cập trong ngày của 2 trang web
	Input:
		t1, t2 : thông tin của 2 web
	Output:
		0: số lượt truy cập của web 1 ít hơn số lượt của web 2
		1: ngược lại */

int soSanhHaiTrangWeb(TRANGWEB t1, TRANGWEB t2)
{
	if (t1.iSoLuotNgay < t2.iSoLuotNgay)
	{
		return 0;
	}
	return 1;
}
