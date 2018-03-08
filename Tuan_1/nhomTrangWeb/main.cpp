#pragma

#include "stdio.h"
#include "conio.h"
#include "NhomTrangWeb.h"

void main()
{
	TRANGWEB t1;
	NHOMTRANGWEB nhomWeb;

	nhomWeb.iSoTrangWeb = 0;

	nhapMotTrangWeb(t1);
	themNhomTrangWeb(nhomWeb, t1);

	//Next web

	nhapMotTrangWeb(t1);
	themNhomTrangWeb(nhomWeb, t1);

	//Next web

	nhapMotTrangWeb(t1);
	themNhomTrangWeb(nhomWeb, t1);

	sapXepTrangWebTheoNgay(nhomWeb);
	xuatMotTrangWeb(nhomWeb.arrTrangWeb[0]);


	_getch();

}