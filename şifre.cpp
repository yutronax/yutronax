#include <iostream>

using namespace std;
int main() {
 cout << "HESAP MAKINESINE HOSGELDINIZ" << endl << endl;
 int x;
 cin >> x;
 while (x <= 4) {
 int seçim;
 cin >> seçim;
 // 4 İŞLEM
 if (seçim == 1) {
 int sayı1, sayı2, işlem, sonuç;
 cout << "Lutfen Birinci Sayiyi Giriniz" << endl << endl;
 cin >> sayı1;
 cout << "Lutfen Ikinci Sayiyi Giriniz" << endl << endl;
 cin >> sayı2;
 cout << "Lutfen Islem Giriniz: (1:+) (2:-) (3:*) (4:/)" << endl << endl;
 cin >> işlem;
 if (işlem == 1) {
 sonuç = sayı1 + sayı2;

 }
 else if (işlem == 2) {
 sonuç = sayı1 - sayı2;

 }
 else if (işlem == 3) {
 sonuç = sayı1 * sayı2;

 }
 else if (işlem == 1) {
 sonuç = sayı1 / sayı2;

 }

 else if (işlem < 1 || işlem > 4) {

 cout << endl << "Lutfen Gecerli Bir Islem Icin 1-4 Arasi Rakamları Tuslayin.";
 cin >> işlem;
 }
 cout << sonuç;
 }
 }
 cout << " hesap makinesi kapanmistir";

 return 0;
}
