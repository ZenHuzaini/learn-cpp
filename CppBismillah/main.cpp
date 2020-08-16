
//configuration options
#include <iostream>
#include <cmath> //use math function

using namespace std;

//container, if we are in main
//it means that everything in here will be executed
int main()
{

    //LESSON 1 String Hellpo
    string characterName = "Zen Vars";
    int characterAge = 24;

    cout << "Hello world! " << characterName << "this is a mazing " << characterAge << endl;
    cout << "something hard " << endl;

    //we can assign the new name
    characterName = "zenhuza";
    cout << "hey " << characterName << endl;

    //LESSON 2 Data Type
    char grade = 'A';
    bool isGood = true;

    //so in c++, constant variable is only
    cout << "this is constant " << endl;

    //String-------------------------------------------------------------
    cout << "zen academy ";
    cout << "delete the end1, so it will be one liner output " << endl;

    //we can make a new line isntead
    cout << "zen academy \n";
    cout << "delete the end1, so it will be one liner output " << endl;

    //write wthout << endl;
    string withoutEnd = "write one string without endl still works";
    cout << withoutEnd;

    //USE STRING FUNCTION---------------------------------------------------------
    //LENGTH LENGTH
    cout << "get length : " << withoutEnd.length() << endl;
    //CHAR CHAR CHAR
    //take char from string
    cout << "get char : " << withoutEnd[1] << endl;

    //we can modify also the char
    withoutEnd[1] = '0';
    cout << "get char : " << withoutEnd[1] << endl;

    //FIND FIND FIND
    //try to find the index ins a character
    int indexOf = withoutEnd.find("works", 3);
    cout << "so the index of k in the string is " << indexOf << endl;

    //what if there are two the same words ?
    string thesameWords = "there are the same words. here are and are";
    int indexOf1 = thesameWords.find("are", 2);
    cout << "so it will take the first are " << indexOf1 << endl;

    //what if there is no ?
    int indexOf2 = withoutEnd.find("workss", 3);
    cout << "so the index will return -1 because word workss doesnt exist " << indexOf2 << endl;

    //SUBSTRING
    //take a specific string
    string mysubString = "take a specific string please";
    //take the starting index and the last
    string getSpecific = mysubString.substr(4, 9);
    cout << "get substring " << getSpecific << endl;

    // NUMBERS----------------------------------------------------------
    //easy XD
    int inum = 10;
    double dnum = 5.5;

    cout << inum << endl;
    inum++;
    cout << inum << endl;

    //we can use math function, becaus ewe already load cmath
    double getPow = pow(3, 2);
    double getRound = round(4.6);

    //we can use fmin, fmax . there a re a lot more

    cout << "here is " << getPow << endl;

    //USER INPUT USER INPUT---------------------------------------------------
    int theAge;
    cout << "what u need ";
    //to get input use only cin (numbers and characters)
    //and put the var, to store it
    cin >> theAge;

    cout << "your age is " << theAge << endl;

    //BUT if you wanna use string, use getline
    string name;
    cout << "your name is ? ";
    getline(cin, name);

    cout << "hello " << name;

    //ARRAY
    int luckyNumber[] = {1,
                         4,
                         6,
                         7};

    cout << "get the index " << luckyNumber[2];
    //you can also modify
    luckyNumber[2] = 5;
    cout << "changed value " << luckyNumber[2];

    //set defau;lt array length
    int setDefArray[20];
    setDefArray[2] = 3;

    return 0;
}
