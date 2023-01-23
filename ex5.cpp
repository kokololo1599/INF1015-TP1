#include <iostream>
using namespace std;


//une fonction qui affiche les nombre pair d'un tableau en premier


const int arrLen = 10;

void placeEvenNumbers(int arr[]){


    for (int i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
    for (int i = 0; i < 10; i++) {
        if (arr[i] % 2 != 0) {
            cout << arr[i] << " ";
        }
    }
    
}

int main(){

    int numArray[] = {9, 4, 7, 11, 3, 45, 3, 9, 15, 11};
    cout << "le tableau oragnise est comme cela: ";
    placeEvenNumbers(numArray);
    return 0;
}