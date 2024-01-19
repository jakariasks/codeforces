//1692A - Marathon

#include<bits/stdc++.h>
using namespace std;

int main()
{
    //for test case
    int t;
    cin>>t;
    int x=0;
    while(x<t)
    {
        int distance[4];
        int f=0;
        for(int i=0; i<4; i++)
        {
            cin>>distance[i];
        }

        for(int i=1; i<4; i++)
        {
            if(distance[0]< distance[i])
                f++;
        }

        cout<<f<<endl;
        x++;
    }

    return 0;
}

