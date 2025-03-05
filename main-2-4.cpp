#include <iostream>
using namespace std;

extern bool is_ascending(int array[], int n);

int main() {
    int array[5] = {1,2,3,7,5};
    cout << is_ascending(array,5);
    return 0;
}