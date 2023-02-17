#include "headers.h"
#include "declaretions.h"

void* find_code_lenght(void *arg)
{
     int *code_lenght;
     char *ch_ptr;

     printf("Begin:%s\n",__func__);

     ch_ptr = (char *)arg;

    code_lenght = (int *)malloc(sizeof(int) );
    if( code_lenght == NULL )
    {
           perror("malloc");
           (*fptr[0])((void *)"Failure");
    }
    *code_lenght = strlen(ch_ptr);

     if(*code_lenght < 4)
	     *code_lenght = 2;
     else if(*code_lenght < 8)
	     *code_lenght = 3;
     else if(*code_lenght < 12)
	     *code_lenght = 4;
     else if(*code_lenght < 16)
	     *code_lenght = 4;
     else if(*code_lenght < 32)
	     *code_lenght = 5;
     else if(*code_lenght < 64)
	     *code_lenght = 6;
     else if(*code_lenght < 128)
	     *code_lenght = 7;

     printf("End:%s\n",__func__);
     return (void *)code_lenght;
}

