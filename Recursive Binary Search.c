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
    //RECURSIVE BINARY SEARCH
    printf("Search for an item with recursion: ");
    scanf("%d",&x);
    flag = recursiveBinarySearch(B,first,last,x);
    printResult(flag);

    return 0;
}

int recursiveBinarySearch(int A[],int first,int last,int x)
{
    if(first>=last)
        return -1;

    int mid = (first+last)/2;
    if(A[mid] == x)
        return mid;

    if(x>A[mid])
        first = mid+1;
    else
        last=mid-1;
    recursiveBinarySearch(A,first,last,x);
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
