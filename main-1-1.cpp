#include <iostream>
using namespace std;

extern int sum_diagonal(int array[4][4]);

int main(){
    int array [4][4] = {
    {1,2,3,4},
    {5,6,7,8},
    {1,2,3,4},
    {5,6,7,8}
    };
    cout << sum_diagonal(array);
    return 0;
}