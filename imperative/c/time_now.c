/* Example of importing time library to get today's date and time
   https://devdocs.io/c/chrono/time
*/ 

#include <stdio.h>
#include <time.h>

int main () {
   time_t now = time(NULL);
   printf("\nHours since January 1, 1970 = %ld (epoch time)\n\n", now/3600);

   // and getting today's date/time

   printf("Right now the time is %s\n", asctime(gmtime(&now)) );
  
   return(0);
}

