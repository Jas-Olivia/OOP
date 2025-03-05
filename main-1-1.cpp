#include <iostream>
using namespace std;

extern int array_sum(int[], int);

int main(){
    int array1[5] = {4,5,6,7,8};
    cout << array_sum(array1,5);
    return 0;
}