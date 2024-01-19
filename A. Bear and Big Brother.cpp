//By jakaria_sks, contest: Codeforces Round 405 (rated, Div. 2, based on VK Cup 2017 Round 1), problem: (A) Bear and Big Brother, Accepted, #, Copy
//A. Bear and Big Brother

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j,year=0;

    //input limak weigh a & Bob weight b
    cin>>a>> b;

    //calculate the year needed
    for(i=a,j=b; ; i*=3,j*=2)
    {
        if (i<=j)
            year++;
        else
            break;
    }

    cout<<year<<endl;

    return 0;

}
