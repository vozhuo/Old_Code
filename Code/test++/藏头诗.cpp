#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int main()
{
    int t, n;
    //char c;
    cin>>t;
    for(int i = 0; i < t; i++)
    {
        char a[110];
        char b[110];
        cin>>n;
        gets(a);
        for(int j = 0; j < n; j++)
         {
            gets(a);
           // c = getchar();
            b[j] = *a;
          //  cout<<b[j]<<endl;
         }
         for(int l = 0; l < n; l++)
         cout<<b[l];
         cout<<endl;
    }
}
