#include <iostream>
using namespace std;

int main() {
    int baris;
    
    cout << "Masukkan tinggi segitiga: ";
    cin >> baris;
    
    for(int i = 1; i <= baris; i++) {
        for(int j = 1; j <= baris - i; j++) {
            cout << " ";
        }
        
        for(int j = 1; j <= (2*i - 1); j++) {
            cout << "*";
        }
        
        cout << endl;
    }
    
    return 0;
}