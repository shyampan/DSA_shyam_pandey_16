#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of integer"<<endl;
    cin>>n;
    
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool swapp=false;
    for(int i=1;i<=n;i++){
        for(int j=0;j<n;j++){
            if(a[j]>a[j+1]){
                int temp=0;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                swapp=true;
            }
        }
        if(swapp==false){
            break;
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}