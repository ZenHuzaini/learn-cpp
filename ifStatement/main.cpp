#include <iostream>

using namespace std;

void tebakSiapa(bool tall, bool nyebelin){
bool isTall = tall, isAnnoying = nyebelin;

if(tall && nyebelin){
    cout << "dia adalah : Kristian" << endl;
}else if(!tall && nyebelin){
cout << "dia adalah haciko " << endl;
}else if(tall && !nyebelin){
cout << "dia adalah enggak " << endl;
}else if (!tall && !nyebelin) {
cout << "dia adalah saiap aja " << endl;
}else{
cout << "default " << endl;
}

}

int main()
{
    //STRING OKAY
    string isOkay = "no";

    if(isOkay != "yes"){
       cout << "you are not okay" << endl;
    }else{
    cout << "you are okay" << endl;
    }



    //STRING WITH FIND
 string isOkay1 = "inyong uyes so";

    if(isOkay1.find("y") == 2){
       cout << "index is strue " << isOkay1.find("yes") << endl;
    }else{
    cout << "you are okay" << endl;
    }

    //Void
    tebakSiapa(true, false);

    int isStop;
    bool tall = true, nyebelin= true;

    do{
     cout << "lanjutkan program 1/0 :  ";
        cin >> isStop;
        cin.clear();

        cout << "dia tinggi ";
        cin >> tall;
        cin.clear();

        cout << "dia nyebelin ";
        cin >> nyebelin;

        tebakSiapa(tall, nyebelin);
    }while(isStop != 1);



    return 0;
}
