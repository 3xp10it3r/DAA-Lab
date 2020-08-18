#include<stdio.h>

int main(){
	int search,flag=1,first,last,arr[100],i,middle,n;
	printf("Enter number of elements : ");
	scanf("%d",&n);
	printf("Enter %d Elements in Sorted Order : ",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
    
	printf("Enter search element : ");
    scanf("%d",&search);
    
	first = 0;
	last = n-1;
	middle = (first+last)/2;
	while(first<=last){
		if(arr[middle] == search){
			printf("Element FOUND at position %d",middle+1);
			flag=0;
			break;
		}
		else if(arr[middle]>search)
			last = middle - 1;
		else
			first = middle + 1;
		middle = (first+last)/2;
	}
	if(flag)
		printf("Element Not FOUND");
	return 0;
}
