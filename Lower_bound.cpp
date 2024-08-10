#include<iostream>
using namespace std;

int lower_Bound(int arr[],int n,int target)
{
    int l=0,h=n-1;
    int ans=n;

    while(l<=h)
    {
        int mid=(l+h)/2;

        if(arr[mid]>=target)
        {
            ans=mid;
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return ans;
}

int main()
{
    int arr[]={1,2,2,3,3,5,8,8,10,10,12,13};
    int n=sizeof(arr)/sizeof(arr[0]);

    int answer=lower_Bound(arr,n,11);
    cout<<"Lower Bound of the targeted number is "<<answer<<endl;
    return 0;
}