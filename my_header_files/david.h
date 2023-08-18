#include <stdio.h>
#include <stdlib.h>

int get_int(char *enter)

{       int integer; 
	printf("%s", enter);
	scanf("%d", &integer);
      return integer;	
}




float get_float(char *enter)

{    float floaty;
     printf("%s", enter);
     scanf("%f", &floaty);
     return floaty;     
}





char *get_string(char *enter)

{
	       char *value;

        	printf("%s", enter);
	        value = (char*)malloc(sizeof(char) * 100);
	       
	       if (value == NULL)
	       {
		       printf("memory allocation not successful");
		       return NULL;
	       }

         	fgets(value,100,stdin);
	return value;

}
