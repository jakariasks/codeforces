//By jakaria_sks, contest: Codeforces Round 161 (Div. 2),
//problem: (A) Beautiful Matrix,
//Accepted
//	263A - Beautiful Matrix

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int matrix[5][5],row,col,ans;

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>matrix[i][j];
            if (matrix[i][j]==1)
                row=i, col=j;
        }
    }
    ans=abs(2-row)+abs(2-col);

    cout<<ans<<endl;

    return 0;
}
