#include <iostream>
using namespace std;

extern int count_evens(int number);

int main() {
    int number = 7;
    cout << count_evens(number);
    return 0;
}