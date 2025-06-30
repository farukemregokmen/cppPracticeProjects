#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int rastgeleSayiUret(int min, int max){
    int sayi;
    srand(time(0));
    sayi = min + (rand()%(max - min +1));
    return sayi;
}

int main(){
    int min,max, sayi;
    cout << "Minimum degeri girin: ";cin >> min;
    cout << "Maximum degeri girin: ";cin >> max;
    sayi = rastgeleSayiUret(min,max);
    cout << "Uretilen sayi: " << sayi;
    return 0;
}