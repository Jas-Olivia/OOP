#include <iostream>
using namespace std;


int *readNumbers(){
    int* number = new int[4];
    
    cout << "Enter 4 Numbers:";
    for (int i = 0; i < 4; i++)
    {
        cin >> number[i];
    }
    
    return number;
    }



bool equalsArray(int *numbers1,int *numbers2,int length){
    if (length < 1)
    {
        return false;
    }

    for (int i = 0; i < length; i++)
    {
        if (numbers1[i]!=numbers2[i])
        {
            return false;
        }
        
    }
    
    return true;
}

int *reverseArray(int *numbers1,int length){
    if (length < 0)
    {
        return 0;
    }
int reverse[length];

    for (int i = 0; i < length; i++)
    {
        reverse[length-i] = numbers1[i];
    }

    numbers1 = reverse;
    
    return numbers1;
}
