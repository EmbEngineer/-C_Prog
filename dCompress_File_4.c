#include "headers.h"
#include "declaretions.h"

void* dCompress_File_4(void* arg)
{
     int c_fd, ret, w_fd, file_lenght;
     char ch,c_ch,d_ch;
     char *ma;
     int index;
     printf("Begin:%s\n",__func__);
     ma = (char *)arg;
     printf("Enter the File Name of Compressed(Encrypted) file for demcryption\n");
     c_fd = *(int *)(*fptr[6])((void *)"Reading");

     printf("Enter the File Name of dencrypted file\n");
     w_fd = *(int *)(*fptr[6])((void *)"Writing");

     file_lenght = lseek( c_fd, 0 , SEEK_END) -1;
     lseek(c_fd , 0 , SEEK_SET);

     while( file_lenght >= 0)
     {
           ret = read(c_fd , &ch , 1);
           if( ret == -1 )
           {
                   perror("read");
                   (*fptr[0])((void *)"Failure");
           }
           if(  /*( ch   == '\n') ||*/ (ch == EOF) )
                break;

	   c_ch = ch;
	   index = (int)c_ch;
           d_ch = *(ma+index);
           printf(" ch : %c and index %d\n", d_ch , index);

	   ret = write(w_fd, &d_ch, 1);    
           if( ret == -1 )
           {
                perror("write");
                (*fptr[0])((void*)"Failure");
           }
           --file_lenght; 
     }	   

     close(c_fd);
     close(w_fd);
     printf("End:%s\n",__func__);
   return 0;
} 
