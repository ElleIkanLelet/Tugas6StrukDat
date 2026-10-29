#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cout << "Masukkan jumlah kata: ";
    cin >> n;

    string data[n];
    cout << "Masukkan " << n << " kata: ";
    for(int i = 0; i < n; i++){
        cin >> data[i];
    }

    cout << endl << "Proses insertion sort:" << endl;
    for(int i = 1; i < n; i++){
        string key = data[i]; //key
        int j = i - 1;

        cout << "Langkah " << i << " (key = " << key << "):" << endl;

        while (j >= 0 && data[j] > key){
            data[j+1] = data[j];
            
            cout << "Geser " << data[j] << ": ";
            for (int k = 0; k < n; k++){
                cout << data[k] << " ";
            }
            cout << endl;

            j--;
        }

        data[j+1] = key;

        cout << "Sisipkan " << key << ": ";
        for (int k = 0; k < n; k++){
            cout << data[k] << " ";
        }
        cout << endl;
    }

    cout << "hasil insertion sort: ";
    for (int i = 0; i < n; i++){
        cout << data[i] << " ";
    }
    
    return 0;
}