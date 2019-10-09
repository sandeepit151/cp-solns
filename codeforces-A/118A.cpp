#include<bits/stdc++.h>
using namespace std;
bool isVowel(char c)
{
    if(c=='A'||c=='E'||c=='O'||c=='i'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        return true;
    return false;    
}
int main()
{
    string x;
    cin>>x;

    for(int i=0;i<x.length();i++)
    {
        if(isVowel(x[i]))
        {
            for(int j=i;j<x.length()-1;j++)
            {
                x[j]=x[j+1];
            }
        }
        else{
            x[i]=x[i]+32;
            for(int k=i;k<x.length()+1;k++)
            {
                x[k+1]=x[k];
            }
            x[i]='.';
        }
    }
    cout<<x;

}
