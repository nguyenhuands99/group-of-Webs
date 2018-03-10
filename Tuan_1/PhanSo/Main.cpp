#pragma

#include "stdio.h"
#include "conio.h"
#include "PhanSo.h"

void main()
{
	PHANSO p[MAX];
	int n;

	printf("\nNhap mang phan so");
	nhapMangPhanSo(p, n);
	printf("\nXuat mang: ");
	xuatMangPhanSo(p, n);

	PHANSO tong, hieu, tich, thuong;

	tong = tongPhanSo(p[0], p[1]); 
	hieu = hieuPhanSo(p[0], p[1]);
	tich = tichPhanSo(p[0], p[1]);
	thuong = thuongPhanSo(p[0], p[1]);
	printf("\nTong phan tu 1 va 2: ");
	xuatPhanSo(tong);
	printf("\nHieu phan tu 1 va 2: ");
	xuatPhanSo(hieu);
	printf("\nTich phan tu 1 va 2: ");
	xuatPhanSo(tich);
	printf("\nThuong phan tu 1 va 2: ");
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
		printf("\nCo");
	}
	else
	{
		printf("\nKhong");
	}
	_getch();
}