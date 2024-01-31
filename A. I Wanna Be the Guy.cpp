#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[1000];
    int n, p,q,i,f=0;
    cin >>n>>p;

    //for x
    for(i =  0 ; i < p ; i++)
    {
        cin>>arr[i];
    }

    //for y
    cin >> q;
    for(i=p; i<p+q ; i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+(p+q));

    for(i=0; i<p+q ; i++)
    {
        if(arr[i]!=arr[i+1])
        {
            f++;
        }
    }

    if(n == (f))
    {
        cout << "I become the guy." <<endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}
