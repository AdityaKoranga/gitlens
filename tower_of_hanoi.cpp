#include <iostream>
using namespace std;

void tower_of_hanoi(int n, char from, char to, char aux){
    
    //base case
    if ( n==0) return;

    //recursive relation
    tower_of_hanoi(n-1, from, aux, to);
    cout<<"Move disk " << n << " from " << from << " to " << to << endl ;

    tower_of_hanoi(n-1 , aux, to, from);
}


int main(){
    int n=3;
    // char A, B, C;
    tower_of_hanoi(n, 'A', 'C', 'B');
}

