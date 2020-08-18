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
	int flag = 1,first=0,last=n-1;
	int middle = (first+last)/2;
	while(first<=last){
		if(arr[middle]==search){
			cout<<"Element FOund at position "<<middle+1<<endl;
			flag=0;
			break; 
		}
		else if(arr[middle]>search)
			last = middle - 1;
		else
			first = middle + 1;
	}
	if(flag)
		cout<<"ELement not FOund";
	return 0;
}
