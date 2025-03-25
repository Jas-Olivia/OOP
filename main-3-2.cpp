#include <iostream>
using namespace std;

extern int* readNumbers();
extern bool equalsArray(int *numbers1,int *numbers2,int length);
extern int *reverseArray(int *numbers1,int length) ;


int main(){
    
    int* numbers1 = readNumbers();
    int* numbers2 = readNumbers();
    reverseArray(numbers1,4);
    


    cout << equalsArray(numbers1, numbers2,4);

    delete[] numbers1;
    delete[] numbers2;

    return 0;
   
}