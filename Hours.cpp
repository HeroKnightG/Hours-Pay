#include <iostream>
#include <string>

using namespace std ;

int main() {
    float a = 350 , b , c;
    string ch = "Change : " ;

    cout << "Enter Hours : " ;
    cin >> b ;
    float d = a * b ;
    cout << "Total : " << d << "\n";

    cout << "Pay : ";
    cin >> c ;
    if(c == d) {
        cout << ch << "none";
    }
    else if(c >= d) {
        cout << ch << c-d ;
    } else {
        cout << ch << "error!" ;
        }
    
    return 0 ;
}