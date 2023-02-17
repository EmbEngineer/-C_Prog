#include "headers.h"
#include "declaretions.h"
#include "Macro.h"

void* Create_Master_Array(void *arg)
{
       char *ch_ptr ,ch ;
       int ret, *file_fd,i;
       ds_return_new_ch ds_ma_cntrl;
       ds_unique *dus;

       printf("Begin:%s\n",__func__);
     
       dus = (ds_unique *)arg;
       printf("fd for Master array %d\n",dus->fd);

       ds_ma_cntrl.ma = (char *)malloc( MAX_SIZE );
       if( ds_ma_cntrl.ma == NULL )
       {
           perror("malloc");
           (*fptr[0])((void *)"Failure");
       }
       memset( ds_ma_cntrl.ma ,'\0' , MAX_SIZE );

       i=0;
       while(1)
       {
             ret = read(dus->fd , &ds_ma_cntrl.ch , 1);
             if( ret == -1 )
             {
                   perror("read");
                   (*fptr[0])((void *)"Failure");
             }
             if(ds_ma_cntrl.ch == '\n')
                 break;
	   
             if(*((int *)(*fptr[8])((void *)&ds_ma_cntrl)))
  	     {             
	        *(ds_ma_cntrl.ma+i) = ds_ma_cntrl.ch;
	        ++i;
             }
       }
       printf("End:%s\n",__func__);
   return (void *)ds_ma_cntrl.ma;
}

