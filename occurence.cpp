#include <iostream>
using namespace std;

int binary_search_left_occurence(int a[],int n,int occ){
    int s=0;
    int e=n;
    int ans=-1;
    
    while(s<=e){
        int mid=(s+e)/2;
         
         for(int i=0;i<n;i++){
             if(a[mid]==occ){
                 ans=mid;
                 e=mid-1;
             }
             else if(a[mid]<occ){
                 s=mid+1;
             }
             else{
                 e=mid-1;
             }
         }
    }
    return ans;
}


int binary_search_right_occurence(int a[],int n,int occ){
    int s=0;
    int e=n;
    int ans=-1;
    
    while(s<=e){
        int mid=(s+e)/2;
         
         for(int i=0;i<n;i++){
             if(a[mid]==occ){
                 ans=mid;
                 s=mid+1;
             }
             else if(a[mid]<occ){
                 s=mid+1;
             }
             else{
                 e=mid-1;
             }
         }
    }
    return ans;
}


int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int occ;
    cout<<"enter number "<<endl;
    cin>>occ;

    cout<<binary_search_left_occurence(a,n,occ);
    cout<<binary_search_right_occurence(a, n, occ);
    return 0;
}