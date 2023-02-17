#include "headers.h"
#include "declaretions.h"

void* Compress_File_4(void* arg)
{
     ds_unique *ds_u;
     char byte;
     unsigned char ch;
     int ret, *index, c_fd, file_lenght;
     ds_return_new_ch ds_r;
     printf("Begin:%s\n",__func__);

     ds_u = (ds_unique *)arg;  
     lseek(ds_u->fd , 0 , SEEK_SET);
     byte ^= byte;
     ds_r.ma = ds_u->ma ;

     printf("Give File Name for Encryption\n"); 
     c_fd = *(int *)(*fptr[6])((void *)"Create");

     file_lenght = lseek( ds_u->fd, 0 , SEEK_END) -1;
     lseek(ds_u->fd , 0 , SEEK_SET);

     while( file_lenght > 0)
     {
	     ret = read(ds_u->fd , &ds_r.ch , 1);
             if( ret == -1 )
             {
                   perror("read");
                   (*fptr[0])((void *)"Failure");
             
	     }
             if( /* (ds_r.ch   == '\n') ||*/ (ds_r.ch == EOF) )
                break;
             
             index = (int *)(*fptr[16])((void *)&ds_r);
             ch = (char )*index;
	     printf("ch : %c and index %d\n",ds_r.ch , ch);
	     free(index);
	     ch = ch << 4;
	     ch = ch >> 4;
             byte = ch;
 
 	     ret = write(c_fd , &byte , sizeof(byte));
 	     if( ret == -1 )
             {
                perror("write");
                Exti_Func("Failure");
             }
             --file_lenght;
     }
     close(c_fd);
     printf("End:%s\n",__func__);
   return 0;
} 
