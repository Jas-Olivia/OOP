#include <iostream>
using namespace std;

int sum_diagonal(int array[4][4]){
int sum =0; 
int m = 4;
int n =4;

    for (int i = 0;i<4;i++)
    {
        sum=sum+array[i][i];
    }
    return sum;
}