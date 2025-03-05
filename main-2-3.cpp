#include <iostream>
using namespace std;

extern int two_five_nine(int array[], int length);

int main() {
    int array[5] = {-2,2,3,14,5};
    cout << two_five_nine(array,5);
    return 0;
}