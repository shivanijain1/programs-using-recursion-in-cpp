#include<iostream>
using namespace std;

int search (int key)
{
    for(int i=0;i<5;i++)
    {
        if (arr[i]==key)
        {
         return i;
        cout<<"number found"<<endl;
        }


    else{
    cout<<"not found"<<endl;
}}}
int main ()
{
    cout<<search(1);
    return 0;
}
