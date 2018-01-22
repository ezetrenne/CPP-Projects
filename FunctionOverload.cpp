/**************************************************************************/
/* This program shows the overloading of function min
/* Coded by: Evense Zetrenne
/* For: IT Object Oreinted Programming
/* Feb 22, 2015
/**************************************************************************/

#include <iostream>//included for cout command
using namespace std; //coded using standard library naming language

/*       Function Prototypes
The following are all considered by the compiler to be different functions. 
*/

int min(int, int);
int min(int, int, int);
int min(int, int, int, int);
int min(int, int, int, int, int);


// declare the outfile out.txt here; refer to Module 6 notes (structs.cpp)for file IO


int main()
{
   cout << "min=  " << min(55, 66) << endl; //progranm definition(describes what program will output in different numbers per set)
   cout << "min=  " << min(99, 77, 33)   << endl;
   cout << "min=  " << min(34, 6, 72,9)  << endl;
   cout << "min=  " << min(34, 6, 72, 9, 2) << endl;


   return 0;
}

int min (int x, int y) // Program implements two variable
{
if (x>y)
return y; // output if conditions are met
return x; // out put if 'else' condition is met
}

int min (int x, int y, int z) //Program implements three varible
{
    int a = min (x,y); //labels a as min between variable x and y
    return min (a, z); // compares a to variable z to sync lowest min
}

int min (int x, int y, int z, int e) //program implement  four variable
{

    int a = min (x, y); //labels a as min between variable x and y
    int b = min (a, z); // compares a to variable z to sync lowest min
    return min (b, e); // returns min of variable set
}
int min (int x, int y, int z, int e, int f) //program implements five variable
{
    int a = min (x, y); //labels a as min between variable x and y
    int b = min (a, z); // compares a to variable z to sync lowest min
    int c = min (b, e); // compares b to e  to sync lowest min
    return min (c, f); // returns min of variable set
}



