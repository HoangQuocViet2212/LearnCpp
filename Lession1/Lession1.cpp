/*
	bref: 
		Author: VietHQ
		Topic: Learning C++
*/

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

///* Tinh Ke Thua trong C++ () */

///* Base Class  */
//class Hinh
//{
//protected:
//	int width;
//	int height;
//
//public:
//	void SetWidth()
//	{	
//		cout << "Nhap vao chieu rong" << endl;
//		cin >> width;
//	}
//
//	void SetHeight()
//	{
//		cout << "Nhap vao chieu cao" << endl;
//		cin >> height;
//	}
//};
///* Base Class */
//class ChiPhiSonMau
//{
//public:
//	int TinhChiPhiSonMau(int DienTich)
//	{
//		return DienTich * 150000;
//	}
//};
///* Derived Class */
//class HinhChuNhat: public Hinh, public ChiPhiSonMau
//{
//public:
//	int TinhDienTich()
//	{
//		return width * height;
//	}
//};
///* Main function */
//int main()
//{
//	HinhChuNhat hcn;
//	int Dt;
//	
//	hcn.SetWidth();
//	hcn.SetHeight();
//
//	Dt = hcn.TinhDienTich();
//
//	cout << "Chi phi son mau la : " << hcn.TinhChiPhiSonMau(Dt) << endl;
//    return 0;
//}

/* Nap chong toan tu, ham */
/* 1. Function overloading */
class InDuLieu
{
public:
	void HamIn(int i)
	{
		cout << "Ham in so Nguyen : " << i << endl;
	}

	void HamIn(double f)
	{
		cout << "Ham in so Thuc: " << f << endl;
	}

	void HamIn(const char* c)
	{
		cout << "Ham in Ky Tu: " << c << endl;
	}
};

int main()
{
	InDuLieu idl;
	
	// In so Nguyen
	idl.HamIn(1314);

	// In so Thuc
	idl.HamIn(123.45);

	// In ky tu
	idl.HamIn("Viethq dad");
	return 0;
}


