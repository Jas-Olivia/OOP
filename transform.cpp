#include <iostream> 
using namespace std;

string transform(int number) {
string transformed = "";

    if (number == 0)
    {
        return 0;
    }
    
    while (number > 0)
    {
        int remainder = number %2;
        transformed = to_string(remainder) + transformed;
        number = number/2;
    }
    

return transformed;
}