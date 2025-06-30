#include <iostream>
using namespace std;

int main(){
    int notlar[4], ortalama = 0;
    for (int i = 0; i < 4; i++)
    {
        cout << i+1 << ". notunuzu girin: ";
        cin >> notlar[i];
    }
    for (int i = 0; i < 4; i++)
    {
        ortalama += notlar[i];
        if (i == 3)
        {
            ortalama = ortalama/4;
            cout << "Ortalamaniz: " << ortalama;
        }   
    }
    return 0;
}