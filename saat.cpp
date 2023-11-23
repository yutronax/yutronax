#include <iostream>
#include < windows.h>
#include <thread>

using namespace std;
int main() {
	setlocale(LC_ALL, "Turkish"); 



	int saniye  ,dakika  ,saat , gün;
	
	cout << "lütfen günü yazın" << endl;
	cin >> gün;
	if (-1 <= gün && gün>= 366) {
		cout << "lütfen günü 0 - 365 arası giriniz " << endl;
		cin >> gün;
	}
	cout << "lütfen saat yazın" << endl;
	cin >> saat;
	if (-1 > saat || 25 < saat ) {
		cout << "lütfen saati 0 - 24 arası giriniz" << endl;
		cin >> saat;
	}
	cout << "lütfen dakika yazın" << endl;
	cin >> dakika;
	if (-1 >dakika  ||61 < dakika ) {
		cout << "lütfen dakikayı 0 - 60 arası giriniz" << endl;
		cin >> dakika;
	}
	cout << "lütfen saniye yazın" << endl;
	cin >> saniye;
		if (-1 > saniye || 61 < saniye) {
		cout << "lütfen saniyeyi 0 - 60 arası giriniz" << endl;
		cin >> saniye;
	}
	
	
	


	system("cls");
	for (;;) {
		saniye = saniye++;
		


		if (saniye == 60) {
			saniye = 00;
			dakika = dakika++;


			if (dakika == 60) {
				dakika = 00;
				saat = saat++;
				if (saat == 24) {
					saat = 00;
					gün = gün++;
					if (gün == 365) {
						break;
					}
				}
			}
		}
		



		cout << gün << ":" << saat << ":" << dakika << ":" << saniye << endl;
Sleep(1000);
	}
		

	return 0;

}
