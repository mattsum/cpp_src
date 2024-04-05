#include <iostream>
using namespace std;
 // namespace std;

int main(){
    cout << "Hello\n\r";
    cout << "World\n\r";
    cout << 'H' << 'e' << 'l' << 'l' << 'o';
    cout << "********************\n\r";
    
    int width;
    int height;
    
    cout << "너비와 높이를 입력하세요.>>";
    cin >> width >> height; 
    cout << width << '\n' << height << '\n';

    return 0;
}