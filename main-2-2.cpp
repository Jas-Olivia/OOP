#include <iostream>
using namespace std;

extern int binary_to_int(int binary_digits[], int size);

int main(){
    int binary_digits[]= {1,0,1,1};
    int size = 4;
    
    int result = binary_to_int(binary_digits,size);
    cout << result << endl;
    return 0;
}