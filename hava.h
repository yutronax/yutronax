#pragma once
#pragma once
#include "ulasým.h"

class hava : public ulasým {
public:
	
	
	void bilgi2() {
		
	}
	void gidisfiyatý(int _sehir2) {
arac = 1000;
		
		string metin;
		ptr = &_sehir2;
		metin = il[*ptr];
		int fiyat = metin.length() * arac;
		cout << "Bilet fiyatý: " << fiyat << " TL\n";
	}
	void gidissüresi(int _sehir) {
		süre = 15;
		int saat = 0;
		int dakika = 0;
		int sure;
		ptr = &_sehir;
		string metin1;
		metin1 = il[*ptr];
		sure = metin1.length() * süre;
		saat = sure / 60;
		dakika = sure % 60;
		cout << "Gidiþ süresi: " << saat << " saat " << dakika << " dakika\n";
	}

private:
	string ad;

};