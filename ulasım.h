#pragma once

#pragma once
#pragma once
#include <iostream>


using namespace std;



class ulas�m {
private:
	int saat;
	
	int dakika[5] = { 00,15,30,45 };
	
	string ad;
	
protected:
	string il[82] = { "bo�","Adana", "Ad�yaman", "Afyon", "A�r�", "Amasya", "Ankara", "Antalya", "Artvin", "Ayd�n", "Bal�kesir", "Bilecik", "Bing�l", "Bitlis", "Bolu", "Burdur", "Bursa", "�anakkale", "�ank�r�", "�orum", "Denizli", "Diyarbak�r", "Edirne", "Elaz��", "Erzincan", "Erzurum", "Eski�ehir", "Gaziantep", "Giresun", "G�m��hane", "Hakkari", "Hatay", "Isparta", "Mersin", "�stanbul", "�zmir", "Kars", "Kastamonu", "Kayseri", "K�rklareli", "K�r�ehir", "Kocaeli", "Konya", "K�tahya", "Malatya", "Manisa", "Kahramanmara�", "Mardin", "Mu�la", "Mu�", "Nev�ehir", "Ni�de", "Ordu", "Rize", "Sakarya", "Samsun", "Siirt", "Sinop", "Sivas", "Tekirda�", "Tokat", "Trabzon", "Tunceli", "�anl�urfa", "U�ak", "Van", "Yozgat", "Zonguldak", "Aksaray", "Bayburt", "Karaman", "K�r�kkale", "Batman", "��rnak", "Bart�n", "Ardahan", "I�d�r", "Yalova", "Karab�k", "Kilis", "Osmaniye", "D�zce" };

	int* dk;
	int arac;
	int s�re;
	int fiyat;
	int* ptr;
public:
	void isim() {
		cout << "isminizi giriniz\n";
	}

	

	void il_bilgisi() {
		cout << il[*ptr];

	};
	void il_tan�mlama(int _il)
	{

		ptr = &_il;


	}
	void saat1(int _saat) {
		saat = _saat;


	}
	void saat2(int _dak) {
		dk = &_dak;
		if (saat > 24 || saat < 0) {
			cout << "l�tfen do�ru bir saat belirleyin";
			void saat1(int _saat);
		}


		cout << saat << ":" << dakika[*dk]; 
	}

	void gidiss�resi(int _sehir) {
		int saat = 0;
		int dakika = 0;
		int sure;
		ptr = &_sehir ;
		string metin1;
		metin1 = il[*ptr];
		sure = metin1.length()* s�re;
		saat = sure / 60;
		dakika = sure % 60;
		cout << "Gidi� s�resi: " << saat << " saat " << dakika << " dakika\n";
	}

	void gidisfiyat�(int _sehir2) {
		
		string metin;
		ptr = &_sehir2;
		metin = il[*ptr];
		int fiyat = metin.length() * arac;
		cout << "Bilet fiyat�: " << fiyat << " TL\n";
	}

	



};

