#include <iostream>
using namespace std;

int pivot_element(int a[],int n)
{
    int s=0;
    int e=n;
    int mid=(s+e)/2;
    while(s<e)
    {
        for(int i=0;i<n;i++)
        {
           
            if(a[mid]>=a[0]){
                s=mid+1;
            }
            else{
                e=mid;
            }
            mid=(s+e)/2;
        }
    }
    cout<<"pivot element is ";
    return a[s];
}

int main()
{
    int n;
    cout<<"enter no of element in an array"<<endl;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<pivot_element(a,n);
    return 0;
}