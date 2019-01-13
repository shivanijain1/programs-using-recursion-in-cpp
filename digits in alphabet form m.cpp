#include<iostream>
using namespace std;
char spelling [][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
int alpha (int n)
{
    if (n==0)
    {
        return 0;
    }
    else{
            alpha (n/10);
    cout<<spelling[n%10]<<" ";
}}
int main ()
{
    cout<<"  "<<alpha (205)<<endl;
    return 0;
}
