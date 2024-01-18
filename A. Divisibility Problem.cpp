By jakaria_sks, contest: Codeforces Round 629 (Div. 3), problem: (A) Divisibility Problem, Accepted
//A. Divisibility Problem
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //test case
    int t;
    cin>>t;
    int i=1;
    while(i<=t)
    {
        int a, b,step=0;
        //input a & b
        cin>>a >> b;

        if (a%b==0)
            cout<< step<<endl;
        else
        {
            step= b-(a%b);
            cout<<step<<endl;
        }

            i++;
        }

        return 0;
    }
