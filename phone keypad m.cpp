#include<iostream>
#include<cstring>
using namespace std;
char keypad [][10]= {" ",",?.[]","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
void keypadstring (char *in,char *out,int i,int j)
{
    if (in[i]=='\0')
    {
        out[j]='\0';
        cout<<out<<endl;
        return;
            }
            int digit = in[i]-'0';
            if(digit==0)
           {
               keypadstring (in,out,i+1,j);

           }
            for (int k=0;keypad [digit][k]!=0;k++)
            {
                out[j]=keypad [digit][k];
                keypadstring (in,out,i+1,j+1);
            }


           return;}
            int main ()
            {
                char in[100];
                char out[100];
                cin>>in;
                keypadstring (in,out,0,0);
                return 0;
            }



