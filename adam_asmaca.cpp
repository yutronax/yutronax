
#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;
int static s1 = 0;
int static s2 = 0;
int static s3 = 0;
int static s4 = 0;
int static s5 = 0;
int static sayaç1 = 5;
int static skor1 = 0;
int static skor2 = 0;
int static sıra ;

int main() {
	setlocale(LC_ALL, "Turkish");
	cout << "ADAM ASMACA 3.0'a HOŞGELDİNİZ!!!"<<endl;
	cout << "oyunu başlatmak için lütfen (B) basın"<<endl;
	char başla; for (; ; ) {
		başla = _getch();
		if (başla == 'b') {
			system("cls");
			for (int i = 0; i <= 9; i++) {
				cout << "oyun  başlıyor.";
				Sleep(250);
				system("cls"); cout << "oyun  başlıyor..";
				Sleep(250);
				system("cls"); cout << "oyun  başlıyor...";
				Sleep(250);
				system("cls");
			}
			break;
		}
		else {
			"oyunu başlatmak için lütfen (B) basın";
			başla = _getch();
		}
	}

	char harf1, harf2, harf3, harf4, harf5;
	cout << " birinci oyuncu için(1) ikinci oyuncu için(2) basın";
	for (;;) {
		sıra = _getch();
		if (sıra == '1' || sıra == '2') {
			break;
	}
		
	
	}

	for (;;) {
	
		if (sıra %2==1) {
			system("cls");
			cout << "Birinci Oyuncu";
			cout << endl << "kelimeyi yazınız" << endl;
			cin >> harf1 >> harf2 >> harf3 >> harf4 >> harf5;
			cout << endl << "ipucu giriniz" << endl;
			string ipucu;
			cin >> ipucu;
			system("cls");
			
			char tahmin;
			cout << "tahmin vakti" << endl; 
			cout << "ipucu:" << ipucu << endl;
			for (;;) {
				tahmin = _getch();
				if (tahmin == harf1) {
					cout << harf1 << " - - - -" << endl;
					s1++;
				}
				if (tahmin == harf2) {
					cout << "- " << harf2 << " - - -" << endl;
					s2++;
				}if (tahmin == harf3) {
					cout << "- - " << harf3 << " - -" << endl;
					s3++;
				}if (tahmin == harf4) {
					cout << "- - - " << harf4 << " -" << endl;
					s4++;
				}if (tahmin == harf5) {
					cout << "- - - - " << harf5 << endl;
					s5++;
				}
				else if (tahmin != harf1 && tahmin != harf2 && tahmin != harf3 && tahmin != harf4 && tahmin != harf5) {
					sayaç1--;
					if (sayaç1 == 4) {
						cout << endl << endl << " O" << endl;
					}
					if (sayaç1 == 3) {
						cout << endl << endl << " O" << endl << " |" << endl;
					}if (sayaç1 == 2) {
						cout << endl << endl << " O" << endl << "-|" << endl;
					}if (sayaç1 == 1) {
						cout << endl << endl << " O" << endl << "-|-" << endl;
					}
					if (sayaç1 == 0) {
						cout << endl << endl << " O" << endl << "-|-" << endl << "| |" << endl;
						cout << endl << "oyun bitti";
						skor1--;
						sıra++;
						break;
					}

				}

				if (s1>=1&&s2>=1&&s3 >= 1 && s4 >= 1&&s5 >= 1 )
				{skor1++;
					system("cls");
					cout << harf1 << harf2 << harf3 << harf4 << harf5;
					cout << endl << "tebrikler buldunuz";
					
					cout << skor1;
					s1 = 0;
					s2 = 0;
					s3 = 0;
					s4 = 0;
					s5 = 0;
					if (skor1 >= 5) {
						cout << "Birinci Oyuncu kazandı";
						exit(0);
					}
					
					
					sıra++;
					break;
				}
			}
		}if (sıra%2==0) {
			system("cls");
			cout << "İkinci Oyuncu";
			cout << endl << "kelimeyi yazınız" << endl;
			cin >> harf1 >> harf2 >> harf3 >> harf4 >> harf5;
			cout << endl << "ipucu giriniz"<<endl;
			string ipucu;
			cin >> ipucu;
			system("cls");
			
			char tahmin;
			cout << "tahmin vakti" << endl;
			cout << "ipucu:" << ipucu << endl;
			for (;;) {
				tahmin = _getch();
				if (tahmin == harf1) {
					cout << harf1 << " - - - -" << endl;
					s1++;
				}
				if (tahmin == harf2) {
					cout << "- " << harf2 << " - - -" << endl;
					s2++;
				}if (tahmin == harf3) {
					cout << "- - " << harf3 << " - -" << endl;
					s3++;
				}if (tahmin == harf4) {
					cout << "- - - " << harf4 << " -" << endl;
					s4++;
				}if (tahmin == harf5) {
					cout << "- - - - " << harf5 << endl;
					s5++;
				}
				else if (tahmin != harf1 && tahmin != harf2 && tahmin != harf3 && tahmin != harf4 && tahmin != harf5) {
					sayaç1--;
					if (sayaç1 == 4) {
						cout << endl << endl << " O" << endl;
					}
					if (sayaç1 == 3) {
						cout << endl << endl << " O" << endl << " |" << endl;
					}if (sayaç1 == 2) {
						cout << endl << endl << " O" << endl << "-|" << endl;
					}if (sayaç1 == 1) {
						cout << endl << endl << " O" << endl << "-|-" << endl;
					}
					if (sayaç1 == 0) {
						cout << endl << endl << " O" << endl << "-|-" << endl << "| |" << endl;
						cout << endl << "oyun bitti";
						skor2--;
						sıra++;
						if (sıra >= 10) {
							sıra = 0;
						}
						break;
					}

				}

				if (s1 >= 1 && s2 >= 1 && s3 >= 1 && s4 >= 1 && s5 >= 1)
				{
					system("cls");
					cout << harf1 << harf2 << harf3 << harf4 << harf5;
					cout << endl << "tebrikler buldunuz";
					skor2++;
					cout << skor2;

					s1 = 0;
					s2 = 0;
					s3 = 0;
					s4 = 0;
					s5 = 0;
					if (skor2 >= 5) {
						cout <<endl<< "İkinci Oyuncu kazandı";
						exit(0);
					}
					sıra++;
					if (sıra >= 10) {
						sıra = 0;
					}
					break;
				}
			}
		}
		if (skor1 >= 5 || skor2 >= 5) {
			char tekrar;
			system("cls");
			cout << "tekrar oynamak istiyor musunuz?\n hayır(H)         evet(E)";

			tekrar = _getch();
			if (tekrar == 'e') {
				
			}
			else if (tekrar == 'h')
			{
				exit(0);
			}
			else if (tekrar != 'e' || tekrar == 'h') {
				tekrar = _getch();

			}
		}
	}
	return 0;
}
