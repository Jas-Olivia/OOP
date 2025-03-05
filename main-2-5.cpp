#include <iostream>
using namespace std;

extern bool is_descending(int array[], int n);

int main() {
    int array[5] = {2,5,4,2,1};
    cout << is_descending(array,5);
    return 0;
}