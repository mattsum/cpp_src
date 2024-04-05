#include <iostream>
#include <string>
using namespace std;

int main(void){
    string song("Falling in love w/ you");
    string elvis("Elvis Presly");
    string singer;

    cout << song + elvis + "test" << endl;
    cout << "(힌트 : 첫글자는 " << elvis[0] << ") ?"; 

    getline(cin,singer);
    if(singer == elvis)
        cout << " Correct. ";
    else
        cout << " Wrong. " + elvis + " 입니다." << endl;
    
        return 0;
}