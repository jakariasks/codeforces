By jakaria_sks, contest: Codeforces Round 634 (Div. 3), problem: (A) Candies and Two Sisters, Accepted, #, Copy
//A. Candies and Two Sisters
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int i=0;
    while(i<t)
    {

        int n,way=0;

        cin>>n;
        if (n>2)
            way=(n-1)/2;

        cout<<way<<endl;
        i++;
    }

    return 0;
}
