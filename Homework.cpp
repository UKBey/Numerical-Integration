// ************************************************************************
// ******              STUDENT NAME : Ukbe Taha ŞAHİNKAYA             *****
// *****             STUDENT NUMBER : B211202551                      *****
// *****               ASSIGNMENT # : 1                               *****
// *****                   - HONOR CODE -                             *****
// ************************************************************************
#include<iostream>
#include<cmath>
#include<iomanip>
//Including the iostream to make this code work, cmath for using pow(x,n) (that means x^n), iomanip for making out outputs look better.
using namespace std;
//Using std as a namespace to not write std :: before all cout and cin
int main()
{
    double a, b;
    //Assigning a, b as a double to make our calculations accurate.
    int n;
    //Assigning n as an integer because in the formula n have to be an integer.
    cout << "a   : "; cin >> a;
    cout << "b   : "; cin >> b;
    cout << "n   : "; cin >> n;
    //Taking input to assign the values of a, b and n.
    double deltaX = (b-a)/n;
    //Assigning deltaX with the given equation.
    double x, epsi, LHF, RHF, MF;
    //Assigning our variables. x stands for the x values(x1,x2,...xn). epsi stands for epsilion values. LHF, RHF and MF stand for Left Hand Formula, Right Hand Formula and Midpoint Formula values.
    double LHsum = 0, RHsum = 0, Msum = 0;
    //Assigning double valued sums of 3 formula. 
    cout << string(66,'-') << endl 
    << setw(5) << "i" << setw(12) << "x[i]" << setw(15) << "epsilon[i]" << setw(10) << "LHF" << setw(10) << "RHF" << setw(9) << "MF" << endl 
    << string(66,'-') << endl;
    //Printing some words for making our output look like the given one.
    for (int i = 1; i <= n; i++)
    //for every i value 1 to n.
    {
        x = a + ((i-1) * deltaX);
        //Calculating and assigning the x value by the given formula.
        epsi = x + (deltaX/2);
        //Calculating and assigning the epsilion value by the given formula.
        LHF = (pow(x,3) + 4 * x) * deltaX;
        //Calculating and assigning the LHF by the given formula.
        RHF = (pow((x + deltaX),3) + 4 * (x + deltaX)) * deltaX;
        //Calculating and assigning the RHF by the given formula. We use x + deltax instead of x(i+1) because xi + deltax = x(i+1).
        MF = (pow(epsi,3) + 4 * epsi) * deltaX;
        //Calculating and assigning the MF by the given formula.
        LHsum += LHF; RHsum += RHF; Msum += MF;
        //Adding the each LHF, RHF and MF to their sum.
        cout << setw(5) << i << setw(10) << x << setw(12) <<epsi << setw(12) << LHF << setw(12) << RHF << setw(12) << MF<< endl;
        //Printing the outputs(values) for each step like the given output.
    }
    cout << string(38,'-') << endl
    <<  string(9,'-') << " INTEGRAL RESULTS " << string(11,'-') << endl
    <<"f(x)=x^3 + 4x from [" << a << "," << b << "] with " << n << " intervals" << endl
    << string(38,'-') <<endl
    << left << setw(24) << "MIDPOINT RULE" << ": " << Msum << endl
    << left << setw(24) << "LEFT HAND RULE" << ": " << LHsum << endl
    << left << setw(24) << "RIGHT HAND RULE" << ": " << RHsum << endl
    << string(38,'-') <<endl;
    //At the end we print the sums and the other words to make it same with the given output.
}
