#include <iostream>
using namespace std;

void imprimir_Rec(const int arr[], int tam, int i = 0) {
    if(tam == 0) 
        return;
    cout << arr[i] << " ";
    imprimir_Rec(arr, tam-1, ++i);
}
int main() {
    int tam = 4;
    int arr[4] = {1, 2, 3, 4};

    imprimir_Rec(arr, tam);

    return 0;

}

