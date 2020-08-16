#include <iostream>

using namespace std;

int main()
{
    int number;
    int randomNumber = rand() % 3 + 1; //random 1-3

    while(number != randomNumber){

        cout << "masukkan nomer : ";
        cin >> number;
    if(number == randomNumber){
        cout << " you win already! " << endl;
        break;
    }

    }


    cout << "Hello world!" << endl;
    return 0;
}
