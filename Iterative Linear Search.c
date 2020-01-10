#include <stdio.h>

int interactiveLinearSearch(int A[], int n, int x);
void display(int A[], int n);

void printResult(int flag);

int main()
{
    int n=10;
    int A[10] = {13,24,11,33,55,35,48,44,3,1};
    int x,flag;
    display(A,n);
    //INTERECTIVE LINEAR SEARCH
    printf("Search for an item with interactive loop: ");
    scanf("%d",&x);
    flag = interactiveLinearSearch(A,n,x);
    printResult(flag);
    return 0;
}
int interactiveLinearSearch(int A[], int n,int x)
{
    int i;
    for (i=0; i<n; i++)
    {
        if(A[i] == x)
        {
            return i;
        }
    }
    return -1;
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

void printResult(int flag)
{
    if(flag != -1)
        printf("Item found at index of %d\n",flag);
    else
        printf("Item not found\n");
}
