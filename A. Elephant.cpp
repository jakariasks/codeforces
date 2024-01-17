//A. Elephant

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,step;

    cin>>x;

    if (x<=5)
        step= 1;
    else if (x%5==0)
        step=x/5;

    else
        step=(x/5)+1;

    cout<<step;

    return 0;
}
