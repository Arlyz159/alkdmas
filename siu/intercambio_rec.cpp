#include <iostream>
using namespace std;

void imprimir_Rec(const int arr[], int tam, int i = 0) {
    if(tam == 0) 
        return;
    cout << arr[i] << " ";
    imprimir_Rec(arr, tam-1, ++i);
}

void intercambio(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void invertir_Rec(int arr[], int tam, int i = 0) {
    if(i > tam)
        return;
    intercambio(arr[i], arr[tam-1]);
    invertir_Rec(arr, tam-1, i+1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};


    imprimir_Rec(arr, 5);
    cout << endl;

    invertir_Rec(arr, 5);
    imprimir_Rec(arr, 5);
}