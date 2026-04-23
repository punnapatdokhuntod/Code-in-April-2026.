#include <iostream>
using namespace std;
int main () {
    int player1HP = 10;
    int player2HP = 100;
    int temp ;
    int* ptr1Player = &player1HP ; // pointer 
    int* ptr2Player = &player2HP ; // pointer
    temp = *ptr1Player ; // get temp has 10
    *ptr1Player = *ptr2Player ; // p1=p2
    *ptr2Player = temp ; // p2=10 ( temp = 10 )
    cout << player1HP << "\t" << player2HP ; // output = 100 10
    return 0;
}
