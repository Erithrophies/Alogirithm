#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>

using namespace std;

void printlist(int *p, int n)
{
    for(int i = 0; i<n; i++)
    {
        cout<<"Index of "<<i<<" is"<<p[i]<<endl;
    }
}

void selectionsort(int *A, int n)
{
    for(int i = 0; i<n-1 ;i++)
    {
        int imin = i;
       for(int j = i+1; j<n; j++)
      {
           if(A[j]<A[imin])
           {
               imin = j;
           }
            swap(A[imin],A[i]);
      }
    }

}
int main()
{

    printlist(a,n);
    selectionsort(a,n);
    cout<<"after sorting"<<endl;
    printlist(a,n);

    ofstream fout("7k.txt");
    srand(time(0));
    int n = 7000;

    for(int i = 0; i<n; i++)
    {
        fout<<rand()%1000+1<<endl;
    }
    ifstream fin("7k.txt");
    for(int i = 0; i<n; i++)
    {
        fin>>a[i];
    }

    return 0;
}





int main()
{
    ofstream fout("7k.txt");
    srand(time(0));
    int n = 7000;

    for(int i = 0; i<n; i++)
    {
        fout<<rand()%1000+1<<endl;
    }
    return 0;
}


