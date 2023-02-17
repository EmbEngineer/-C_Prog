#include "headers.h"
#include "declaretions.h"

void* Decompress_File(void* arg)
{
      int fd_key, fd_df, file_lenght,ret,cd;
      char *ma;
	      
      
      printf("Begin:%s\n",__func__);
      getchar();
     
      printf("Enter the Decompression key\n");
      fd_key = *(int *)(*fptr[6])((void *)"Reading");
      
      file_lenght = lseek(fd_key , 0 , SEEK_END);  
      lseek(fd_key , 0 , SEEK_SET);  
  
      ma = (char *)malloc(file_lenght);
      if(ma == NULL)
      {
	  perror("malloc");
          (*fptr[0])((void*)"Failure");
      }	      
 
      ret = read(fd_key , ma , file_lenght );
      if( ret == -1 )
      {
          perror("read");
          (*fptr[0])((void*)"Failure");
      }

      printf("Master Arrey:%s\n", ma );
 
      cd = *((int *)(*fptr[9])((void*)ma));
      printf("Code Lenght:%d\n",cd);
      
      if(cd >= 2 && cd <=7)
         fptr[15+cd]((void *)ma);

      close(fd_key);
      printf("End:%s\n",__func__);

   return arg;
} 
