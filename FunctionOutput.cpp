//Created by Owen Martin
//Date: 3/25/2025
//Description: Function to determine a commission based on how much an employee sold

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int Sold = 0;
    float answer = 0;

    cout<<"*Commssion Table*\n";
    cout<<"<$50k = 4% | $50k - 250k = 6% | >$250k = 6.75%\n";
    cout<<"Enter the amount of money you have sold in the last work month.\n";

    cin>>Sold;
    if (Sold<50000){
    answer = Sold*.04;
    }else if(Sold>50000 & Sold<=250000){
        answer = Sold*.06;
    }else if(Sold>250000){
        answer = Sold*.0675;
    }

    cout<<"You have made $"<<answer<<" from commission.";

    return 0;
}