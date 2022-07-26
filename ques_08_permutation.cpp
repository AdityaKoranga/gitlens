#include<iostream>
// #include<conio.h>
using namespace std;

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    temp=*b;
}

void perm(int A[],int b,int n)
{
    if(b==n-1)
    {
        for(int i=0;i<n;i++)
        {
            cout<<A[i];
        }
        cout<<endl;
    }
    else
    {
        for(int i=b;i<n;i++)
        {
            swap(A[i],A[b]);
            perm(A,b+1,n);
            swap(A[i],A[b]);
        }
    }
}

void permrep(int A[],int B[],int b,int n)
{
    if(b==n)
    {
        for(int i=0;i<b;i++)
        {
            cout<<B[i];
        }
        cout<<endl;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            B[b]=A[i];
            permrep(A,B,b+1,n);
        }
    }
}

int main ()
{
    int ch;
    int A[50],B[50];
    int n,b=0;
    cout<<"Enter the size of set ";
    cin>>n;
    cout<<"Enter the elements of set"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"The set entered is {";
    for(int i=0;i<n;i++)
    {
        if(i==0)
        cout<<A[i];
        else
        cout<<","<<A[i];
    }
    cout<<"}";
    cout<<endl;
    cout<<"Enter your choice "<<endl<<"1.permutation with repetition"<<endl<<"2.permutation without repetition"<<endl<<"3.exit"<<endl;
    cin>>ch;    
    switch(ch)
    {
        case 1: permrep(A,B,b,n);
                    break;
        case 2: perm(A,b,n);
                    break;
        case 3: exit(0);
        default:cout<<"wrong choice";
                    break;
    }                      
    
}