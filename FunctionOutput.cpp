//Created by Owen Martin
//Date: 3/25/2025
//Description: Function to determine a commission based on how much an employee sold

#include <iostream>
#include <cmath>

using namespace std;

float commission(int Sold, float answer){

    int sold; //takes input from int main and into commission function

    if (Sold<50000){
        answer = Sold*.04; //less than 50k, then multiplied by 4%
        }else if(Sold>50000 & Sold<=250000){
            answer = Sold*.06; //more than 50k and less than or equal to 250k, multiplied by 6%
        }else if(Sold>250000){
            answer = Sold*.0675; //more than 250k, multiplied by 6.75%
        }
        return answer;
}

int main(){
    int Sold = 0;
    float answer = 0;
//The next 3 output lines give commission table, and asking input from user
    cout<<"*Commission Table*\n"; 
    cout<<"<$50k = 4% | $50k - 250k = 6% | >$250k = 6.75%\n";
    cout<<"Enter the amount of money you have sold in the last work month.\n";

    cin>>Sold;
    float commission(int Sold, float answer); //if function call
    cout<<"You have made $"<<commission(Sold, answer); //output answer to user
}