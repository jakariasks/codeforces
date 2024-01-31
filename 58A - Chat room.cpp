#include<bits/stdc++.h>
using namespace std;
int main()
{
    string type;
    int i,f=0;
    cin>>type;

    string Hello = "hello";
    int len = type.size();


    for(i=0; i<len; i++)
    {
        if(type[i] == Hello[f])
            f++;
    }
    if(f == Hello.size())

        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


    return 0;
}
