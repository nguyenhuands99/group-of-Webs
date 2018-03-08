#pragma

#include "stdio.h"
#include "Diem.h"
#include "conio.h"

void main()
{
	DIEM a, b, c;
	nhapDiem(a);
	nhapDiem(b);
	nhapDiem(c);
	xuatDiem(a);
	xuatDiem(b);
	xuatDiem(c);
	printf("\n%d", kiemTraGocPhanTu(c));
	printf("\nd = %lf", tinhKhoangCach(a, b));
	printf("\n Chu vi = %lf", chuViTamGiac(a, b, c));
	printf("\n Dien tich = %lf", dienTichTamGiac(a, b, c));

	_getch();
}