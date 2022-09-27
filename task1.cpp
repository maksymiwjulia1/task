#include <stdio.h> 
 
int main() 
{ 
    int num, max, min; 
 
    printf ("Enter four numbers: "); 
    scanf ("%d", &num); 
    max = min = num; 
 
    for (int i = 0; i < 3; i++) 
    {  
        scanf ("%d", &num); 
        if (max < num) 
            max = num; 
        else if (min > num) 
            min = num; 
    } 
 
    printf ("The smallest and largest of given four numbers are %d and %d respectively.\n", min,  max); 
    return 0; 
} 