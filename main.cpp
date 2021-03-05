#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int Num1;
    int Num2;
    int Num3;
    int Num4;
    int Num5;
    int Num6;
    int Num7;

    cout << "This program quickly times your number by 2, then 4, then 8 and so on... Give it a try :)" << endl;
    cout << "Enter a Number:";
    cin >> Num1;


    Num2 = Num1 + Num1;
    Num3 = Num2 + Num2;
    Num4 = Num3 + Num3;
    Num5 = Num4 + Num4;
    Num6 = Num5 + Num5;
    Num7 = Num6 + Num6;

    cout << "Your Number:" << Num1 << " x2:"<< Num2 << " x4:"<< Num3 << " x8:";
    cout << Num4 << " x16:"<< Num5 << " x32:" << Num6 << " x64:" << Num7 << endl;

    return 0;
}
