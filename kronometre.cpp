#include <iostream>
#include < windows.h>
#include <conio.h>
#include <thread>
using namespace std;
unsigned int sayı;
unsigned int tuş;
unsigned char tuş1;

void sayı1() {
cout << endl << endl << endl << endl << "    " << "    " << "    " << "    "
		<< "    " << "   " << "   " << "   " << "   " << "   " << "   " << "   " << "   " << endl << "    " << "    " << "    " << "    "
		<< "zamanı başlatmak için lütfen değer girin" << ">>> ";
cin >> sayı; 
}


void gerisayım() {

	for (;;) {

		sayı = sayı--;
		Sleep(1000);

		if (sayı == 0) {
			system("cls");
			cout << endl << endl << endl << endl << "    " << "    " << "    " << "    "
				<< "    " << "###" << "###" << "###" << "###" << "###" << "###" << "###" << "###" << "###" << endl << "    " << "    " << "    " << "    "
				<< "    " << ">>>" << ">>>" << ">>>" <<"süre bitti" << "<<<" << "<<<" << "<<" << endl << "    " << "    " << "    " << "    "
				<< "    " << "###" << "###" << "###" << "###" << "###" << "###" << "###" <<"###" << "###"<< endl;
			break;
		}

	}

}

void  yazı() {
	int saat = 0, dakika = 0, saniye = sayı + 2;
	while (saniye >= 60) {
		saniye = saniye - 60;
		dakika++;
		while (dakika >= 60) {
			dakika = dakika - 60;
			saat++;
		}
	}


	while(tuş!=1){
		
		
		saniye = saniye--;


		if (saniye <= 0 && dakika >= 0) {
			dakika = dakika--;
			saniye = saniye + 60;

			if (saniye <= 0 && dakika <= 0 && saat >= 0) {
				saat = saat--;

				dakika = dakika + 60;
				if (saat == 0 && saniye == 60 && dakika == -1) {
					saat = 0; dakika = 0; saniye = 0;
				}
			}

		}
		if (sayı == 0) {
			break;
		}



		cout << endl << endl << endl << endl << "    " << "    " << "    " << "    "
			<< "    " << "###" << "###" << "###" << "###" << "###" << "###" << "###" << "###" << endl << "    " << "    " << "    " << "    "
			<< "    " << ">>>" << ">>>" << ">>>" << saat << ":" << dakika << ":" << saniye << "<<<" << "<<<" << "<<<" << endl << "    " << "    " << "    " << "    "
			<< "    " << "###" << "###" << "###" << "###" << "###" << "###" << "###" << "###";
		Sleep(1000);
		system("cls");
	
	}




}
	



void ilkgösterim() {

	
	
	
	
	
	int saat = 0, dakika = 0, saniye = sayı;
	while (saniye >= 60) {
		saniye = saniye - 60;
		dakika++;
		while (dakika >= 60) {
			dakika = dakika - 60;
			saat++;
		}
	}
	system("cls");
	
	cout << endl << endl << endl << endl << "    " << "    " << "    " << "    "
		<< "    " << "###" << "###" << "###" << "###" << "###" << "###" << "###" << "###" << endl << "    " << "    " << "    " << "    "
		<< "    " << ">>>" << ">>>" << ">>>" << saat << ":" << dakika << ":" << saniye << "<<<" << "<<<" << "<<<" << endl << "    " << "    " << "    " << "    "
		<< "    " << "###" << "###" << "###" << "###" << "###" << "###" << "###" << "###"<< endl;
	cout  << "    " << "    " << "    " << "    "
		<< "    " << "   " << "   " << "   " << "   " << "   " << "   " << "   " << "   " << endl << "    " << "    " << "    " << "    "
		<< "    " << ">>>" << ">>>" << ">>>  tekrar giriş için 1'e basın";
	cout << "    " << "    " << "    " << "    "
		<< "    " << "   " << "   " << "   " << "   " << "   " << "   " << "   " << "   " << endl << "    " << "    " << "    " << "    "
		<< "    " << ">>>" << ">>>" << ">>>  ";
}

void stop1() {
	tuş = _getch();
	if (tuş == 27) {
		system("pause");

	}
	else {
		thread gerisayım1(gerisayım);
		thread gerisayım2(yazı);
		gerisayım1.join();
		gerisayım2.join();

	}
}

int main() {

	setlocale(LC_ALL, "Turkish");

	
	





	for (;;) {
		thread sayı2(sayı1);
		sayı2.join();

		thread stop(ilkgösterim);
		stop.join();
		
		system("pause");
	

		tuş = _getch();

			if (tuş == 49) {
				system("cls");
				continue;
			}
			else {
				thread gerisayım1(gerisayım);
				thread gerisayım2(yazı);
				
				gerisayım1.join();
				
				gerisayım2.join();
				
				continue;
			}
			




		






	}
	return 0;
}
