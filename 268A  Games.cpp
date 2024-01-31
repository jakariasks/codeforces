#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1[100],n2[100],N,i,j,f=0;
    cin >> N;


    for(i = 0 ; i < N ; i++){
        cin >> n1[i] >> n2[i];
    }

    for(i = 0 ; i < N ; i++){
        for(j = 0 ; j < N ; j++){
            if(n1[i] == n2[j]){
                f++;
            }
        }
    }

    cout<< f << endl;

    return 0;
}
