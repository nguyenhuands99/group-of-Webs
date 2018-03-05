#pragma

#include "stdio.h"
#include "TrangWeb.h"

#define MAXWEB 50

typedef struct nhomTrangWeb
{
	unsigned int iSoTrangWeb;
	TRANGWEB arrTrangWeb[MAXWEB]; //Lưu trữ tối đa 50 trang web
}NHOMTRANGWEB;

//Thêm thông tin một trang web t vào nhóm trang web
void themNhomTrangWeb(NHOMTRANGWEB &nhomTrangWeb, TRANGWEB t);

//Xuất trang web có số thứ tự iStt trong nhóm trang web
void xuatNhomTrangWeb(NHOMTRANGWEB nhomTrangWeb, unsigned int iStt);

//Sắp xếp các trang web theo giảm dần số lượt t ruy cập trong ngày
void sapXepTrangWebTheoNgay(NHOMTRANGWEB nhomTrangWeb);