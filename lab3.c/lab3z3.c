#include <stdio.h>      
#include <stdlib.h>    
#define TABLE_SIZE 10 

char* names[TABLE_SIZE]= {"Jan", "Piotr", "Michal", "Pawel", "Jakub", "Stefan", "Robert",
"Mariusz", "Tadeusz", "Konrad"};
int times[TABLE_SIZE] ={ 56, 60, 51, 44, 66, 50, 49, 62, 43, 70 }; 

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main ( int argc, char** argv)
{
  int i;
  qsort (times, 6, sizeof(int), compare);
  for (i=0; i<6; i++){
     printf ("%d ",times[i]);
    
  }
  return 0;
}

