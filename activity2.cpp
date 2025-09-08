#include <iostream>
#include <string>
using namespace std;

int main() {

    string FullName, CourseYrSec, Birthday, Motto;
    
    cout << "Enter your Full Name: ";
    getline(cin, FullName);

    cout << "Enter your Course, Year and Section: ";
    getline(cin, CourseYrSec);

    cout << "Enter your Birthday: ";
    getline(cin, Birthday);

    cout << "Enter your Motto/Motivation in life: ";
    getline(cin, Motto);

    // output
    cout << "Hi! I\'m " << FullName << " of " << CourseYrSec
         << ". Welcome to Data Structure and Algorithm!" << endl;

    cout << "My Birthdate is " << Birthday
         << ". And my Motto/Motivation in life is " << Motto << "." << endl;

    return 0;
}
