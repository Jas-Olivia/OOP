#include <iostream>
using namespace std;

void count_digits(int array[4][4]){
int zeros_count = 0;
int ones_count = 0;
int twos_count = 0;
int threes_count = 0;
int fours_count = 0;
int fives_count = 0;
int sixes_count = 0;
int sevens_count = 0;
int eights_count = 0;
int nines_count = 0;

    for (int i = 0;i<4;i++)
    {
        for (int j = 0; j < 4; j++){
            int value = array[i][j];

            if  (value == 0) zeros_count++;
            else if (value ==1) ones_count++;
            else if (value ==2) twos_count++;
            else if (value ==3) threes_count++;
            else if (value ==4) fours_count++;
            else if (value ==5) fives_count++;
            else if (value ==6) sixes_count++;
            else if (value ==7) sevens_count++;
            else if (value ==8) eights_count++;
            else if (value ==9) nines_count++;
            
        }
        
    }
    cout << "0:" << zeros_count << ";";
    cout << "1:" << ones_count << ";";
    cout << "2:" << twos_count << ";";
    cout << "3:" << threes_count << ";";
    cout << "4:" << fours_count << ";";
    cout << "5:" << fives_count << ";";
    cout << "6:" << sixes_count << ";";
    cout << "7:" << sevens_count << ";";
    cout << "8:" << eights_count << ";";
    cout << "9:" << nines_count << ";";
    
}
    