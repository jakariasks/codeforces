//A. Soldier and Bananas
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, w,i,total=0,x;

    cin>>n>>k>>w;

    //How much dollars he need
    for(i=1; i<=w; i++)
    {
        x=0;
        x=n*i;
        total=total+x;
    }

    //cout<<total;

    // He need to borrow
    if(total>k)
    {
        int borrow=total-k;
        cout<<borrow;
    }
    else
        cout<<0;


        return 0;

}
