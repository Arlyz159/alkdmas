#include <iostream>
using namespace std;

int sumar (const int arr[], const int tam){
    long sum{0};
    //for (int i = 0; i < tam; sum += arr[i++]);
    int i = 0;
    while (i < tam) {
        sum += arr[i++];
    }
    return sum;
}

int main() {
    int arr[4];
    cout << "Por favor ingrese 4 valores enteros:" << endl;
    for(int i = 0; i < 4; i++)
        cin >> arr[i];
    
    cout << "Suma: " << sumar(arr, 4) << endl;

}
