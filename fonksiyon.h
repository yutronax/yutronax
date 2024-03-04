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

int plaka; 

void kfiyat(kara* bilet) {
				bilet->gidisfiyatı(plaka);
				
}void hfiyat(hava* bilet) {
	bilet->gidisfiyatı(plaka);

}
void ksüre(kara* bilet) {
	bilet->gidissüresi(plaka);

}
void hsüre(hava* bilet) {
	bilet->gidissüresi(plaka);

}
void  ana_fonksiyon() {

	
	for (;;) {
		
		ulasım bilet;
		bilet.isim();
		string ad;
		cin >> ad;
		
			cout << "\nlütfen bulunduğunuz şehrin plakasını giriniz\n"; 
			int plaka1; 
			cin >> plaka1;
			
			
			bilet.il_tanımlama(plaka1); 
			bilet.il_bilgisi();
			cout << "\nlütfen gitmek istediğiniz şehrin plakasını giriniz\n"; 
			
			cin >> plaka;
			bilet.il_tanımlama(plaka);  
			bilet.il_bilgisi(); 

			cout << "\nlütfen saat giriniz\n";
			int saat;
			cin >> saat;
			bilet.saat1(saat);
			int sayı1, sayı2;
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
			


			int dakika;
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
			for(;;){
				int dugme=_getch();
				if (dugme == 'k')
				{


					cout << "\nbilet ücreti : ";
					kara* karam = new kara();
					kfiyat(karam);

					cout << "\ntoplam yolculuk süresi : ";
					ksüre(karam);
					break;
				}
				else if (dugme == 'h') {
					cout << "\nbilet ücreti : ";
					hava* havam = new hava();
					hfiyat(havam);

					cout << "\ntoplam yolculuk süresi : ";
					hsüre(havam);
					break;
				}
				else{
					continue;
				}
				
			}
			cout << "\ngidis saati : ";
			bilet.saat2(dakika);
			cout << "\nişlemi onaylıyor musunuz ?\n evet : e      hayır : h";

			
			switch(_getch()){
			case 'e':
				system("cls");
				cout << "işlem onaylandı.";
				exit(0);
			
			case 'h':
				system("cls");
				break;
			default:
				continue;
			}

		}

	
}