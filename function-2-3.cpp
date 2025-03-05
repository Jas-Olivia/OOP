#include <iostream>
using namespace std;

void two_five_nine(int array[], int length){
    int num_2 = 0;
    int num_5 = 0;
    int num_9 = 0;
    if (length < 1)
    {
        cout << "2:0;5:0;9:0;" << endl;
        return;
    }
    
    for (int i = 0; i < length; i++)
    {
        switch (array[i])
    {
            case 2:
                num_2++;
                break;
            case 5:
                num_5++;
                break;
            case 9: 
                num_9++;
                break;
    default:
        break;
    }
    }
    
    cout << "2:" << num_2 << ";5:" << num_5 << ";9:" << num_9 << ";\n" << endl;
}