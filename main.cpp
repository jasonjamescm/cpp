// Example program
#include <iostream>
#include <string>

using namespace std;


float getMonthlyPayment(int amount, int months, float interest) {
    return (amount * interest)/months + 1000;
}

int prompt(int select) {
    switch(select) {
        case 1:
            cout << "You selected a car loan for ";
            return 500;
        default:
            return 500;
    }
}

int main() {;
    int loanAmount = prompt(1);
    float interest = 2.679;
    cout << loanAmount << endl;    
    cout << "Cost of 12 month " << getMonthlyPayment(loanAmount, 12, interest) << endl;
    cout << "Cost of 36 month " << getMonthlyPayment(loanAmount, 36, interest) << endl;
    return 0;
}

