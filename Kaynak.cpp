#include <iostream>
#include <list>
#include <conio.h>
#include "ulas�m.h"
#include "fonksiyon.h"

using namespace std;

static int art�r = 0;

void bilet_ekle(list<fonksiyon>* b) {
    art�r = art�r++;
   
    fonksiyon bilet;
    bilet.setbiletnumaras�(art�r);
    bilet.ana_fonksiyon(); 
    b->push_back(bilet);
}

void bilet_listele(list<fonksiyon>* b) {
    list<fonksiyon>::iterator it;if (b->empty()) {
            cout << "bu liste bo�\n";
        }else {
    for (it = b->begin(); it != b->end(); it++) {
        
        
            it->bilgi();
            cout << endl;
    }
        }
}
void bilet_arama(list<fonksiyon>* b) {
    list<fonksiyon>::iterator it;
    int numara;
    cout << "l�tfen aramak istedi�iniz ki�inin numaras�n� girin : ";
  cin>> numara;
  for (it = b->begin(); it != b->end(); it++) {
     
          if (it->getbiletnumaras�() == numara) {
          it->bilgi();
              cout << endl;
              return;
          }
          else {
              cout << "bu bilet numaras�na ait bir ki�i bulunamam��t�r.\n l�tfen tekrar deneyiniz.\n";
              cin >> numara;
          
  }
    }
}

void bilet_silme(list<fonksiyon>* b) {

    list<fonksiyon>::iterator it;
    int numaram;
    cout << "l�tfen aramak istedi�iniz ki�inin numaras�n� girin : ";
    cin >> numaram;
    for (it = b->begin(); it != b->end(); it++) {
        for (;;) {
            if (it->getbiletnumaras�() == numaram) {
               it=b->erase(it);
               return;
            }
            else if(it== b->end()){
            
                cout << "bu bilet numaras�na ait bir ki�i bulunamam��t�r.\n l�tfen tekrar deneyiniz.\n";
                cin >> numaram;
            }
           
        } 
    }

}
void toplu_silme(list<fonksiyon>* b) {

    list<fonksiyon>::iterator it;
    if (b->empty()) {
        cout << "bu liste bo�\n";
    }
    else {
        b->clear();
        cout << "liste bo�alt�ld�\n";
    }
}
int main() {
    setlocale(LC_ALL, "turkish");
    list<fonksiyon>* ulas�m = new list<fonksiyon>();

    for (;;) {
        cout << "ekle :e liste :l arama:a silme:s toplu silme:t\n";
        switch (_getch()) {
        case 'e':
            system("cls");
            bilet_ekle(ulas�m);
            break;

        case 'l':
        
            system("cls");
            bilet_listele(ulas�m);
            break;
        case 'a':
            system("cls");

            bilet_arama(ulas�m);
            break;
        case 't':
            system("cls");

           toplu_silme(ulas�m);
            break;
        case 's':
            system("cls");

            bilet_silme(ulas�m);
            break;
        case 'c':
            system("cls");

            exit(0);

        default:
            continue;
        }
    }

    delete ulas�m; 
    return 0;
}
