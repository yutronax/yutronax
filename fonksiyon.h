#pragma once
#pragma once
#pragma once
#include "ulasım.h"
#include "kara.h"
#include <conio.h>
#include <random>
#include "hava.h"

	random_device rassayı;
	uniform_int_distribution <int> aralık(0, 3);
class fonksiyon {
public:
	ulasım bilet;
	int plaka;
	int dugme;
	int dakika;
	  int plaka1;
	  int saat;
	  int sayı1, sayı2;
	  string ad;
 int bilet_numarası;
	  bool cıkıs =true;

	void kfiyat(kara* bilet) {
		cout << "\nbilet ücreti : ";
			
		bilet->gidisfiyatı(plaka);
		cout << "\ntoplam yolculuk süresi : ";
	bilet->gidissüresi(plaka);
	}
	
	void hsüre(hava* bilet) {
		cout << "\nbilet ücreti : ";
			
		bilet->gidisfiyatı(plaka);
cout << "\ntoplam yolculuk süresi : ";
bilet->gidissüresi(plaka);

	}
	void  ana_fonksiyon() {


		while(cıkıs) {

			
			bilet.isim();
			
			cin >> ad;

			cout << "\nlütfen bulunduğunuz şehrin plakasını giriniz\n";
			
			cin >> plaka1;
			for (;;) {
				if (plaka1 < 0 || plaka1>81) {
					cout << "\nlütfen geçerli bir plaka giriniz.\n";
					cin >> plaka1;
				}
				else {
					break;
				}
			}


			bilet.il_tanımlama(plaka1);
			bilet.il_bilgisi();
			cout << "\nlütfen gitmek istediğiniz şehrin plakasını giriniz\n";

			cin >> plaka;
			for (;;) {
				if (plaka < 0 || plaka>81) {
					cout << "\nlütfen geçerli bir plaka giriniz.\n";
					cin >> plaka;
				}
				else {
					break;
				}
			}
			bilet.il_tanımlama(plaka);
			bilet.il_bilgisi();
			cout << "\nlütfen saat giriniz\n";
			
			cin >> saat;
			for (;;) {
				if (saat< 0 || saat>81) {
					cout << "\nlütfen geçerli bir saat giriniz.\n";
					cin >> saat;
				}
				else {
					break;
				}
			}
			bilet.saat1(saat);
			
			sayı1 = aralık(rassayı);
			sayı2 = aralık(rassayı);

			if (sayı1 == 0 || sayı2 == 0) {
				cout << "\n00:boş yer yok\n";

			}
			else {
				cout << "\n00:0'a basın\n";
			}
			if (sayı1 == 1 || sayı2 == 1) {
				cout << "\n15:boş yer yok\n";

			}
			else {
				cout << "\n15:1'a basın\n";
			}
			if (sayı1 == 2 || sayı2 == 2) {
				cout << "\n30:boş yer yok\n";

			}
			else {
				cout << "\n30:2'a basın\n";
			}
			if (sayı1 == 3 || sayı2 == 3) {
				cout << "\n45:boş yer yok\n";

			}
			else {
				cout << "\n45:3'a basın\n";
			}



			
			cin >> dakika;

			for (;;) {
				if (sayı1 == 0 || sayı2 == 0) {

					if (dakika == 0) {
						cout << "boş yer yok lütfen başka saati seçiniz";
						cin >> dakika;
					}
					else {
						break;
					}
				}
				else if (sayı1 == 1 || sayı2 == 1) {

					if (dakika == 1) {
						cout << "boş yer yok lütfen başka saati seçiniz";
						cin >> dakika;
					}
					else {
						break;
					}
				}
				else if (sayı1 == 2 || sayı2 == 2) {

					if (dakika == 2) {
						cout << "boş yer yok lütfen başka saati seçiniz";
						cin >> dakika;
					}
					else {
						break;
					}
				}
				else if (sayı1 == 3 || sayı2 == 3) {
					cout << "\n45:boş yer yok\n";
					if (dakika == 3) {
						cout << "boş yer yok lütfen başka saati seçiniz";
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
			bilet.il_tanımlama(plaka1);
			bilet.il_bilgisi();
			cout << "\ngidilen sehir : ";
			bilet.il_tanımlama(plaka);
			bilet.il_bilgisi();
			cout << "\n hava yolları için h kara yolları için k tuşuna basınız\n";
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
					

					hsüre(havam);
					break;
				}
				else {
					continue;
				}

			}
			cout << "\ngidis saati : ";
			bilet.saat2(dakika);
			cout << "\nişlemi onaylıyor musunuz ?\n evet : e      hayır : h";


			switch (_getch()) {
			case 'e':
				system("cls");
			
				cout << "işlem onaylandı.";
				cout << "\nbilet numarası : " << bilet_numarası<<endl;
				
				cıkıs = false;
			
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
		bilet.il_tanımlama(plaka1);
		bilet.il_bilgisi();
		cout << "\ngidilen sehir : ";
		bilet.il_tanımlama(plaka);
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


				hsüre(havam);
				break;
			}
			else {
				continue;
			}

		}
		cout << "\ngidis saati : ";
		bilet.saat2(dakika);
	}
	void setbiletnumarası(int _bilet_numarası) {
		bilet_numarası = _bilet_numarası;
	}
	 int getbiletnumarası() {
		return bilet_numarası;
	}
};