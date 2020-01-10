#include <stdio.h>
int main()
{
    int A[10] = {13,24,11,33,55,35,48,44,3,1};
    int first,last,n=10,x,flag;
    first = 0;
    last = n-1;
    int i,j,B[n];
    display(A,n);

    for(i=0; i<n; i++)
    {
        j=i-1;
        while(B[j]>A[i] && j>=0)
        {
            B[j+1]=B[j];
            j--;
        }
        B[j+1]=A[i];
    }
    display(B,n);
    printf("Search for an item with interactive loop: ");
    scanf("%d",&x);
    flag = interactiveBinarySearch(B,first,last,x);
    printResult(flag);
    return 0;
}
int interactiveBinarySearch(int A[],int first,int last,int x)
{
    while(first<=last)
    {
        int mid = (first+last)/2;
        if(A[mid] == x)
            return mid;

        if(x>A[mid])
            first = mid+1;
        else
            last=mid-1;
    }
    return -1;
}
void printResult(int flag)
{
    if(flag != -1)
        printf("Item found at index of %d\n",flag);
    else
        printf("Item not found\n");
}
void display(int A[],int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d\t",A[i]);
    }
    printf("\n");
}
