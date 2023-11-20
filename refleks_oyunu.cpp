#include <iostream>
#include <windows.h>
#include <thread>
#include <conio.h>
using namespace std;
int main(){setlocale(LC_ALL, "Turkish");
	cout << "Sayılarla Dans Etmeye Hazırmısın.. //Ekrana Çıkan Sayıyı Yaz" << endl;
	Sleep(1000);
	system("cls");
	int sayı[10] = { 1,2,3,4,5,6,7,8,9 ,0 };
	int tuş, tuşatama, skor = 0;
	for (;;) {
		int  yazılansayı = sayı[((int)rand() % 9)];
		if (yazılansayı == 1)
		{
			tuşatama = 49;
		}
		else if (yazılansayı == 2)
		{
			tuşatama = 50;
		}
		else if (yazılansayı == 3)
		{
			tuşatama = 51;
		}
		else if (yazılansayı == 4)
		{
			tuşatama = 52;
		}
		else if (yazılansayı == 5)
		{
			tuşatama = 53;
		}
		else if (yazılansayı == 6)
		{
			tuşatama = 54;
		}
		else if (yazılansayı == 7)
		{
			tuşatama = 55;
		}
		else if (yazılansayı == 8)
		{
			tuşatama = 56;
		}
		else if (yazılansayı == 9)
		{
			tuşatama = 57;
		}
		else if (yazılansayı == 0)
		{
			tuşatama = 48;
		}
		cout << yazılansayı;
		Sleep(600);
		system("cls");
		tuş = _getch();
		if (tuş == tuşatama) {
			skor = skor++;
			system("cls");
			continue;
		}
		else{
			break;
		}
	}
	cout << "SKOR: " << skor << endl;
	cout << "..//YAPIMCILAR: Yusuf ÇINAR & Eren HELVACI//.." << endl;
	return 0;
}
