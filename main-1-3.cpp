#include <iostream>
using namespace std;

extern int num_count(int array[], int size, int number);

int main() {
    int array[5] = {1,2,2,2,2};
    cout << num_count(array,5,2);
    return 0;
}