#include <iostream>
#include <cstdio>
using namespace std;
int main ()
{
    char ch[300];
    string tstr = "marshtomp";
    while(gets(ch))
        {
        string str="",sstr=ch;
        int j=0;
        int len=sstr.length();
                for(int i=0;i<len;i++)
                   if(sstr[i]<='Z'&&sstr[i]>='A')
                      str= str+(char)(sstr[i]-'A'+'a');
                    else
                      str+=sstr[i];
                int c=0;
                for(int i=0;i<len;i++,c++){
                    int temp=i;
                    while(str[temp]==tstr[j]&&temp<len&&j<9){
                        temp++,j++;
                    }
                    if(j==9){
                     sstr.replace(c,9,"fjxmlhx");
                     i+=8,c+=6;
                    }
                    j=0;
                }
                cout<<sstr<<endl;
        }
        return 0;
}
