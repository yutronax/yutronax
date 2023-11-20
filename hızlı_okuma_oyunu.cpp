#include <iostream>
#include < windows.h>
#include <thread>
#include <conio.h>


using namespace std;
void f() {




}
int main() {
	setlocale(LC_ALL, "Turkish");
	int skor=0;
	string yazılan1, yazılan2, yazılan3;
	string yazı[100] = { "elma","araba","agac","sandalye","elli","sardalye","arap","yenge","yengec","ali","kulaklık",
	"telefon","balık","muhafazza","doner","baskan","tesir","esir","kesir","matematik","teleskop","yengec","ceviz"
	,"limon","leman","sıska","saksı","kod","oy","soy","mine","minik","karpuz","sarı","sinek","kırmızı","din","mor","kahverengi","kahve","renk",
	"sinir","sistem","yarım","kemik","ilik","donek","ordek","eş","ruh","beden","yar", "ask","asık","para","ay","tefsir","dem","cay",
	"limonata","kaysı","polis","terzi","suluk","yagmur","ela","damla","buse","nisa","adliye","servis","hat","kart","borc",
	"kredi","kedi","köpek","bingo","oyun","klüp","sınav","kagıt","kalem","kursun","asker","komutan","emir","dizi","oyuncu",
	"mental","senaryo","yazar","senarist","yapımcı","inşaat","mühendis","maaş","kira","sıkıntı","çukur"};
	string okunan1, okunan2, okunan3;
	for (int i = 100; i <= 1200; i =i + 200) {
		okunan1 = yazı[((int)rand() % 100)];
		okunan2 = yazı[((int)rand() % 100)];
		okunan3 = yazı[((int)rand() % 100)];
		cout << okunan1;
		Sleep(1500-i);
		system("cls");
		cout << okunan2;
		Sleep(1500-i);
		system("cls");
		cout << okunan3;
		Sleep(1500-i);
		system("cls");

		cin >> yazılan1;
		for (int i = 0; i <= 3; i++) {
			if (yazılan1 == okunan1) {
				cout << "güzel devam et" << endl;
				Sleep(800);

				system("cls");
				skor = skor + 10;
				break;

			}
			else if (yazılan1 != okunan1) {
				cout << "başarısız" << endl;
				Sleep(800);
				skor = skor - 5;

				system("cls");
				cin >> yazılan1;
				

			}
			if (i == 3) {
				cout << "harfleri daha yeni öğreniyorsun sanırım?";

				Sleep(1500);
			
				break;
			}
			break;
		}

		cin >> yazılan2; 
		for (int i = 0; i <= 3; i++) {
			if (yazılan2 == okunan2) {

				cout << " iyi gidiyorsun" << endl;
				Sleep(800);
				system("cls");
				skor = skor + 10;
				break;
			}
			else if (yazılan2 != okunan2) {
				cout << "başarısız" << endl;
				Sleep(800);
				system("cls");
				cin >> yazılan2;
				
				skor = skor - 5;

			}
			else if (i == 3) {
				cout << "harfleri daha yeni öğreniyorsun sanırım?";

				Sleep(1500);
				break;
			}
			break;
		}



		cin >> yazılan3;

		for (int i = 0; i <= 3; i++) {
			if (yazılan3 == okunan3) {
				cout << " işte başardın ilk öğretim diploması alabilirsin" << endl;
				Sleep(800);
				skor = skor + 10;
				system("cls");
			}
			else if (yazılan3 != okunan3) {
				cout << "başarısız" << endl;
				Sleep(800);
				cin >> yazılan3;
				system("cls");
				skor = skor - 5;
			}
			else if (i == 3) {
				cout << "harfleri daha yeni öğreniyorsun sanırım?";

				Sleep(1500);
				break;
			}
		}
	}
	cout << "skorunuz:" << skor;
	return 0;

}
