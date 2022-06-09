#include <iostream>
using namespace std;
int pivot(int n, int a[]){
    int s=0;
    int e=n;
    int mid=(s+e)/2;

 while(s<=e){
  if(a[mid]<a[mid-1] && a[mid]<a[mid+1]){
      cout<<"pivot element is ";
      return a[mid];
  }

  else if(a[mid]>a[0]){
      s=mid+1;
  }
  else if(a[mid]<a[0]){
      e=mid-1;
  }
  mid=(s+e)/2;
 }
 cout<<"pivot element is ";
 return a[s];
}


int main(){
    int n;
    cout<<"enter no of intege in an arrary"<<endl;
    cin>>n;

    int a[n];
    cout<<"enter element of arrya"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<pivot(n,a);
    return 0;
}