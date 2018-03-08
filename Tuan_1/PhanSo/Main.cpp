#pragma

#include "stdio.h"
#include "conio.h"
#include "PhanSo.h"

void main()
{
	PHANSO p[MAX];
	int n;
	nhapMangPhanSo(p, n);
	printf("\nXuat mang: ");
	xuatMangPhanSo(p, n);
	PHANSO tong, hieu, tich, thuong;
	tong = tongPhanSo(p[0], p[1]);
	hieu = hieuPhanSo(p[0], p[1]);
	tich = tichPhanSo(p[0], p[1]);
	thuong = thuongPhanSo(p[0], p[1]);
	printf("\nTong");
	xuatPhanSo(tong);
	printf("\nHieu");
	printf("\t");
	xuatPhanSo(hieu);
	printf("\nTich");
	printf("\t");
	xuatPhanSo(tich);
	printf("\nThuong");
	printf("\t");
	xuatPhanSo(thuong);
	printf("\nRut gon mang: ");
	rutGonMang(p, n);
	xuatMangPhanSo(p, n);
	printf("\nSap xep mang tang: ");
	sapXepMangTang(p, n);
	xuatMangPhanSo(p, n);
	PHANSO kt;
	kt.iTuSo = 1;
	kt.iMauSo = 2;
	if (kiemTraTrongMang(p, n, kt) == true)
	{
		printf("\nco");
	}
	else
	{
		printf("\nKhong");
	}
	_getch();
}