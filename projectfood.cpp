// RESTUARANT BY PUN  //
#include <iostream>
#include <string>
using namespace std ;
int main () {
    int sum=0 ;
    int number ;
    string question ;
    string food[5] = {"Apple","SushiSet","Stek","Curry","SeaFood"};
    int price[5] = { 25 , 35 , 40 , 50 , 60 } ;
    cout << "   WELCOME TO MY WEAKNESS RESTUARANT \n               -MENU-          \n  [1] APPLE \n  [2] SushiSet  \n  [3] Stek \n  [4] Curry \n  [5] Ramen " <<endl ;
    while ( question != "NO" ) {
    cout << " CHOOSE THE MENU NUMBER : " ;
    cin >> number ; ;
    while ( number > 5 ) {
        cout << "ENTER MENU AGAIN : " ;
        cin >> number ;
    }
    number = number-1 ;
    int n=number ;
    cout << " MENU " << food[number] << " PRICE = " << price[number] << endl ;
    sum = sum+price[n] ;
    cout << " MORE ORDER YES/NO ? : " ;
    cin >> question ;
    while ( question != "YES" && question != "NO" ) {
        cout << "ENTER ONLY YES/NO : ";
        cin >> question ;
        }}
    cout << "Total : " << sum ;
    return 0;
    
}
