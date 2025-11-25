#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr1[n];
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&arr1[i]);
        
        
    }
    int key,flag=0;
    scanf("%d",&key);
    for(int i=0;i<=n-1;i++)
    {
        if(arr1[i]==key){
            flag=1;
            break;
            
        }
        
        
    }
    if(flag==1){
            printf("key is found");
        }else{
            printf("key is not found");
            
        }
    
    // printf("Sum of even array element are :%d\n",sum);
    // printf("Sum of odd array element are :%d",sum2);
    
}
