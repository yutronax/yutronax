#include <iostream>
#include <list>
#include <conio.h>
#include "ulasým.h"
#include "fonksiyon.h"

using namespace std;

static int artýr = 0;

void bilet_ekle(list<fonksiyon>* b) {
    artýr = artýr++;
   
    fonksiyon bilet;
    bilet.setbiletnumarasý(artýr);
    bilet.ana_fonksiyon(); 
    b->push_back(bilet);
}

void bilet_listele(list<fonksiyon>* b) {
    list<fonksiyon>::iterator it;if (b->empty()) {
            cout << "bu liste boþ\n";
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
    cout << "lütfen aramak istediðiniz kiþinin numarasýný girin : ";
  cin>> numara;
  for (it = b->begin(); it != b->end(); it++) {
     
          if (it->getbiletnumarasý() == numara) {
          it->bilgi();
              cout << endl;
              return;
          }
          else {
              cout << "bu bilet numarasýna ait bir kiþi bulunamamýþtýr.\n lütfen tekrar deneyiniz.\n";
              cin >> numara;
          
  }
    }
}

void bilet_silme(list<fonksiyon>* b) {

    list<fonksiyon>::iterator it;
    int numaram;
    cout << "lütfen aramak istediðiniz kiþinin numarasýný girin : ";
    cin >> numaram;
    for (it = b->begin(); it != b->end(); it++) {
        for (;;) {
            if (it->getbiletnumarasý() == numaram) {
               it=b->erase(it);
               return;
            }
            else if(it== b->end()){
            
                cout << "bu bilet numarasýna ait bir kiþi bulunamamýþtýr.\n lütfen tekrar deneyiniz.\n";
                cin >> numaram;
            }
           
        } 
    }

}
void toplu_silme(list<fonksiyon>* b) {

    list<fonksiyon>::iterator it;
    if (b->empty()) {
        cout << "bu liste boþ\n";
    }
    else {
        b->clear();
        cout << "liste boþaltýldý\n";
    }
}
int main() {
    setlocale(LC_ALL, "turkish");
    list<fonksiyon>* ulasým = new list<fonksiyon>();

    for (;;) {
        cout << "ekle :e liste :l arama:a silme:s toplu silme:t\n";
        switch (_getch()) {
        case 'e':
            system("cls");
            bilet_ekle(ulasým);
            break;

        case 'l':
        
            system("cls");
            bilet_listele(ulasým);
            break;
        case 'a':
            system("cls");

            bilet_arama(ulasým);
            break;
        case 't':
            system("cls");

           toplu_silme(ulasým);
            break;
        case 's':
            system("cls");

            bilet_silme(ulasým);
            break;
        case 'c':
            system("cls");

            exit(0);

        default:
            continue;
        }
    }

    delete ulasým; 
    return 0;
}
