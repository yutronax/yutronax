#pragma once

#pragma once
#pragma once
#include <iostream>


using namespace std;



class ulasým {
private:
	int saat;
	
	int dakika[5] = { 00,15,30,45 };
	
	string ad;
	
protected:
	string il[82] = { "boþ","Adana", "Adýyaman", "Afyon", "Aðrý", "Amasya", "Ankara", "Antalya", "Artvin", "Aydýn", "Balýkesir", "Bilecik", "Bingöl", "Bitlis", "Bolu", "Burdur", "Bursa", "Çanakkale", "Çankýrý", "Çorum", "Denizli", "Diyarbakýr", "Edirne", "Elazýð", "Erzincan", "Erzurum", "Eskiþehir", "Gaziantep", "Giresun", "Gümüþhane", "Hakkari", "Hatay", "Isparta", "Mersin", "Ýstanbul", "Ýzmir", "Kars", "Kastamonu", "Kayseri", "Kýrklareli", "Kýrþehir", "Kocaeli", "Konya", "Kütahya", "Malatya", "Manisa", "Kahramanmaraþ", "Mardin", "Muðla", "Muþ", "Nevþehir", "Niðde", "Ordu", "Rize", "Sakarya", "Samsun", "Siirt", "Sinop", "Sivas", "Tekirdað", "Tokat", "Trabzon", "Tunceli", "Þanlýurfa", "Uþak", "Van", "Yozgat", "Zonguldak", "Aksaray", "Bayburt", "Karaman", "Kýrýkkale", "Batman", "Þýrnak", "Bartýn", "Ardahan", "Iðdýr", "Yalova", "Karabük", "Kilis", "Osmaniye", "Düzce" };

	int* dk;
	int arac;
	int süre;
	int fiyat;
	int* ptr;
public:
	void isim() {
		cout << "isminizi giriniz\n";
	}

	

	void il_bilgisi() {
		cout << il[*ptr];

	};
	void il_tanýmlama(int _il)
	{

		ptr = &_il;


	}
	void saat1(int _saat) {
		saat = _saat;


	}
	void saat2(int _dak) {
		dk = &_dak;
		if (saat > 24 || saat < 0) {
			cout << "lütfen doðru bir saat belirleyin";
			void saat1(int _saat);
		}


		cout << saat << ":" << dakika[*dk]; 
	}

	void gidissüresi(int _sehir) {
		int saat = 0;
		int dakika = 0;
		int sure;
		ptr = &_sehir ;
		string metin1;
		metin1 = il[*ptr];
		sure = metin1.length()* süre;
		saat = sure / 60;
		dakika = sure % 60;
		cout << "Gidiþ süresi: " << saat << " saat " << dakika << " dakika\n";
	}

	void gidisfiyatý(int _sehir2) {
		
		string metin;
		ptr = &_sehir2;
		metin = il[*ptr];
		int fiyat = metin.length() * arac;
		cout << "Bilet fiyatý: " << fiyat << " TL\n";
	}

	



};

