//110A - Nearly Lucky Number

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string num;
    cin>>num;

    int countt=0;

    for(int i=0; ; i++)
    {
        if(num[i]=='\0')
            break;
        else if(num[i]!='4'&& num[i]!='7')
            countt++;
    }
    if(countt==0)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
