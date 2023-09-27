#include <iostream>
using namespace std;

int sumar (const int arr[], const int tam){
    if(tam < 0) 
        return 0;
    else 
        return arr[tam-1] + sumar(arr,tam-1);
}

int main() {
    int arr[4];
    cout << "Por favor ingrese 4 valores enteros:" << endl;
    for(int i = 0; i < 4; i++)
        cin >> arr[i];
    
    cout << "Suma: " << sumar(arr, 4) << endl;

}
