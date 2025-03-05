#include <iostream>
using namespace std;

extern bool is_fanarray(int array[], int length);

int main() {
    int array[5] = {2,4,5,4,2};
    cout << is_fanarray(array,5);
    return 0;
}