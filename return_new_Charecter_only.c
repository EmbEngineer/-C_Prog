#include "headers.h"
#include "declaretions.h"
#include "Macro.h"

void* return_new_charector_only(void *arg)
{
      int i, *flag;
      ds_return_new_ch *typcst_arg; 
 //     printf("Begin:%s\n",__func__);
  
      typcst_arg = (ds_return_new_ch *)arg;

      flag = (int *)malloc(sizeof(int));
      if( flag == NULL )
      {
           perror("malloc");
           (*fptr[0])((void *)"Failure");
      }
      *flag =1;
      i =0;
      
      while(*(typcst_arg->ma+i) != '\0')
      {
         if(*(typcst_arg->ma+i) == typcst_arg->ch )
	 {
		 *flag = 0;
                 return (void  *)flag;
	 }
         ++i;
      }

//      printf("End:%s\n",__func__);
   return (void  *)flag;
}

