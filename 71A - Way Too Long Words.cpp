//By jakaria_sks, contest: Codeforces Beta Round 65 (Div. 2),
//problem: (A) Way Too Long Words, Accepted.

//71A - Way Too Long Words

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i=0;
    cin>>t;
    while(i<t)
    {
    string word;
    int countt=0;
    cin>>word;

    for(int i=0;  ; i++)
    {
        if(word[i]=='\0')
            break;
        countt++;
    }
        //cout<<countt<<endl;
    if(countt<=10)
        cout<<word<<endl;
    else
        cout<<word[0]<<countt-2<<word[countt-1]<<endl;
    i++;
    }
    return 0;
}
