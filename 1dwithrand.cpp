#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cin>>m;

    srand(time(0));
    int *p = new int[m];
     for(int i = 0; i<m ; i++)
    {
        p[i] = rand()%10;
    }
     for(int i = 0; i<m ; i++)
    {
        cout<<p[i]<<"  ";
    }
    cout<<endl;
}

