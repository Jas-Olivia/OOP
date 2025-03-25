#include <iostream>
using namespace std;

extern int* readNumbers();
void printNumbers(int *number, int length);


int main(){
    
    int* numbers = readNumbers();

    printNumbers(numbers,10);

    delete[] numbers;

    return 0;
   
}