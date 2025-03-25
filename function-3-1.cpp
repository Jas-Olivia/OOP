#include <iostream>
using namespace std;


int *readNumbers(){
    int* number = new int[4];
    

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