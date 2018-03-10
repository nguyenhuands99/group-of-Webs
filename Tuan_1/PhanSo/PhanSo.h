#include "stdio.h"
#define MAX 50

typedef struct phanSo
{
	int iTuSo;
	int iMauSo;
}PHANSO;

//Hàm nhập phân số, điều kiện mẫu khác 0
void nhapPhanSo(PHANSO &p); 

/*Hàm xuất phân số dưới dạng chuẩn (chưa rút gọn):
	 chuyển dấu "-" ở dưới mẫu lên tử*/
void xuatPhanSo(PHANSO &p);

PHANSO tongPhanSo(PHANSO p1, PHANSO p2);

PHANSO hieuPhanSo(PHANSO p1, PHANSO p2);

PHANSO tichPhanSo(PHANSO p1, PHANSO p2);

PHANSO thuongPhanSo(PHANSO p1, PHANSO p2);

//hàm trả về ước chung lớn nhất 2 số, trả về 0 nếu không có ước chung. vd:UCLN(0,0)
int UCLN(int a, int b); 

PHANSO rutGonPhanSo(PHANSO &p);

int soSanhPhanSo(PHANSO p1, PHANSO p2);

void nhapMangPhanSo(PHANSO p[], int &n);

void xuatMangPhanSo(PHANSO p[], int n);

void rutGonMang(PHANSO p[], int n);

void sapXepMangTang(PHANSO p[], int n);

bool kiemTraTrongMang(PHANSO p[], int n, PHANSO x);
