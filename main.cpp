#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int count(int[], int);

int main() {
   // orginal code
    int array1[5] = {4,5,6,7,8};
    std::cout << "The number is: " << count(array1, 5) << std::endl;
   // test case 1 
    int array2[5] = {-1,3,-4,10,12};
    std::cout << "The number is: " << count(array2, 5) << std::endl;
   // test case 2 
    int array3[10] = {4,5,6,7,8,-1,-2,0,0,0};
    std::cout << "The number is: " << count(array3, 10) << std::endl;
   // test case 3
   int array4[5] = {1,1,1,1,1};
    std::cout << "The number is: " << count(array4, 5) << std::endl;
   
    return 0;
}