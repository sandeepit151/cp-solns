#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    cin>>x;
    char c[]={'h','e','l','l','o'};
    int m=0;
    for(int i=0;i<x.length();i++)
    {
        if(x[i]==c[m])
        {
            m++;
        }
        if(m==5)
        break;
    }
    if(m==5)
    cout<<"YES";
    else
    {
        cout<<"NO";
    }
    
}
