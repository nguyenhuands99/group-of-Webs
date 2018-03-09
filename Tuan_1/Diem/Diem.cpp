#pragma

#include "Diem.h"
#include "math.h"

void nhapDiem(DIEM &a)
{
	printf("\nNhap toa do x, y cua diem:");
	scanf_s("%f%f", &a.iX, &a.iY);
}
void xuatDiem(DIEM a)
{
	printf("\n(%.2f, %.2f)", a.iX, a.iY);
}

double tinhKhoangCach(DIEM a, DIEM b)
{
	double khoangcach = sqrt(pow(float(a.iX - b.iX), 2) + pow(float(a.iY - b.iY), 2));
	return khoangcach;
}

//Hàm kiểm tra điểm thuộc góc phần tư nào: 
//	 Hàm trả về 1,2,3,4 tương ứng với góc phần tư thứ 1,2,3,4. 
//	 Trường hợp đặc biệt hàm trả về 0: gốc tọa độ; -1: nếu thuộc trục Ox, -2: nếu thuộc trục Oy
int kiemTraGocPhanTu(DIEM a)
{
	if (a.iX == 0 || a.iY == 0)
	{
		if (a.iX == 0 && a.iY != 0)
			return -2; //thuoc Oy
		else if (a.iY == 0 && a.iX != 0)
			return -1; //thuoc Ox
		else
			return 0; //la goc toa do
	}
	if (a.iX > 0)
	{
		if (a.iY > 0)
			return 1;
		else if (a.iY < 0)
			return 4;
	}
	else if (a.iX < 0)
	{
		if (a.iY > 0)
			return 2;
		else if (a.iY < 0)
			return 3;
	}
}

//Hàm tính chu vi tam giác:
//	Nếu không phải tam giác (thẳng hàng): trả về 0
//	Trả về chu vi nếu thỏa điều kiện tam giác
double chuViTamGiac(DIEM a, DIEM b, DIEM c)
{
	/*Xét điều kiện không tạo thành tam giác (3 điểm thẳng hàng):
		Ba điểm thẳng hàng khi và chỉ khi hệ số góc của đường thằng ab = hệ số góc của ac
		với:
		hệ số góc của ab k1 = (y2-y1)/(x2-x1)
		hệ số góc của ac k2 = (y3-y1)/(x3-x1)
		k1=k2 <=> (y2-y1)*(x3-x1) = (y3-y1)*(x2-x1) */

	if ((b.iY - a.iY)*(c.iX - a.iX) == (c.iY - a.iY)*(b.iX - a.iX))
	{
		return 0;
	}

	double ab = tinhKhoangCach(a, b), ac = tinhKhoangCach(a, c), bc = tinhKhoangCach(b, c);

	return ab + ac + bc;
}

double dienTichTamGiac(DIEM a, DIEM b, DIEM c)
{
	//Xét điều kiện tam giác
	if ((b.iY - a.iY)*(c.iX - a.iX) == (c.iY - a.iY)*(b.iX - a.iX))
	{
		return 0;
	}
	
	//Tính diện tích theo công thức Heron: S = sqrt(p*(p-ab)*(p-ac)*(p-bc)) với p: nửa chu vi
	double p = chuViTamGiac(a, b, c) / 2;
	double ab = tinhKhoangCach(a, b), ac = tinhKhoangCach(a, c), bc = tinhKhoangCach(b, c);

	return sqrt(p*(p - ab)*(p - bc)*(p - ac));
}