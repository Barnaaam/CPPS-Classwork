#include <stdio.h>
   
     int findLargest(int list[], int size)
 {
   int largest = list[0];
     for(int i=0;i<size;i++)
     {
        
        if(list[i] > largest)
        largest = list[i];
     }

     return largest;

 }
    
      int main()
{  
   int size;
   printf("Enter number of variables: ");
   scanf("%d",&size); 
   
   int list[size] , largest , i;
   printf("Enter the values: ");
   for(i=0;i<size;i++)
    scanf("%d",&list[i]);

    largest = findLargest(list, size);
    printf("The largest number is %d", largest);
   
   return 0;

 
}

