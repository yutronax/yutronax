#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "Turkish");
	cout << "---/ADAM ASMACAYA (3.0) HOŞGELDİNİZ/--- (tek gerek olan sizinle oynaması için birini bulmak) :)" << endl;
	cout << "../Lütfen 5 Harfli Kelime Giriniz/.." << endl;
	char gizle='g';
	char yharf, yharf1, yharf2, yharf3, yharf4;
	cin >> yharf >> yharf1 >> yharf2 >> yharf3 >> yharf4;
	system("cls");
	cout << endl << "    Tahmin Edilecek Kelime Belirlendi: ";
	cout << yharf << yharf1 << yharf2 << yharf3 << yharf4 << endl;
	cout << "Belirlenen Kelimeyi Gizlemek İçin (G)'ye basın" << endl;
	cin >> gizle;
	gizle = tolower(gizle);
	if (gizle=='g')
	{
     system("cls");
	}
	cout << endl << "//Şimdi Tahmin Zamanı//1. HARFİ GİR VE BAŞLA://" << endl;
	char tharf,tharf1, tharf2{}, tharf3, tharf4;
	cin >> tharf;
	system("cls");
	if (yharf != tharf)
	{
		for (int i = 0; i <= 2; i++)
		{
			cout << endl << "../YANLIŞ HARF GİRDİN!!!/.." << endl;
			cin >> tharf;
			system("cls");
			if (yharf == tharf)
			{
				cout << endl << "..DOĞRU HARF GİRDİN../Kelimenin Şuanki Hali: ";
				cout << tharf << endl;
				break;
			}
		}
		if (yharf != tharf)
		{
			cout << "KAYBETTİN";
			exit(0);
		}
	}
	system("cls");
	if (yharf == tharf)
	{
		cout << endl << "..DOĞRU HARF GİRDİN../Kelimenin Şuanki Hali: ";
		cout << tharf << endl;
	}	cin >> tharf1;
	system("cls");
	if (yharf1 != tharf1)
	{
		for (int i = 0; i <= 2; i++)
		{
			cout << endl << "../YANLIŞ HARF GİRDİN!!!/.." << endl;
			cin >> tharf1;
			system("cls");
			cout << "Kelimenin Şuanki Hali:" << tharf << endl;
			if (yharf1 == tharf1)
			{
				cout << endl << "..DOĞRU HARF GİRDİN../Kelimenin Şuanki Hali: ";
				cout << tharf << tharf1 << endl;
				break;
			}
		}
		if (yharf1!=tharf1)
		{
			cout << "KAYBETTİN";
			exit(0);

		}
	}
	system("cls");
	if (yharf1 == tharf1)
	{
		cout << endl << "..DOĞRU HARF GİRDİN../Kelimenin Şuanki Hali: ";
		cout << tharf << tharf1 << endl;

	}
	cin >> tharf2;
	system("cls");
	if (yharf2 != tharf2)
	{
		for (int i = 0; i <= 2; i++)
		{
			cout << endl << "../YANLIŞ HARF GİRDİN!!!/.." << endl;
			cin >> tharf2;
			system("cls");
			cout << "Kelimenin Şuanki Hali:" << tharf<<tharf1 << endl;
			if (yharf2 == tharf2)
			{
				cout << endl << "..DOĞRU HARF GİRDİN../Kelimenin Şuanki Hali: ";
				cout << tharf << tharf1 << tharf2 << endl;
				break;
			}
		}
		if (yharf2 != tharf2)
		{
			cout << "KAYBETTİN";
			exit(0);
		}
	}
	system("cls");
	if (yharf2 == tharf2)
	{
		cout << endl << "..DOĞRU HARF GİRDİN../Kelimenin Şuanki Hali: ";
		cout << tharf << tharf1 << tharf2 << endl;
	}
	cin >> tharf3;
	system("cls");
	if (yharf3 != tharf3)
	{
		for (int i = 0; i <= 2; i++)
		{
			cout << endl << "../YANLIŞ HARF GİRDİN!!!/.." << endl;
			cin >> tharf3;
			system("cls");
			cout << "Kelimenin Şuanki Hali:" << tharf << tharf1 <<tharf2<< endl;
			if (yharf3 == tharf3)
			{
				cout << endl << "..DOĞRU HARF GİRDİN../Kelimenin Şuanki Hali: ";
				cout << tharf << tharf1 << tharf2 << tharf3 << endl;
				break;
			}
		}
		if (yharf3 != tharf3)
		{
			cout << "KAYBETTİN";
			exit(0);
		}
	}
	system("cls");
	if (yharf3 == tharf3)
	{
		cout << endl << "..DOĞRU HARF GİRDİN../Kelimenin Şuanki Hali: ";
		cout << tharf << tharf1 << tharf2 << tharf3 << endl;
	}
	cin >> tharf4;
	system("cls");
	if (yharf4 != tharf4)
	{
		for (int i = 0; i <= 2; i++)
		{
			cout << endl << "../YANLIŞ HARF GİRDİN!!!/.." << endl;
			cin >> tharf4;
			system("cls");
			cout << "Kelimenin Şuanki Hali:" << tharf << tharf1 << tharf2 << tharf3 << endl;
			if (yharf4 == tharf4)
			{
				cout << endl << "..DOĞRU HARF GİRDİN../Kelimenin Şuanki Hali: ";
				cout << tharf << tharf1 << tharf2 << tharf3 << tharf4 << endl;
				break;
			}
		}
		if (yharf4 != tharf4)
		{
			cout << "KAYBETTİN";
			exit(0);
		}
	}
	system("cls");
	if (yharf4 == tharf4)
	{
		cout << endl << "..DOĞRU HARF GİRDİN VE KELİME TAMAMLANDI../Kelime: ";
		cout << tharf << tharf1 << tharf2 << tharf3 << tharf4 << endl;
	}
	cout << "TEBRİKLER KELİMEYİ BULDUNUZ" << endl;
	cout << "..//YAPIMCILAR: Yusuf ÇINAR & Eren HELVACI//.." << endl;
	return 0;
}
