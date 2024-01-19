//By jakaria_sks, contest: Codeforces Round 790 (Div. 4), problem: (A) Lucky?, Accepted, #, Copy
//1676A - Lucky?
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i=0;
    cin>> t;

    while(i<t)
    {
    string digit;
    cin>>digit;

    int sum1= digit[0]+digit[1]+digit[2];
    int sum2= digit[3]+digit[4]+digit[5];

    if(sum1==sum2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


    i++;
    }
   return 0;

}
