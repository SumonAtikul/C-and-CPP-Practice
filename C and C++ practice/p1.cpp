#include<bits/stdc++.h>
using namespace std;
void pf(int n)
{
    int f=0,c=0,cn=0;
    cout<<n<<" "<<"=";
    while(n%2==0)
    {
        if(f==0)
        {
            cout<<" 2";
        }
        else
        {
            cout<<" x "<<"2";
        }
        f=1;
        n=n/2;


    }
    for(int i=3; i<=sqrt(n); i=i+2)
    {

        while(n%i==0)
        {
            if(f==0)
            {
                cout<<" "<<i;
            }
            else
            {
                cout<<" x "<<i;
            }
            n/=i;
            f=1;
        }
    }
    if(n>1)
    {
        if(f==0)
        {
            cout<<" "<<n;
        }
        else
        {
            cout<<" x "<<n;
        }
    }
    cout<<endl;

}


void pfn(int n)
{
    int f=0,c=0,cn=0;
    cout<<-n<<" "<<"=";
    cout<<" -1 x";
    while(n%2==0)
    {
        if(f==0)
        {
            cout<<" 2";
        }
        else
        {
            cout<<" x "<<"2";
        }
        f=1;
        n=n/2;


    }
    for(int i=3; i<=sqrt(n); i=i+2)
    {

        while(n%i==0)
        {
            if(f==0)
            {
                cout<<" "<<i;
            }
            else
            {
                cout<<" x "<<i;
            }
            n/=i;
            f=1;
        }
    }
    if(n>1)
    {
        if(f==0)
        {
            cout<<" "<<n;
        }
        else
        {
            cout<<" x "<<n;
        }
    }
    cout<<endl;

}
int main()
{
    int n,c=0;
    while(cin>>n)
    {
        if(n==0)
            break;
        else if(n>0)
            pf(n);
        else
        {
            if(n==-1)
                cout<<"-1 "<<"="<<" -1"<<endl;
            else
                pfn(abs(n));
        }

    }

    return 0;
}
