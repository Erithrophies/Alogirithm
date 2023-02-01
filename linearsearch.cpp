#include<bits/stdc++.h>
using namespace std;

int linearsearch(int *a, int b, int c)
{
    for(int i = 0; i<b; i++)
    {
        if(a[i] == c)
        return i;
    }
    return -1;
}

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
    int index = linearsearch(p,m,1);
    if(index == -1)
    {
        cout<<"not found"<<endl;
    }
    else
    {
            cout<<"found"<<endl;
    }
}


