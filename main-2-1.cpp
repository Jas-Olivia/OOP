#include <iostream>
using namespace std; 


extern void hexDigits(int *numbers, int length);

int main(){
int numbers[5] = {2,4,6,8,10};
hexDigits(numbers, 5);


    return 0;
}