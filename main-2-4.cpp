#include <iostream>
using namespace std;

extern int sum_min_max(int integers[], int length);
int main(){
    int integers[] = {5,2,2,1};
    int length = 4;
    cout << sum_min_max(integers, length);
return 0;
}
