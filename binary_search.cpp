#include <iostream>
using namespace std;

int binary_search(int a[],int n, int key){
    int s=0;
    int e=n;
    
    while(s<=e){
     int mid=s+(e-s)/2;// this is written if number is bigger 
        for(int i=0;i<n;i++){
           
            if(a[mid]==key){
                return mid;
            }
            else if(a[mid]<key){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
    }
}
int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    int key;
    cout<<"enter key"<<endl;
    cin>>key;

cout<<binary_search(a,n,key);
    return 0;
}