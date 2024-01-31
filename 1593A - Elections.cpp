//	1593A - Elections

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int i=0;
    while(i<t)
    {
    int a,b,c,m,A,B,C;
    cin>>a>>b>>c;

    if(a>b && a>c)
        m=a;
    else if(b>a && b>c)
        m=b;
    else
        m=c;

    //cout<<m<<" ";

    if(a==b && b==c)
    {
        cout<<"1 1 1";
    }
    else
    {
        //find A
        A=(m-a)+1;
        if(a==m)
            cout<<"0" <<" ";
        else
            cout<<A<<" ";

        //find B
        B=(m-b)+1;
        if(b==m)
            cout<<"0" <<" ";
        else
            cout<<B<<" ";

        //find C
        C=(m-c)+1;
        if(c==m)
            cout<<"0" <<" ";
        else
            cout<<C <<" ";
    }
    cout<<endl;
    i++;
    }
    return 0;

}
