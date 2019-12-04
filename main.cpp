//Jason Morales


#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

//Random Number Generator


float getMonthlyPayment (int amount, int months, float interest){
    return (amount*interest)/months + 1000;
}

int prompt (int select){
    switch(select){
        case 1: cout << "You selected a car loan for" << endl;
            return 0;
        default:
            return 0;
                }
                    }

int main()
{
    //Variables
    string name;
    int select;
    int agree;
    int loanAmount = prompt(1);
    float interest = 2.679;
    
    //Random Number Generator FUNCTION
    srand((unsigned int) time(NULL));
    int score;
    score = (rand()%1050)+500;
        
    //Introduction message to the loan borrower or customer
        cout << "Hello there! Welcome to Morales's Loaning Solutions." << endl;
        cout << "We are here to assist you to get the best loan you need" << endl;
        cout << "Let's start this off by providing your name, please?" <<endl;
        cin >> name;


    //Asking what loan does the customer need and telling them that every loan required credit check
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "Sweet! I hope that you are doing fantastic today," << " " << name << "!" << endl;
        cout << "The first step would be to check you credit score." << endl;
        cout << "Is it okay if I run a Credit Score Check so we can see where you qualify?" << endl;
        cout << "1: Yes" << endl;
        cout << "2: No" << endl;
        cin >> agree;
    
    //If statement for running credit score check
    {
        if (agree == 1){
            cout << "Looks like your Credit Score is" << endl;
        }
        if (agree == 2){
            cout << "I apologize," << name << " but we need to know what your credit score is to continue" << endl;
            return 0;
        }
    }
        cout << score << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        
    //Telling the user what he/she is qualified for
        cout << "Here are the loans you qualified:" << endl;
        

    //Loans Selection
        cout << "1: Car Loan" << endl;
        cout << "2: Home Loan" << endl;
        cout << "3: Boat Loan" << endl;
        cout << "4: Business Loan" << endl;
        cout << "5: Basic Payday Loan" << endl;
        cout << "6: No thank you, the Loan that I'm looking for is not in your options below." << endl;
        cin >> select;

    //selection actions
    while (select <= 6) //loop of selections (stops when 5)

    {
        int a = 1;
        int b = 2;
        int c = 3;
        int d = 4;
        int e = 5;
        int f = 6;
      
        if (select ==a)
        {
                cout << "I see that you selected Car Loan," << name << ". I can absolutely help you with this loan" << endl;
                break;
        }
        if (select ==b)
            {
                cout << "I see that you selected Home Loan," << name << ". I can absolutely help you with this loan" << endl;
                break;
            }
        if (select ==c)
            {
                cout << "I see that you selected Boat Loan," << name << ". I can absolutely help you with this loan" << endl;
                break;
            }
        if (select ==d)
            {
                cout << "I see that you selected Business Loan," << name << ". I can absolutely help you with this loan" << endl;
                break;
            }
        if (select ==e)
            {
                cout << "I see that you selected Basic Payday Loan," << name << ". I can absolutely help you with this loan." << endl;
                break;
            }
        if (select ==f)
            {
                cout << "Thank you for coming by, I absolutely apologize we do not offer the loan you needed. Hope that we can help you next time." << endl;
                cout << "Have a wonderful day, " << name << endl;
                exit(0);
            }

    }
    //Asking the customer if he/she wants the full loan calculation
            cout << "Do you still wish to proceed so I can show you the full breakdown of your loan?" << endl;
            cout << "1: Yes" << endl;
            cout << "2: No" << endl;
            cin >> agree;
    {
        if (agree == 1)
            {
                cout << loanAmount << endl;
                cout << "If you decided to go for the 12 months loan, your monthly payment would be  " << getMonthlyPayment(loanAmount, 12, interest) << endl;
                cout << "If you choose to do the 36 months loan your monthly payment would be " << getMonthlyPayment(loanAmount, 36, interest) << endl;
                cout << "All loans have an average intereset fee of 2.679% per month " << endl;
            }
        if (agree == 2)
            {
                cout << "Thank you for coming in, we hope that we can help you soon. Have a great day," << name << "!" << endl;
            }
    }



    return 0;
}
