#include <iostream>
#include<conio.h>
using namespace std;
int tuş;
void sayfayazıyazma(int y, string sayfay[10]) {
	tuş = _getch();
	if (tuş == 9) {
		system("cls");
		cout << "SAYFA: " << y << endl;
		for (int i = 0; i <= 9; i = i++) {
			cin >> sayfay[i];
		}
		system("cls");
	}
}
void sayfayazıgösterme(string sayıx[10]) {
	system("cls");
	for (int i = 1; i <= 9; i = i++) {
		cout << sayıx[i] << endl;
	}
	cout << endl << "..//YAPIMCILAR: Yusuf ÇINAR & Eren HELVACI//.." << endl;
}
int main() {
	setlocale(LC_ALL, "Turkish");
	string sayı1[10], sayı2[10], sayı3[10], sayı4[10], sayı5[10], sayı6[10], sayı7[10], sayı8[10], sayı9[10];
	string* sayfa1 = sayı1;
	string* sayfa2 = sayı2;
	string* sayfa3 = sayı3;
	string* sayfa4 = sayı4;
	string* sayfa5 = sayı5;
	string* sayfa6 = sayı6;
	string* sayfa7 = sayı7;
	string* sayfa8 = sayı8;
	string* sayfa9 = sayı9;
	for (;;) {
		cout << "1. Sayfa Devam Etmek İçin (TAB)'a Basın [<|>] 2. Sayfaya Geçmek İçin (ESC)'ye Basın" << endl;
		sayfayazıyazma(1, sayfa1);
		cout << "2. Sayfa Devam Etmek İçin (TAB)'a Basın [<|>] 3. Sayfaya Geçmek İçin (ESC)'ye Basın" << endl;
		sayfayazıyazma(2, sayfa2);
		cout << "3. Sayfa Devam Etmek İçin (TAB)'a Basın [<|>] 4. Sayfaya Geçmek İçin (ESC)'ye Basın" << endl;
		sayfayazıyazma(3, sayfa3);
		cout << "4. Sayfa Devam Etmek İçin (TAB)'a Basın [<|>] 5. Sayfaya Geçmek İçin (ESC)'ye Basın" << endl;
		sayfayazıyazma(4, sayfa4);
		cout << "5. Sayfa Devam Etmek İçin (TAB)'a Basın [<|>] 6. Sayfaya Geçmek İçin (ESC)'ye Basın" << endl;
		sayfayazıyazma(5, sayfa5);
		cout << "6. Sayfa Devam Etmek İçin (TAB)'a Basın [<|>] 7. Sayfaya Geçmek İçin (ESC)'ye Basın" << endl;
		sayfayazıyazma(6, sayfa6);
		cout << "7. Sayfa Devam Etmek İçin (TAB)'a Basın [<|>] 8. Sayfaya Geçmek İçin (ESC)'ye Basın" << endl;
		sayfayazıyazma(7, sayfa7);
		cout << "8. Sayfa Devam Etmek İçin (TAB)'a Basın [<|>] 9. Sayfaya Geçmek İçin (ESC)'ye Basın" << endl;
		sayfayazıyazma(8, sayfa8);
		cout << "9. Sayfa Devam Etmek İçin (TAB)'a Basın [<|>] Yazılan Notları Görmek İçin (ESC)'ye Basın" << endl;
		tuş = _getch();
		if (tuş == 9) {
			system("cls");
			cout << "SAYFA: 9" << endl;
			for (int i = 0; i <= 9; i = i++) {
				cin >> sayfa9[i];
			}
			system("cls");
		}
		else if (tuş == 27)
		{
			break;
		}
	}
	cout << "/Sayfa Numarasını Gir (1,2,3,4,5,6,7,8,9)//.." << endl;
	for (;;) {
		tuş = _getch();
		if (tuş == 49) {
			sayfayazıgösterme(sayı1);
		}
		else if (tuş == 50) {

			sayfayazıgösterme(sayı2);
		}
		else if (tuş == 51) {
			sayfayazıgösterme(sayı3);
		}
		else if (tuş == 52) {
			sayfayazıgösterme(sayı4);
		}
		else if (tuş == 53) {
			sayfayazıgösterme(sayı5);
		}
		else if (tuş == 54) {
			sayfayazıgösterme(sayı6);
		}
		else if (tuş == 55) {
			sayfayazıgösterme(sayı7);
		}
		else if (tuş == 56) {
			sayfayazıgösterme(sayı8);
		}
		else if (tuş == 57) {
			sayfayazıgösterme(sayı9);
		}
	}
	cout << endl << "..//YAPIMCILAR: Yusuf ÇINAR & Eren HELVACI//.." << endl;
	return 0;
}
