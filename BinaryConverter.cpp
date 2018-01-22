/**************************************************************************/
/* This program converts binary numbers to decimal format
/* Coded by: Evense Zetrenne
/* Jan 26, 2015
/**************************************************************************/
#include <iostream> //included for cout command
#include <cmath> //included for cout command

using namespace std; //coded using standard library naming language

int main() //main function header, program execution begins
{ //denotes body of function
    //variable declaration
    char b[16];  //character input limit
    int sum = 0;
    int i = 0; // interger value
    int l = 0; // interger value
    //output phase
    cout << "Please input a binary number up to 16 digits...\n\n"; //prompts user for input
    cin >> b; //input that meets character limit
    //variable initalization phase
    while (i<16 && b[i] != (char)0)
    { //denotes body of function
        //variable initalization phase
        if (b[i] == '1') sum += pow(2,15-i);
        else if (b[i] == '0') ; // inputs does not meet requirements
        else cout << " you are not inputting a binary number! \n"; //output if the input does not meet the requirements
        i++; // increament value of i by 1
        l++; // increament value of l by 1
    } //denotes body of function

    sum >>= 16-l; //the "answer"

    cout << sum; //output phase

    return 0; //program ended successfully
} //end main
