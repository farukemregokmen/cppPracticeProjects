#include <iostream>
using namespace std;

int main(){
    int tane,toplam = 0;
    cout << "Lutfen dizi eleman sayisini girin: ";
    cin >> tane;
    int *ptr = new int[tane];
    cout << "Sayilari girin: " << endl;
    for (int i = 0; i < tane; i++)
    {
        cin >> ptr[i];
    }
    for (int i = 0; i < tane; i++)
    {
        toplam += ptr[i];
    }
    
    cout << "Sayilarin toplami: " << toplam;
    return 0;
}