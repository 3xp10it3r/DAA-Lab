#include<stdio.h>

int main()
{
    int flag=1,search_element,i,n,arr[100];
    printf("Enter Number of Element :\n");
    scanf("%d",&n);
	printf("Enter %d Elements : ",n);
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter search element : ");
    scanf("%d",&search_element);
    
    for(i=0;i<n;i++){
        if(arr[i]==search_element){
            printf("Element FOUND at index of %d and position %d",i,i+1);
            flag=0;
			break;
        }
    }
    if(flag)
    	printf("not FOUND");
    return 0;
}
