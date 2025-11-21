/*AIM: To find the required element in Binary Search*/
PROGRAM:
#include <stdio.h>
int main()
{
    int i, n, low, high, mid, a[10], key;
    //user to enter the number of elements in the array
    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    // user to enter the elements in sorted order
    printf("Enter the elements in sorted order:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    printf("Enter the element to be searched:\n");
    scanf("%d", &key);
    
    low = 0; //lower bound of the search range
    high = n - 1;// upper bound of the search range
    
    while (low <= high)
    {
        mid = (low + high) / 2;
        
        if (key == a[mid])
        {
            printf("Successful search: element found at position %d\n", mid + 1);
            return 0;
        }
        else if (key < a[mid])
        {
            high = mid - 1;
        }
        else
        {
        low = mid + 1;
        }
    }
    printf("Element not found\n");
    return 0;

}
