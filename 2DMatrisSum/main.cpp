#include <iostream>
using namespace std;

int main(){
    int matris1[3][2],matris2[3][2],sonucMatris[3][2];
    cout << "Ilk Matris elemanlarini girin: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> matris1[i][j];
        }
        
    }
    cout << "Ikinci Matris elemanlarini girin: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> matris2[i][j];
        }
        
    }
        
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sonucMatris[i][j] = matris1[i][j] + matris2[i][j];
            cout << sonucMatris[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}