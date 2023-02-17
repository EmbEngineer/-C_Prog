#include "headers.h"
#include "declaretions.h"

void* Exti_Func(void *status)
{
       printf("Begin:%s\n",__func__);
       
       if((strncmp((char *)status,"Success",7) == 0 ))
           exit(EXIT_SUCCESS);
       else if ((strncmp((char *)status,"Failure",7) == 0))	   
           exit(EXIT_FAILURE);

       printf("End:%s\n",__func__);
   return 0;
}


