#include<iostream>
using namespace std;
int main()
{
	int n,arr[100],search;
	cout<<"Enter Number of Elements"<<endl;
	cin>>n;
	cout<<"Enter "<<n<<" ELements"<<endl;
	for(int i = 0 ; i < n; i++){
		cin>>arr[i];
	}
	cout<<"Enter search element"<<endl;
	cin>>search;
	int flag=1;
	for(int i = 0; i < n ; i++){
		if(arr[i]==search){
			cout<<"Element Found At index "<<i<<endl;
			flag=0;
			break;
		}
	}
	if(flag)
		cout<<"element Not Found";
	return 0;
}
