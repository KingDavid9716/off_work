#include "kingdavid.h"
#include <stdio.h>
int main()
{
	char *value2 = get_string("Enter Strings: ");
	       
	       printf("The Entered string is: %s\n", value2);

	       free(value2);


	return 0;
}
