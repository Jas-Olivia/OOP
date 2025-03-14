#include <iostream>
using namespace std;

extern int sum_if_palindrome(int intgers[], int length);
int main(){
    int integers[] = {1,2,2,1};
    int length = 4;
    cout << sum_if_palindrome(integers, length);
return 0;
}
