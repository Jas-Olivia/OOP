#include <iostream>

// tricky questions
using namespace std;

double weighted_average(int array[], int length){
    double sum = 0;
    int count = 0;
    int element = 0;
    

    if (length < 1)
    {
        return 0;
    }
//iterates through the array
    for (int i = 0; i < length; i++)
    {
        count=0; //resets the counter for how many of each element
        element=array[i];

        //iterations through the elements to find how manyy are the same number and then increases the counter
        for (int j = 0; j < length; j++){
            if (array[j]==array[i]){ //checks if the element is the same or not 
                count++;
            }
            
        }
        sum=sum+((double)element*count)/length;
    }
    
    return sum;
}