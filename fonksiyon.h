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

int plaka; 

void kfiyat(kara* bilet) {
				bilet->gidisfiyat�(plaka);
				
}void hfiyat(hava* bilet) {
	bilet->gidisfiyat�(plaka);

}
void ks�re(kara* bilet) {
	bilet->gidiss�resi(plaka);

}
void hs�re(hava* bilet) {
	bilet->gidiss�resi(plaka);

}
void  ana_fonksiyon() {

	
	for (;;) {
		
		ulas�m bilet;
		bilet.isim();
		string ad;
		cin >> ad;
		
			cout << "\nl�tfen bulundu�unuz �ehrin plakas�n� giriniz\n"; 
			int plaka1; 
			cin >> plaka1;
			
			
			bilet.il_tan�mlama(plaka1); 
			bilet.il_bilgisi();
			cout << "\nl�tfen gitmek istedi�iniz �ehrin plakas�n� giriniz\n"; 
			
			cin >> plaka;
			bilet.il_tan�mlama(plaka);  
			bilet.il_bilgisi(); 

			cout << "\nl�tfen saat giriniz\n";
			int saat;
			cin >> saat;
			bilet.saat1(saat);
			int say�1, say�2;
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
			


			int dakika;
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
			for(;;){
				int dugme=_getch();
				if (dugme == 'k')
				{


					cout << "\nbilet �creti : ";
					kara* karam = new kara();
					kfiyat(karam);

					cout << "\ntoplam yolculuk s�resi : ";
					ks�re(karam);
					break;
				}
				else if (dugme == 'h') {
					cout << "\nbilet �creti : ";
					hava* havam = new hava();
					hfiyat(havam);

					cout << "\ntoplam yolculuk s�resi : ";
					hs�re(havam);
					break;
				}
				else{
					continue;
				}
				
			}
			cout << "\ngidis saati : ";
			bilet.saat2(dakika);
			cout << "\ni�lemi onayl�yor musunuz ?\n evet : e      hay�r : h";

			
			switch(_getch()){
			case 'e':
				system("cls");
				cout << "i�lem onayland�.";
				exit(0);
			
			case 'h':
				system("cls");
				break;
			default:
				continue;
			}

		}

	
}