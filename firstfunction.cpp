#include <iostream>
using namespace std;
int ax(int num1,int num2) {
    int result ;
    {
    result = num1+num2 ;
    }
    return result;
}
int main (){
    int a,b ;
    cin >> a;
    cin >> b;
    cout << ax(a,b) ;
    return 0;
}
