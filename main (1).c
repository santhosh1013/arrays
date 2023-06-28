

#include <stdio.h>
#include<stdlib.h>

struct array
{
    int *a;
    int size;
    int length;
    
};

void insert(struct array *arr,int index,int element)
{
    int cnt;
    
    if(index>=0 && index <=arr->length)
    {
        for(cnt=arr->length;cnt>index;cnt--)
        {
            arr->a[cnt]=arr->a[cnt-1];
        }
        arr->a[index]=element;
        arr->length++;
    }    
    
    
    
    
    
    
    
}

void delete(struct array *arr,int index)
{
    int cnt=0;
    int x;
    x=arr->a[index];
    
    if(index>=0 && index<= arr->length)
    {
        for(cnt=index;cnt<arr->length;cnt++)
        {
            arr->a[cnt]=arr->a[cnt+1];
        
        
        }
        arr->length--;
        
        
    }    
}



void display(struct array arr)
{
    int cnt;
    
    printf("The elements are\n");
    for(cnt=0;cnt<arr.length;cnt++)
    {
        printf("%d ",arr.a[cnt]);
    }
    
}

int main()
{
    struct array arr;
    int n,i,index,element;
    printf("Enter the size of an array\n");
    
    scanf("%d",&arr.size);
    arr.length=0;
    
    arr.a=malloc(arr.size*sizeof(int));
    
    printf("Enter the no of elements you want to enter\n");
    
    scanf("%d",&n);
    
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr.a[i]);
    }
    arr.length=n;
    
    printf("Enter the index and the number you want to insert\n");
    
    scanf("%d %d",&index,&element);
    
    
    
    
    
    insert(&arr,index,element);
    
    display(arr);
    
    printf("\nEnter the index you want to delete\n");
    
    scanf("%d",&index);
    
    delete(&arr,index);
    
    display(arr);
    
    
    
    
    

    return 0;
}


