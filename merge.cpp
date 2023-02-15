#include<bits/stdc++.h>
using namespace std;

int *mergelist(int *a,int m,int *b,int n)
{
  int *c = new int[m+n];
  int i = 0, j=0, k = 0;
  while(i<m && j<n)
  {
      if(a[i]>b[j])
        c[k++] = b[j++];
      else
        c[k++] = a[i++];
  }
  while(i<m)
  {
      c[k++] = a[i++];
  }
  while(j<n)
  {
      c[k++] = b[j++];
  }
    return c;
}

printlist(int *p,int n)
{
    for(int i = 0; i<n; i++)
    {
        cout<<p[i]<<"  ";
    }
    cout<<endl;
}
int main()
{
    int a[] = {2,5,6,4,8,14};
    int b[] = {1,4,7,8,12};
    cout<<"A = ";
    printlist(a,6);
    cout<<endl;
    cout<<"B = ";
    printlist(b,5);
    cout<<endl;

    int *m = mergelist(a,6,b,5);
    cout<<"Sorted merge list = ";
    printlist(m,11);
}
