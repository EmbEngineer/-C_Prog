#include "headers.h"
#include "declaretions.h"
#include "Macro.h"

void* Open_File(void *arg)
{
       char *status;
       char *file_path;
       char ch;
       int i,*fd;
       char File_name[SIZE_OF_FILE_NAME] = "";

       printf("Begin:%s\n",__func__);
       status = (char *)arg;
       
       fd = (int*)malloc(sizeof(int)); 
       if( fd == NULL )
       {
           perror("malloc");
	   Exti_Func("Failure");
       }
       memset(fd ,'\0' ,sizeof(int));

       file_path = (char*)malloc(sizeof(char)* SIZE_OF_FILE_PATH); 
       if( file_path == NULL )
       {
           perror("malloc");
	   Exti_Func("Failure");
       }
       memset( file_path , '\0' , SIZE_OF_FILE_PATH );
    
       printf("Enter the file Name  :");
       scanf("%s",File_name);

/*     i = 0;
       do
       {
           ch = getchar();
	   
	   *(File_name + i)  = ch;
           ++i;
       
	   if(ch == '\n')
             break;		        
       }while(1);  */  

       strcat( file_path  , FILE_PATH );
       strcat( file_path  , File_name );
      
//     fd = open( "/home/aman/Desktop/Work/Emblogic/Mdceit/TestFile"  , "r");
       if(strncmp( status ,"Reading",7) == 0 )
       {	       
          *fd = open( File_name , O_RDONLY);
           if(*fd == -1)
           {
               perror("open");
	       Exti_Func("Failure");
           }	      
           printf("File successfully opened :%s\n", (file_path));  
       }
       else if (strncmp( status ,"Writing",7) == 0)
       {
	   *fd = open( File_name ,  O_WRONLY|O_CREAT);
           printf("File successfully opened :%s\n", (file_path));  
           if(*fd == -1)
           {
              perror("open");
	      Exti_Func("Failure");
           }	      
       }
       else if (strncmp( (void *)status ,"Create",6) == 0)
       {
	   *fd = open( File_name ,  O_WRONLY|O_CREAT);
           if(*fd == -1)
           {
              perror("open");
	      Exti_Func("Failure");
           }	      
           printf("File successfully created :%s\n", (file_path));  
       }
      
       free(file_path);    
      
       printf("End:%s\n",__func__);
     return (void *)fd;
}
