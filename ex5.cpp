/**
* Programme qui place les nombres paires d<un tableau puis le place en permier et ensuite les nombres impaires
* file  ex5.cpp
* author Luca Zama et David Vo
* date   25/01/2022
*/
#include <iostream>
using namespace std;
const int size = 10;

//une fonction qui place les nombre pair en premier dans un nouveau tableau

void placeEvenNumbers(int arr[], int newArr[],int arrLen){

    int indexNewArr = 0;
    for (int i = 0; i < arrLen; i++) {
        if (arr[i] % 2 == 0) {
            newArr[indexNewArr] = arr[i];
            indexNewArr++;
        }
    }
    for (int i = 0; i < arrLen; i++) {
        if (arr[i] % 2 != 0) {
            newArr[indexNewArr] = arr[i];
            indexNewArr++;
        }
    }
    
}
//print an array from the parameter

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++) {
        cout << arr[i]  << " ";
    }
}  

int main(){
    
    const int size = 10;
    int numArray[size];
    cout << "Entrez 10 elements du tableau : ";
    for (int i=0; i < size; i++){
        cin >> numArray[i];
    }
    int newNumArray[size]; 
    placeEvenNumbers(numArray, newNumArray, size);
    cout << "le tableau organise est comme cela: ";
    
    printArray(newNumArray, size);

    return 0;
}