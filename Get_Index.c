#include "headers.h"
#include "declaretions.h"

void* get_index(void *arg)
{
     int *index;
     ds_return_new_ch *ds_u;

//   printf("Begin:%s\n",__func__);
     ds_u = (ds_return_new_ch *)arg;

     index = (int *)malloc(sizeof(int) );
     if( index == NULL )
     {
           perror("malloc");
           (*fptr[0])((void *)"Failure");
     }
    
     for( *index =0  ; *index < strlen(ds_u->ma) ; *index = (*index)+1 )
     {
    	  if( *(ds_u->ma+(*index)) == ds_u->ch)
             return (void *)index;
     } 
     *index = -1;
 //  printf("End:%s\n",__func__);
    return (void *)index;
}

