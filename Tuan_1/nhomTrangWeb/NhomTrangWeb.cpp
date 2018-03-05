#pragma
#include "NhomTrangWeb.h"

//thêm thông tin một trang web t vào nhóm trang web
void themNhomTrangWeb(NHOMTRANGWEB &nhomTrangWeb, TRANGWEB t)
{
	if (nhomTrangWeb.iSoTrangWeb >= MAXWEB)
	{
		printf("\nDa het cho chua trang web");
	}
	else
	{
		++nhomTrangWeb.iSoTrangWeb;
		nhomTrangWeb.arrTrangWeb[nhomTrangWeb.iSoTrangWeb] = t;
	}
}

//xuất web có số thứ tự iStt trong nhóm
void xuatNhomTrangWeb(NHOMTRANGWEB nhomTrangWeb, unsigned int iStt)
{
	if (iStt > nhomTrangWeb.iSoTrangWeb)
	{
		printf("\nKhong ton tai trang web nay");
	}
	else
	{
		xuatMotTrangWeb(nhomTrangWeb.arrTrangWeb[iStt]);
	}
}

//Sắp xếp trong web trong nhóm trang web theo thứ tự giảm dần theo số lượt truy cập trong ngày
void sapXepTrangWebTheoNgay(NHOMTRANGWEB &nhomTrangWeb)
{
	for (int i = 0; i < nhomTrangWeb.iSoTrangWeb - 1; i++)
	{
		for (int j = 1; j < nhomTrangWeb.iSoTrangWeb; j++)
		{
			if (soSanhHaiTrangWeb(nhomTrangWeb.arrTrangWeb[i], nhomTrangWeb.arrTrangWeb[j]) == 0)
			{
				//Hoán vị 2 trang web trong nhóm

				/*HoanVi(nhomTrangWeb.arrTrangWeb[i], nhomTrangWeb.arrTrangWeb[j]);*/
				TRANGWEB temp;
				*temp.strTenTrangWeb = *nhomTrangWeb.arrTrangWeb[i].strTenTrangWeb;
				temp.iSoLuotNgay = nhomTrangWeb.arrTrangWeb[i].iSoLuotNgay;
				temp.iSoLuotThang = nhomTrangWeb.arrTrangWeb[i].iSoLuotThang;
				nhomTrangWeb.arrTrangWeb[i] = nhomTrangWeb.arrTrangWeb[j];
				*nhomTrangWeb.arrTrangWeb[j].strTenTrangWeb=*temp.strTenTrangWeb;
				nhomTrangWeb.arrTrangWeb[j].iSoLuotNgay = temp.iSoLuotNgay;
				nhomTrangWeb.arrTrangWeb[j].iSoLuotThang = temp.iSoLuotThang;
			}
		}
	}
}

//void HoanVi(TRANGWEB &a, TRANGWEB &b)
//{
//	TRANGWEB temp;
//	temp = a;
//	a = b;
//	b = temp;
//}