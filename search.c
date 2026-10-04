#include<stdio.h>
int main(){
    int high,low,mid,search,n,i,a[100],choice;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    printf("Enter %d integers\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter element to search\n");
    scanf("%d",&search);
    printf("1.linear search\n2.binary search\n");
    printf("3.exit\n");
    printf("Enter your choice\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        for(i=0;i<n;i++){if(a[i]==search){
                printf("%d is present at location %d\n",search,i+1);
                break;
            }
            if(i==n)
                printf("%d isn't present in the array\n",search);
            break;
        case 2:
            low=0;
            high=n-1;
            mid=(low+high)/2;
            while(low<=high){
                if(a[mid]==search){
                    printf("%d is present at location %d\n",search,mid+1);
                    break;
                }
                else if(search>a[mid])
                    low=mid+1;
                else
                    high=mid-1;
            }
            mid=(low+high)/2;
            if(low>high)
                printf("%d isn't present in the array\n",search);
            break;
        case 3:
            
            break;
        default:
            printf("Invalid choice\n");
}}}