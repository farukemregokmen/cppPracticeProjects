#include <iostream>
using namespace std;

int main(){
    const int size = 4;
    int notlar[size], ortalama = 0;
    for (int i = 0; i < size; i++)
    {
        cout << i+1 << ". notunuzu girin: ";
        cin >> notlar[i];
    }
    for (int i = 0; i < size; i++)
    {
        ortalama += notlar[i];
        if (i == 3)
        {
            ortalama = ortalama/size;
            cout << "Ortalamaniz: " << ortalama;
        }   
    }
    return 0;
}