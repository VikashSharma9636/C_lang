#include <stdio.h>
 
int main()
{
 
    
    int arr[3] = { 1, 2 };
 
    
    arr[2] = {1};
 
  
    printf("Array[1]: %d\n", arr[0]);
    printf("Array[2]: %d\n", arr[1]);
    printf("Array[3]: %s", arr[2]);
 
    return 0;
}
