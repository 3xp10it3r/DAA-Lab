#include<stdio.h>
int main(){
    int arr[100],i,n,j,key,k;
    printf("enter no of element : ");
    scanf("%d",&n);
    printf("Enter %d elements : ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
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
            printf("%d ",arr[k]);
        }
        printf("\n");
    }
    printf("final Output\n");
    for(i=0;i<n;i++){
    	printf("%d  ",arr[i]);
	}
    return 0;
}
