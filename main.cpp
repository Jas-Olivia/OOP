#include <iostream> 
using namespace std; 

extern string transform(int number);

int main() {
    int number = 13; 
    cout << transform(number);
    return 0;
}