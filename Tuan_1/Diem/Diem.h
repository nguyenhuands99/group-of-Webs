#include "stdio.h"

typedef struct Diem2D
{
	float iX;
	float iY;
}DIEM;

void nhapDiem(DIEM &a);

void xuatDiem(DIEM a);

double tinhKhoangCach(DIEM a, DIEM b);

//Hàm kiểm tra điểm thuộc góc phần tư nào: 
//	 Hàm trả về 1,2,3,4 tương ứng với góc phần tư thứ 1,2,3,4. 
//	 Trường hợp đặc biệt hàm trả về 0: gốc tọa độ; -1: nếu thuộc trục Ox, -2: nếu thuộc trục Oy
int kiemTraGocPhanTu(DIEM a);

//Hàm tính chu vi tam giác:
//	Nếu không phải tam giác (thẳng hàng): trả về 0
//	Trả về chu vi nếu thỏa điều kiện tam giác
double chuViTamGiac(DIEM a, DIEM b, DIEM c); 

double dienTichTamGiac(DIEM a, DIEM b, DIEM c);
