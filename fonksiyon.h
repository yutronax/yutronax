#pragma once
#pragma once
#pragma once
#include "ulas�m.h"
#include "kara.h"
#include <conio.h>
#include <random>
#include "hava.h"

	random_device rassay�;
	uniform_int_distribution <int> aral�k(0, 3);
class fonksiyon {
public:
	ulas�m bilet;
	int plaka;
	int dugme;
	int dakika;
	  int plaka1;
	  int saat;
	  int say�1, say�2;
	  string ad;
 int bilet_numaras�;
	  bool c�k�s =true;

	void kfiyat(kara* bilet) {
		cout << "\nbilet �creti : ";
			
		bilet->gidisfiyat�(plaka);
		cout << "\ntoplam yolculuk s�resi : ";
	bilet->gidiss�resi(plaka);
	}
	
	void hs�re(hava* bilet) {
		cout << "\nbilet �creti : ";
			
		bilet->gidisfiyat�(plaka);
cout << "\ntoplam yolculuk s�resi : ";
bilet->gidiss�resi(plaka);

	}
	void  ana_fonksiyon() {


		while(c�k�s) {

			
			bilet.isim();
			
			cin >> ad;

			cout << "\nl�tfen bulundu�unuz �ehrin plakas�n� giriniz\n";
			
			cin >> plaka1;
			for (;;) {
				if (plaka1 < 0 || plaka1>81) {
					cout << "\nl�tfen ge�erli bir plaka giriniz.\n";
					cin >> plaka1;
				}
				else {
					break;
				}
			}


			bilet.il_tan�mlama(plaka1);
			bilet.il_bilgisi();
			cout << "\nl�tfen gitmek istedi�iniz �ehrin plakas�n� giriniz\n";

			cin >> plaka;
			for (;;) {
				if (plaka < 0 || plaka>81) {
					cout << "\nl�tfen ge�erli bir plaka giriniz.\n";
					cin >> plaka;
				}
				else {
					break;
				}
			}
			bilet.il_tan�mlama(plaka);
			bilet.il_bilgisi();
			cout << "\nl�tfen saat giriniz\n";
			
			cin >> saat;
			for (;;) {
				if (saat< 0 || saat>81) {
					cout << "\nl�tfen ge�erli bir saat giriniz.\n";
					cin >> saat;
				}
				else {
					break;
				}
			}
			bilet.saat1(saat);
			
			say�1 = aral�k(rassay�);
			say�2 = aral�k(rassay�);

			if (say�1 == 0 || say�2 == 0) {
				cout << "\n00:bo� yer yok\n";

			}
			else {
				cout << "\n00:0'a bas�n\n";
			}
			if (say�1 == 1 || say�2 == 1) {
				cout << "\n15:bo� yer yok\n";

			}
			else {
				cout << "\n15:1'a bas�n\n";
			}
			if (say�1 == 2 || say�2 == 2) {
				cout << "\n30:bo� yer yok\n";

			}
			else {
				cout << "\n30:2'a bas�n\n";
			}
			if (say�1 == 3 || say�2 == 3) {
				cout << "\n45:bo� yer yok\n";

			}
			else {
				cout << "\n45:3'a bas�n\n";
			}



			
			cin >> dakika;

			for (;;) {
				if (say�1 == 0 || say�2 == 0) {

					if (dakika == 0) {
						cout << "bo� yer yok l�tfen ba�ka saati se�iniz";
						cin >> dakika;
					}
					else {
						break;
					}
				}
				else if (say�1 == 1 || say�2 == 1) {

					if (dakika == 1) {
						cout << "bo� yer yok l�tfen ba�ka saati se�iniz";
						cin >> dakika;
					}
					else {
						break;
					}
				}
				else if (say�1 == 2 || say�2 == 2) {

					if (dakika == 2) {
						cout << "bo� yer yok l�tfen ba�ka saati se�iniz";
						cin >> dakika;
					}
					else {
						break;
					}
				}
				else if (say�1 == 3 || say�2 == 3) {
					cout << "\n45:bo� yer yok\n";
					if (dakika == 3) {
						cout << "bo� yer yok l�tfen ba�ka saati se�iniz";
						cin >> dakika;
					}
					else {
						break;
					}
				}
				else {
					dakika = dakika;
					break;
				}
			}
			cout << endl;
			bilet.saat2(dakika);

			system("cls");

			cout << "ad : " << ad;

			cout << "\nbulunan sehir : ";
			bilet.il_tan�mlama(plaka1);
			bilet.il_bilgisi();
			cout << "\ngidilen sehir : ";
			bilet.il_tan�mlama(plaka);
			bilet.il_bilgisi();
			cout << "\n hava yollar� i�in h kara yollar� i�in k tu�una bas�n�z\n";
			for (;;) {
				 dugme = _getch();
			

				if (dugme == 'k')
				{


					kara* karam = new kara();
					 kfiyat(karam);

					
					
					break;
				}
				else if (dugme == 'h') {
				;
					hava* havam = new hava();
					

					hs�re(havam);
					break;
				}
				else {
					continue;
				}

			}
			cout << "\ngidis saati : ";
			bilet.saat2(dakika);
			cout << "\ni�lemi onayl�yor musunuz ?\n evet : e      hay�r : h";


			switch (_getch()) {
			case 'e':
				system("cls");
			
				cout << "i�lem onayland�.";
				cout << "\nbilet numaras� : " << bilet_numaras�<<endl;
				
				c�k�s = false;
			
				break;

			case 'h':
				system("cls");
				break;
			default:
				system("cls");
				continue;
			}

		}


	}
	void bilgi() {
		cout << "ad : " << ad;

		cout << "\nbulunan sehir : ";
		bilet.il_tan�mlama(plaka1);
		bilet.il_bilgisi();
		cout << "\ngidilen sehir : ";
		bilet.il_tan�mlama(plaka);
		bilet.il_bilgisi();
	
		for (;;) {
			


			if (dugme == 'k')
			{


				kara* karam = new kara();
				kfiyat(karam);



				break;
			}
			else if (dugme == 'h') {
				;
				hava* havam = new hava();


				hs�re(havam);
				break;
			}
			else {
				continue;
			}

		}
		cout << "\ngidis saati : ";
		bilet.saat2(dakika);
	}
	void setbiletnumaras�(int _bilet_numaras�) {
		bilet_numaras� = _bilet_numaras�;
	}
	 int getbiletnumaras�() {
		return bilet_numaras�;
	}
};