#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, persion[3],i,c=0;

    //test case input
    cin>>n;
    int x=1;
    while(x<=n)
    {
        int f=0;
        //opinion from 3 persion
        for(i=0; i<3; i++)
        {
            cin>> persion[i];
        }

        //count the number of implement of problems
        for(i=0; i<3; i++)
        {
            if (persion[i]==1)
                f++;
        }
        if (f>1)
            c++;

        x++;
    }
    cout<<c;

    return 0;

}
