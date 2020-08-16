#include <iostream>

using namespace std;

//return statement
//we will only return something

//void means that it will not return any information

//we need a return type, depends on waht typw is needed
double cube(double num){
double result = (num + num)*num;
return result;
}

//try insert data using void
void cobaPakaiVoid(double newNumber){
    cout << "-- " << newNumber<< endl;
double data = cube(newNumber);
cout << "-- -"<< data<< endl;

double hasil = data * 2;
cout << "-- --"<< hasil<< endl;

cout << "hasil coba pakai void "<< hasil;

}


int main()
{
    cout << "Hello world!" << endl;
    cout << "provide double value ";
    double cinta;
    cin >> cinta;

    double hasil = cube(cinta);
    cout << "hasil "<< hasil;

    cobaPakaiVoid(hasil);

    return 0;
}
