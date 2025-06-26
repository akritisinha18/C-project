#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    //define variables
    char operation;
    double number1, number2;
    
    //get user input
    cout<<"Enter First Number:";
    cin>> number1;
    cout<<"operation (+, -, *, /): ";
    cin>> operation;
    cout<<"Enter second Number: ";
    cin>> number2;

    //if else statement checking entered operation20
    
    if (operation == '+')
    {
        cout<< number1 + number2;
        /* code */
    } 
    else if (operation == '-'){
        cout<< number1-number2;
    }
     else if (operation == '*'){
        cout<< number1 * number2;
    }
    else if (operation == '/'){
        cout<< number1 / number2;
    }else {
        cout<<"Invalid operation";
    }

    return 0;
}