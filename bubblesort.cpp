#include<bits/stdc++.h>
using namespace std;

int bubblesort(int *a,int n)
{
    for(int j = 0; j<n ; j++){
    for(int i = 0; i<n-1; i++)
    {
        if(a[i]>a[i+1])
            swap(a[i],a[i+1]);
    }
    }
}

void printlist (int *p, int m)
{
     for(int i = 0; i<m ; i++)
    {
        cout<<p[i]<<"  ";
    }
    cout<<endl;
}
void generaldata(int *p,int m)
{
      for(int i = 0; i<m ; i++)
    {
        p[i] = rand()%1000;
    }
}

int main()
{
    int m;
    cin>>m;

    srand(time(0));
    int *p = new int[m];

    generaldata(p,m);
    printlist(p,m);
   bubblesort(p,m);
   printlist(p,m);
}



