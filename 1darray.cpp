#include<iostream>
using namespace std;

int main()
{
    int m;
    cin>>m;


    int *p = new int[m];
     for(int i = 0; i<m ; i++)
    {
        p[i] = 10;
    }
     for(int i = 0; i<m ; i++)
    {
        cout<<p[i]<<"  ";
    }
    cout<<endl;
}
