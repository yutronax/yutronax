#pragma once
#pragma once
#include "ulas�m.h"

class hava : public ulas�m {
public:
	
	
	void bilgi2() {
		
	}
	void gidisfiyat�(int _sehir2) {
arac = 1000;
		
		string metin;
		ptr = &_sehir2;
		metin = il[*ptr];
		int fiyat = metin.length() * arac;
		cout << "Bilet fiyat�: " << fiyat << " TL\n";
	}
	void gidiss�resi(int _sehir) {
		s�re = 15;
		int saat = 0;
		int dakika = 0;
		int sure;
		ptr = &_sehir;
		string metin1;
		metin1 = il[*ptr];
		sure = metin1.length() * s�re;
		saat = sure / 60;
		dakika = sure % 60;
		cout << "Gidi� s�resi: " << saat << " saat " << dakika << " dakika\n";
	}

private:
	string ad;

};