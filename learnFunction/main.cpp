#include <iostream>

using namespace std;


void sayHi(string name, int age){
cout << "the name is : " << name << " and my age is: " << age  << endl;
}

int main()
{
    cout << "Hello world!" << endl;
    string theName;
    int theAge;

    cout << "get the name : ";
    getline(cin, theName);

    cout << "get the age : ";
    cin >> theAge;

    sayHi(theName, theAge);

    sayHi("declare the function ", 7);

    return 0;
}
