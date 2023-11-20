#include <iostream>
#include<windows.h>
using namespace std;
int main() {
	char sonuc;
	setlocale(LC_ALL, "Turkish");
	cout << "şifre girin" << endl;
	char harf[30] = { 'a','b','c','ç','d','e','f','g','h','ı','i','j','k','l','m','n','o','ö','q','r','s','ş','t','u','ü','v','w','x','y','z' };
	char yaz = 0, yaz1 = 0, yaz2 = 0, yaz3 = 0;
	char sayı[10] = { '1','2','3','4','5','6','7','8','9','0' };
	cout << "Merhaba Şifreni 4 Haneli Belirle Ve Nasıl Kırıldığını İzle..." << endl;
	system("cls");
	char giriş, giriş1, giriş2, giriş3;
	cout << "Merhaba 4 Haneli Şifreni Belirle Ve Nasıl Kırıldığını İzle..." << endl;
	cout << "Şifre Kırılıyor..." << endl;
	cin >> giriş >> giriş1 >> giriş2 >> giriş3;
	Sleep(2000);
	if (giriş == 'a', 'b', 'c', 'ç', 'd', 'e', 'f', 'g', 'h', 'ı', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'ö', 'q', 'r', 's', 'ş', 't', 'u', 'ü', 'v', 'w', 'x', 'y', 'z')
	{
		for (int i = 0; i <= 29; harf[i++]) {

			cout << harf[i] << "-";
			Sleep(50);
			if (giriş == harf[i]) {
				yaz = harf[i];
				cout << endl << "  /1. HARF: " << yaz << endl;
				break;
			}
		}
	}
	cout << endl;
	if (giriş == '1', '2', '3', '4', '5', '6', '7', '8', '9', '0')
	{
		for (int i = 0; i <= 10; sayı[i++]) {

			cout << sayı[i];

			Sleep(50);
			if (giriş == sayı[i]) {
				yaz = sayı[i];
				cout << "  /1. RAKAM: " << yaz << endl;
				break;
			}
		}
	}
	cout << endl;
	Sleep(2500);
	if (giriş1 == 'a', 'b', 'c', 'ç', 'd', 'e', 'f', 'g', 'h', 'ı', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'ö', 'q', 'r', 's', 'ş', 't', 'u', 'ü', 'v', 'w', 'x', 'y', 'z')
	{
		for (int i = 0; i <= 29; harf[i++]) {

			cout << harf[i] << "-";

			Sleep(50);

			if (giriş1 == harf[i]) {
				yaz1 = harf[i];
				cout << "  /2. HARF: " << yaz1 << endl;
				break;

			}
		}
	}
	cout << endl;
	if (giriş1 == '1', '2', '3', '4', '5', '6', '7', '8', '9', '0')
	{
		for (int i = 0; i <= 10; sayı[i++]) {

			cout << sayı[i];

			Sleep(50);
			if (giriş1 == sayı[i]) {
				yaz1 = sayı[i];
				cout << "  /2. RAKAM: " << yaz1 << endl;
				break;
			}
		}
	}
	Sleep(3000);

	cout << endl;
	if (giriş2 == 'a', 'b', 'c', 'ç', 'd', 'e', 'f', 'g', 'h', 'ı', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'ö', 'q', 'r', 's', 'ş', 't', 'u', 'ü', 'v', 'w', 'x', 'y', 'z')
	{
		for (int i = 0; i <= 29; harf[i++]) {

			cout << harf[i] << "-";

			Sleep(50);

			if (giriş2 == harf[i]) {
				yaz2 = harf[i];
				cout << "  /3. HARF: " << yaz2 << endl;
				break;

			}
		}
	}
	cout << endl;
	if (giriş2 == '1', '2', '3', '4', '5', '6', '7', '8', '9', '0')
	{
		for (int i = 0; i <= 10; sayı[i++]) {

			cout << sayı[i];

			Sleep(50);	
			if (giriş2 == sayı[i]) {
				yaz2 = sayı[i];
				cout << "  /3. RAKAM: " << yaz2 << endl;
				break;
			}
		}
	}
	Sleep(3500);

	cout << endl;
	if (giriş3 == 'a', 'b', 'c', 'ç', 'd', 'e', 'f', 'g', 'h', 'ı', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'ö', 'q', 'r', 's', 'ş', 't', 'u', 'ü', 'v', 'w', 'x', 'y', 'z')
	{
		for (int i = 0; i <= 29; harf[i++]) {

			cout << harf[i] << "-";

			Sleep(50);

			if (giriş3 == harf[i]) {
				yaz3 = harf[i];
				cout << "  /4. HARF: " << yaz3 << endl;
				break;

			}
		}
	}cout << endl;

	if (giriş3 == '1', '2', '3', '4', '5', '6', '7', '8', '9', '0')
	{
		for (int i = 0; i <= 10; sayı[i++]) {

			cout << sayı[i];

			Sleep(50);
			if (giriş3 == sayı[i]) {
				yaz3 = sayı[i];
				cout << "  /4. RAKAM: " << yaz3 << endl;
				break;
			}
		}
	}
	Sleep(1500);
	system("cls");
	cout << "İzledin Ve Gördün.." << endl << "Şifre Kırıldı..." << endl;
	cout << "           ______________" << endl;
	cout << "           | Şifre: " << giriş << giriş1 << giriş2 << giriş3 << "|" << endl;
	cout << "           --------------" << endl << endl;

	return 0;
}
