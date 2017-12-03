#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include "Equality.h"

int main(void)
{
 int err=0,countOfElements=0;
 int *array,*resultArray;
 int answer, i;
 err=InputArray("data.txt", &array, &countOfElements);
 if(err!=0)
  printf("Error!!!\n");
 else
  {
	if (countOfElements==0){
		printf("File is empty!!!");
	} else {
		
		resultArray=searchArray(array,countOfElements);
		printf("Answer array is:\n");
		for (i=0;i<countOfElements;i++)
		{
			printf("%i ",resultArray[i]);
		}
		printf("\n");
	}
  }
return err;
}
