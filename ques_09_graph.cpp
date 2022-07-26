#include<iostream>
#include<cmath>
using namespace std;

int Ta(int n)
{
    if(n==0)
        return 1;
    else
        return (n+Ta(n-1));
}

int Tb(int n)
{
    if(n==0)
        return 1;
    else
        return (pow(n,2)+Tb(n-1));
}

int Tc(int n)
{
    if(n==0)
        return 1;
    else
        return (n+(2*Tc(n/2)));
}

int main()
{
    int n,c;

    cout<<"VALUES OF RECURRENCE RELATIONS :"<<endl<<endl;
    cout<<"\t 1. T(n)= T(n-1)+n       ,T(0)=1 "<<endl;
    cout<<"\t 2. T(n)= T(n-1)+n^2     ,T(0)=1 "<<endl;
    cout<<"\t 3. T(n)= 2*T(n/2)+n     ,T(1)=1 "<<endl;

    cout<<"\nEnter your choice(between 1,2,3) :	";
    cin>>c;
    if((c>3)||(c<=0))
        cout<<"\nInvalid choice!!";
    cout<<"\nEnter the value for n : ";
    cin>>n;

    if(c==1)
    {
        int r=Ta(n);
        cout<<"\nResult : "<<r<<endl;
    }

    else if(c==2)
    {
        int r=Tb(n);
        cout<<"\nResult : "<<r<<endl;
    }

    else if(c==3)
    {
        int r=Tc(n);
        cout<<"\nResult : "<<r<<endl;
    }

    return 0;	
}
