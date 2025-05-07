#include <iostream>

using namespace std;

int main(){

    int clac;

cout << "number clac: ";
int number;
cin >> number;
cout << "number2 clac: ";
int number_tow;
cin >> number_tow;

char ary[400] = "\n[1] +\n [2] *\n [3] - \n [4] % \n";
cout << ary;
cin >> clac;

switch (clac)
{
case 1:
cout << number + number_tow;
break;
case 2:
cout << number * number_tow;
break;
case 3:
cout << number - number_tow;
break;
case 4:
cout << number % number_tow;
break;

default:
cout << "not found!;";
    break;
}



}