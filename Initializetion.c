#include "headers.h"
#include "declaretions.h"

void Initializetion(void);

void* Decomression_Statistics(void* );
void* Decompress_File(void* );
void* Compress_File(void* );
void* Compression_Statistics(void* );
void* Exti_Func(void* );
void* Disp_Main_Menu(void* );
void* Open_File(void* );
void* Create_Master_Array(void* );
void* return_new_charector_only(void *);
void* find_code_lenght(void *);

void* Compress_File_2(void* );
void* Compress_File_3(void* );
void* Compress_File_4(void* );
void* Compress_File_5(void* );
void* Compress_File_6(void* );
void* Compress_File_7(void* );
void* dCompress_File_2(void* );
void* dCompress_File_3(void* );
void* dCompress_File_4(void* );
void* dCompress_File_5(void* );
void* dCompress_File_6(void* );
void* dCompress_File_7(void* );

void* get_index(void* );

void* (*fptr[NOF])(void *);

void Initializetion(void)
{
    printf("Begin:%s\n",__func__);

    fptr[0] = Exti_Func;
    fptr[1] = Compress_File;
    fptr[2] = Decompress_File;
    fptr[3] = Compression_Statistics;
    fptr[4] = Decomression_Statistics;
    fptr[5] = Disp_Main_Menu;
    fptr[6] = Open_File;
    fptr[7] = Create_Master_Array;
    fptr[8] = return_new_charector_only;
    fptr[9] = find_code_lenght;
    fptr[10] = Compress_File_2;
    fptr[11] = Compress_File_3;
    fptr[12] = Compress_File_4;
    fptr[13] = Compress_File_5;
    fptr[14] = Compress_File_6;
    fptr[15] = Compress_File_7;
    fptr[16] = get_index;
    fptr[17] = dCompress_File_2;
    fptr[18] = dCompress_File_3;
    fptr[19] = dCompress_File_4;
    fptr[20] = dCompress_File_5;
    fptr[21] = dCompress_File_6;
    fptr[22] = dCompress_File_7;


/*  Dec_Stat = Decomression_Statistics;
    Dec_File = Decompress_File;
    Comp_File = Compress_File;
    Comp_Stat = Compression_Statistics;
    Ext_Fun = Exti_Func;
    Disp_Mn_Mu = Disp_Main_Menu;
    Opn_Fl = Open_File;
    Cre_Mstr_Ary = Create_Master_Array;
*/

    printf("End:%s\n",__func__);
}


