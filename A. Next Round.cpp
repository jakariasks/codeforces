By jakaria_sks, contest: VK Cup 2012 Qualification Round 1, problem: (A) Next Round, Accepted, #, Copy
//A. Next Round

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int contestant_score[100];
    int n,k,c=0;
    cin>>n>>k;

    //input the score of the contestant
    for(int i=0; i<n; i++)
    {
        cin>>contestant_score[i];
    }

    //count the number of contestant who advanced to the next round
    for(int i=0; i<n; i++)
    {
        if (contestant_score[i]>=contestant_score[k-1]&&contestant_score[i]>0)
            c++;
    }
    cout<<c<<endl;

    return 0;
}
