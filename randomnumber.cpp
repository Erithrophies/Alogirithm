#include<bits/stdc++.h>

using namespace std;

//stdlib.h --> rand()
//srand() ..>//seeds
int main()
{

    srand(time(0));
    for(int i = 0; i<5; i++)
    {
        cout<<rand()%10<<endl;
    }
    return 0;
}
