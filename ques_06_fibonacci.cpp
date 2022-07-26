#include<iostream>
using namespace std;
    int Func(int n){
        //base case
        if(n==0){
            return 0;}

        if(n==1)
            return 1;
        int ans=Func(n-1)+Func(n-2);
        
        return ans;
        
    }


int main(){
    int n;
    cin>>n;
    // int output=Func(n);
    // cout<<output<<endl;

    for (int i=0; i< n ;i++){
        cout << Func(i)<< " ";
    }
return 0;
}