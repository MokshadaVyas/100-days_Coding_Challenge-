#include<iostream>
using namespace std;
int Valid(const char *a)
{
    for(int i=0;a[i]!='\0';i++)
    {
    if(!(a[i]>=65 && a[i]<=90 || a[i]>=97 && a[i]<=122) || a[i]>=48 && a[i]<=57)
    {
        return 0;
    }
    }
    return 1;
}
int main()
{
    const char *a="mokshada%$#@vyas";
    if(Valid(a)==1)
    {
        cout<<"You have entered valid string"<<endl;
    }else 
    {
        cout<<"You have entered Invalid string"<<endl;
    }
    return 0;
}