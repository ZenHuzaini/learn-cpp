#include <iostream>

using namespace std;

int getMaxNumber(int data[]){
    int getMax = 0;

    for(int i = 0; i < sizeof(data); i++){
            cout << "log "<< i << endl;
        if(data[i] > getMax){
            getMax = data[i];
        }
    }

    return getMax;

}

int main()
{
    int data[] = {1,11,13,500,8,99,100};
    int maxNumber = 0;
    maxNumber=  getMaxNumber(data);
    cout << "Hello world! "<< maxNumber << endl;
    return 0;
}
