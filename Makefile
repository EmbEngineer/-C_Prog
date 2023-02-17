#! /bin/bash

mdceit: main.o Compress_File.o Compression_Statistics.o Decompress_File.o Decomression_Statistics.o Exit_Func.o Initializetion.o Disp_Main_Menu.o Open_File.o Create_Master_Array.o return_new_Charecter_only.o Find_Code_Lenght.o Compress_File_2.o Compress_File_3.o Compress_File_4.o Compress_File_5.o Compress_File_6.o Compress_File_7.o Get_Index.o dCompress_File_2.o dCompress_File_3.o dCompress_File_4.o dCompress_File_5.o dCompress_File_6.o dCompress_File_7.o
	gcc -o mdceit main.o Compress_File.o Compression_Statistics.o Decompress_File.o Decomression_Statistics.o Exit_Func.o Initializetion.o Disp_Main_Menu.o Open_File.o Create_Master_Array.o return_new_Charecter_only.o Find_Code_Lenght.o Compress_File_2.c Compress_File_3.c Compress_File_4.o Compress_File_5.o Compress_File_6.o Compress_File_7.o Get_Index.o dCompress_File_2.c dCompress_File_3.c dCompress_File_4.o dCompress_File_5.o dCompress_File_6.o dCompress_File_7.o
      
dCompress_File_7.o: dCompress_File_7.c declaretions.h headers.h Macro.h
	gcc -c dCompress_File_7.c
dCompress_File_6.o: dCompress_File_6.c declaretions.h headers.h Macro.h
	gcc -c dCompress_File_6.c
dCompress_File_5.o: dCompress_File_5.c declaretions.h headers.h Macro.h
	gcc -c dCompress_File_5.c
dCompress_File_4.o: dCompress_File_4.c declaretions.h headers.h Macro.h
	gcc -c dCompress_File_4.c
dCompress_File_3.o: dCompress_File_3.c declaretions.h headers.h Macro.h
	gcc -c dCompress_File_3.c
dCompress_File_2.o: dCompress_File_2.c declaretions.h headers.h Macro.h
	gcc -c dCompress_File_2.c
Get_Index.o: Get_Index.c declaretions.h headers.h Macro.h 
	gcc -c Get_Index.c
Compress_File_7.o: Compress_File_7.c declaretions.h headers.h Macro.h 
	gcc -c Compress_File_7.c
Compress_File_6.o: Compress_File_6.c declaretions.h headers.h Macro.h 
	gcc -c Compress_File_6.c
Compress_File_5.o: Compress_File_5.c declaretions.h headers.h Macro.h 
	gcc -c Compress_File_5.c
Compress_File_4.o: Compress_File_4.c declaretions.h headers.h Macro.h 
	gcc -c Compress_File_4.c
Compress_File_3.o: Compress_File_3.c declaretions.h headers.h Macro.h 
	gcc -c Compress_File_3.c
Compress_File_2.o: Compress_File_2.c declaretions.h headers.h Macro.h 
	gcc -c Compress_File_2.c
Find_Code_Lenght.o: Find_Code_Lenght.c declaretions.h headers.h Macro.h 
	gcc -c Find_Code_Lenght.c
return_new_Charecter_only.o: return_new_Charecter_only.c declaretions.h headers.h Macro.h 
	gcc -c return_new_Charecter_only.c
Create_Master_Array.o: Create_Master_Array.c declaretions.h headers.h Macro.h 
	gcc -c Create_Master_Array.c 
Open_File.o: Open_File.c declaretions.h headers.h Macro.h 
	gcc -c Open_File.c 
Disp_Main_Menu.o: Disp_Main_Menu.c declaretions.h headers.h
	 gcc -c Disp_Main_Menu.c
Initializetion.o: Initializetion.c declaretions.h headers.h
	gcc -c Initializetion.c
Exit_Func.o: Exit_Func.c declaretions.h headers.h
	gcc -c Exit_Func.c
Decomression_Statistics.o: Decomression_Statistics.c declaretions.h headers.h
	gcc -c Decomression_Statistics.c
Decompress_File.o: Decompress_File.c declaretions.h headers.h
	gcc -c Decompress_File.c
Compression_Statistics.o: Compression_Statistics.c declaretions.h headers.h
	gcc -c Compression_Statistics.c
Compress_File.o: Compress_File.c declaretions.h headers.h
	gcc -c Compress_File.c
main.o: main.c declaretions.h headers.h
	gcc -c main.c

clean:
	rm *.o
	rm mdceit
