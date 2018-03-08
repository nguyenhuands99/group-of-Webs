#pragma

#include "PhanSo.h"

void nhapPhanSo(PHANSO &p)
{
	do
	{
		printf("\nNhap tu so va mau so: ");
		scanf_s("%d%d", &p.iTuSo, &p.iMauSo);
		if (p.iMauSo == 0) 
		{
			printf("\nPhan so ban da nhap khong hop le. Vui long nhap lai");
		}
		else
			break;
	} while (p.iMauSo == 0);
}

void xuatPhanSo(PHANSO p)
{
	printf("%d/%d", p.iTuSo, p.iMauSo);
}

PHANSO tongPhanSo(PHANSO p1, PHANSO p2)
{
	PHANSO tong;
	
	if (p1.iMauSo == p2.iMauSo)
	{
		tong.iMauSo = p1.iMauSo;
		tong.iTuSo = p1.iTuSo + p2.iTuSo;
		return tong;
	}

	tong.iMauSo = p1.iMauSo*p2.iMauSo;
	tong.iTuSo = p1.iTuSo*p2.iMauSo + p2.iTuSo*p1.iMauSo;
	return tong;
}

PHANSO hieuPhanSo(PHANSO p1, PHANSO p2)
{
	PHANSO hieu;

	if (p1.iMauSo == p2.iMauSo)
	{
		hieu.iMauSo = p1.iMauSo;
		hieu.iTuSo = p1.iTuSo - p2.iTuSo;
		return hieu;
	}

	hieu.iMauSo = p1.iMauSo*p2.iMauSo;
	hieu.iTuSo = p1.iTuSo*p2.iMauSo - p2.iTuSo*p1.iMauSo;
	return hieu;
}

PHANSO tichPhanSo(PHANSO p1, PHANSO p2)
{
	PHANSO tich;
	tich.iMauSo = p1.iMauSo*p2.iMauSo;
	tich.iTuSo = p1.iTuSo*p2.iTuSo;
	return tich;
}

PHANSO thuongPhanSo(PHANSO p1, PHANSO p2)
{
	PHANSO thuong;
	thuong.iMauSo = p1.iMauSo*p2.iTuSo;
	thuong.iTuSo = p1.iTuSo*p2.iMauSo;
	return thuong;
}

int UCLN(int a, int b)
{
	int ucln = a;

	if (ucln > b)
	{
		ucln = b;
	}

	while (ucln > 0)
	{
		if (a%ucln == 0 && b%ucln == 0)
		{
			return ucln;
		}
		ucln--;
	}
	return 0; //Không có ước chung thỏa. vd: UCLN(0,0)

}

PHANSO rutGonPhanSo(PHANSO &p)
{
	//tìm ước chung lớn nhất của tử và mẫu
	int ucln = UCLN(p.iTuSo, p.iMauSo);
	//chia cả tử và mẫu cho UCLN của chúng
	if (ucln == 0) //Điều này xảy ra khi tử của phân số = 0
	{

		return p; //trả lại phân số 
	}
	// nếu tử khác 0 mới chia cho ước chung lớn nhất
	p.iMauSo /= ucln;
	p.iTuSo /= ucln;
	return p;
}

int soSanhPhanSo(PHANSO p1, PHANSO p2)
{
	int s = p1.iTuSo*p2.iMauSo - p1.iMauSo*p2.iTuSo;
	if (s == 0)
	{
		return 0;
	}
	else if (s > 0)
	{
		return 1;
	}
	return -1;
}

void nhapMangPhanSo(PHANSO p[], int &n)
{
	do
	{
		printf("\nNhap so phan tu cua mang: ");
		scanf_s("%d", &n);
	} while (n<1 || n>MAX);
	for (int i = 0; i < n; i++)
	{
		printf("\nNhap phan tu thu %d", i + 1);
		nhapPhanSo(p[i]);
	}
}
void xuatMangPhanSo(PHANSO p[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\t");
		xuatPhanSo(p[i]);
	}
}

void rutGonMang(PHANSO p[], int n)
{
	for (int i = 0; i < n; i++)
	{
		rutGonPhanSo(p[i]);
	}
}

void sapXepMangTang(PHANSO p[], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (soSanhPhanSo(p[i], p[j]) == 1)
			{
				//Hoán vị 2 phân số
				PHANSO temp;
				temp.iTuSo = p[i].iTuSo;
				temp.iMauSo = p[i].iMauSo;
				p[i].iTuSo = p[j].iTuSo;
				p[i].iMauSo = p[j].iMauSo;
				p[j].iTuSo = temp.iTuSo;
				p[j].iMauSo = temp.iMauSo;
			}
		}
	}
}

bool kiemTraTrongMang(PHANSO p[], int n, PHANSO x)
{
	for (int i = 0; i < n; i++)
	{
		if (soSanhPhanSo(p[i], x) == 0)
		{
			return true;
		}
	}
	return false;
}