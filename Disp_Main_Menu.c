#include "headers.h"
#include "declaretions.h"

void* Disp_Main_Menu(void *arg)
{
     int choise;
     printf("Begin: %s\n",__func__);
     
     printf("********** Main Menu **********\n");
     printf("\n");
     printf("1: Compress File              2: Decompress File                     3: Compression Statistics\n");
     printf("4: Decomression Statistics    0: Exit Program\n");    
     printf("\n");     
     printf("*************** End ***********\n");

     printf("Enter the choise \n");
     scanf("%d",&choise);

     if(choise == 0)
        (*fptr[choise])((void*)"Success");
     else if(choise >= 1 && choise<= 4)              
        (*fptr[choise])(NULL);
     else
        printf(" Invalide Options , please chose correct option \n");

     printf("End: %s\n",__func__);
}

