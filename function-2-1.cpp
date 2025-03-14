#include <iostream>
using namespace std;

void print_binary_str(std::string decimal_number){
    
    int binary_number = stoi(decimal_number);

    if (binary_number==0)
    {
        cout << "0" << endl;
        return;
    }
    string binary_str = "";
    
    
    while (binary_number > 0){

        int remainder = binary_number %2;
        binary_str = to_string(remainder) + binary_str;
        binary_number = binary_number / 2;

    }
    cout << binary_str << endl;
}
