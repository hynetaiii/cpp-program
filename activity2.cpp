#include <iostream>
#include <string>
using namespace std;

int main() {

string FullNameee, CourseYearSeccc, Birthdayyy , Mottooo;

//input
cout << “Enter your Full Name: “;
getline (cin, FullNameee);

cout << “Enter your Course, Year and Section: “;
getline (cin, CourseYearSeccc);

cout << “ yourEnter Birthday: “;
getline (cin, Birthdayyy);

cout << “Enter your Motto/Motivation in life;
getline (cin, Mottooo);

//output

cout << “Hi! I’m “ << FullNameee << “of “ << CourseYearSeccc << “. Welcome to Data Structure and Algorithm!” << endl;
cout << “ My Birthdate is  “ << Birthdayyy << “. And my Motto/Motivation in life is “ << Mottooo << “.” endl;

return 0;
}