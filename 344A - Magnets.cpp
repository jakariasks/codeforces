//	344A - Magnets

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int magnet, n;
    int First_magnet;
    int group_Num=1;

    cin>>n;

    cin>>First_magnet;

    for(int i=1; i<n ; i++)
    {
        cin>>magnet;
        if(magnet!=First_magnet)
            group_Num++;
        First_magnet=magnet;

    }
    cout<<group_Num<<endl;

    return 0;
}
