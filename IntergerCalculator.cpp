/**************************************************************************/
/* Input integers and program shows avg, stand, and variance.
/* Coded by: Evense Zetrenne
/* For: IT Object Oriented Programming
/**************************************************************************/
#include <iostream> //included for cout command
#include <cmath> //included for cout command

using namespace std;  //coded using standard library naming language

int main() //main function header, program execution begins
{ //denotes body of function
    //Variable Declaration
    int n, count;
    float sum, avg, variance, stand, chi;  //floating pointer

    sum = 0;
    variance = 0;
    avg = 0;
    stand = 0;
    chi = 0;
    // output phase
    cout << "How many numbers?  "; //prompts user for input
    cin >> n; // users input

    float x[n];  //array

    for (count=0; count<=(n-1); count++)
    { //denotes body of function
        cout << "Input a Number -- "; //output phase, prompts user for input
        cin >> x[count]; //user input
        sum = sum + x[count]; //totals user input
    }  //denotes body of function

    avg = sum / n;  //average

    for (count=0; count<n; count++)
    { //denotes body of function
        variance = variance + pow((x[count] - avg),2) / n;  //variance
    } //denotes body of function

    stand = sqrt(variance);
    chi = ((n-1)*((stand)*(stand)))/(3*3);  //chi squared distribution
     // output phase
    cout << "The sum is: " << sum << endl; // Outputs calculated information on monitor
    cout << "The average is  " << avg << endl; // Outputs calculated information on monitor
    cout << "The biased variance is " << variance << endl; // Outputs calculated information on monitor
    cout << "The standard deviation is " << stand << endl; // Outputs calculated information on monitor
    cout << "The chi-squared distribution is " << chi << endl;  // Outputs calculated information on monitor

    return 0; //successful termination of the program
}  //end main
