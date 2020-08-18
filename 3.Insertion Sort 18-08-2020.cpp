#include<iostream>
using namespace std;
int main(){
    int arr[100],i,n,j,key,k;
    cout<<"enter no of element : ";
    cin>>n;
    cout<<"Enter "<< n <<" elements : ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for (i=1;i<n;i++){
        key = arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
        for(k=0;k<n;k++){
            cout<<arr[k]<<" ";
        }
        cout<<"\n";
    }
    cout<<"final output"<<endl;
    for(i=0;i<n;i++){
    	cout<<arr[i]<<" ";
	}
    return 0;
}
