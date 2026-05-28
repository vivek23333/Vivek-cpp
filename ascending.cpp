#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter size of array : "<<endl;
    cin>>a;
    int arr[a];

    cout<<"Enterv array elements : " << endl;
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    for(int i=0;i<a;i++){
        for(int j=i+1;j<a;j++){
            if(arr[i]>arr[j]){
            int temp=arr[j];
            arr[j]= arr[i];
            arr[i]= temp;
        }
    }
}
    cout<<"Array after sorting "<<endl;
    for(int i=0;i<a;i++){
        cout<<arr[i]<<" ";
    }
}