#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int m,n;
    int max;
    cin>>m>>n;
    if(m==1 && n==1)
        cout<<0;
    else{    
    if(m%2==0 && n%2==0)
    {
        max = m*n / 2;
    }
    else if(m%2==0 && n%2!=0){
        max = (m/2) * n;
    }
    else if(m%2 !=0 && n%2 ==0)
    {
        max = n/2 * m;
    }
    else {
        if(m>n)
        {
            max = m/2 * n + n/2;
        }
        else{
            max = n/2 * m + m/2;
        }
    }
    cout<<max;
}
}
