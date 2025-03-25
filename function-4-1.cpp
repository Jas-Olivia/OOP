#include <iostream>
using namespace std;

int *readNumbers(){
int* number = new int[10];

cout << "Enter 10 Numbers:";
for (int i = 0; i < 10; i++)
{
    cin >> number[i];
}

return number;
}


int secondSmallestSum(int *numbers,int length){

    
}