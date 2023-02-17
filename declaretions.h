#ifndef NOF 
#define NOF 17
#endif

extern void Initializetion(void);

extern void* Decomression_Statistics(void* );
extern void* Decompress_File(void* );
extern void* Compress_File(void* );
extern void* Compression_Statistics(void* );
extern void* Exti_Func(void* );
extern void* Disp_Main_Menu(void* );
extern void* Open_File(void* );
extern void* Create_Master_Array(void* );
extern void* return_new_charector_only(void *);
extern void* find_code_lenght(void *);

extern void* Compress_File_2(void* );
extern void* Compress_File_3(void* );
extern void* Compress_File_4(void* );
extern void* Compress_File_5(void* );
extern void* Compress_File_6(void* );
extern void* Compress_File_7(void* );
extern void* dCompress_File_2(void* );
extern void* dCompress_File_3(void* );
extern void* dCompress_File_4(void* );
extern void* dCompress_File_5(void* );
extern void* dCompress_File_6(void* );
extern void* dCompress_File_7(void* );

extern void* get_index(void* );

extern void* (*fptr[NOF])(void *);

typedef struct Ds_return_new_Ch
{
        char *ma;
        char ch;
}ds_return_new_ch;

typedef struct DS_unique
{
         int fd;
	 char *ma;
}ds_unique;

/*    
   int (*Dec_Stat)(void);
   int (*Dec_File)(void);
   int (*Comp_File)(void);
   int (*Comp_Stat)(void);
   void (*Disp_Mn_Mu)(void);
   int (*Ext_Fun)(char *);
   int (*Opn_Fl)(void);
   int (*Cre_Mstr_Ary)(int );
*/   

