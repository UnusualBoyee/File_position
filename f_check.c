// Aurthor : : Unusual Boyee
// Date    : : 2021/05/10
// Concept : : Shows char, ascii value of following char & position of following char.
// Main    : : voperatingsystem@gmail.com
// Country : : Nepal

/* This file is consider as main file to be compiled.
 *
 * Program needs start and end position to run.
 * After getting position it shows concept(as in above) as format of {char : ascii : pos}.*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<err.h>

char *_file;
int from,to;

void small_query(int argv){
	//handling file input err
        if (argv!=2){
                err(1,"\n\t-ERR- ARGS\n");
        }
        else{
                if(access(_file,F_OK)!=0){
                        err(1,"\n\t-ERR- :FNOT:\n");
                }
        }
}
void totaling(){
	if (to < from || to==0){
	// handling input err
		err(3,"\n\t-ERR- POSITION\n");
	}

}

/* ________---------------------_NOTE_---------------------________
 *
 * You have to choose main program first (uncomment) to process ahead.
 * One main program read file from the actual file.
 * Other read file from actual file but keep it in buffer and close the actual file.
 * Depends upon you which process you want to run.
 * For speed you can use time to calculate different between the two main functions. */

//________---------------------_Main function for reading from actual file._---------------------________

/* 
int main(int argv, char *argc[]){
	char *main_file_buffer;

	_file=argc[1];
	// checking if file is given or is accessible 
	small_query(argv);

	FILE *mfile=fopen(_file,"r");

	printf("START _POS: ");scanf("%d",&from);
	printf("END   _POS: ");scanf("%d",&to);
	printf("\n");
	int total=to-from,ch;
	fseek(mfile,from-1,SEEK_SET);
	totaling();
	while((ch=(fgetc(mfile)))!=EOF){
		if (ftell(mfile)>to) break;
		printf("%c : %d : %ld\n",ch,ch,ftell(mfile));
	}
	printf("\n");
	fseek(mfile,from-1,SEEK_SET);
	while((ch=(fgetc(mfile)))!=EOF){
		if (ftell(mfile)>to) break;
		printf("%c",ch);
	}
	printf("\n");
	fclose(mfile);
}
*/

// ________---------------------_Main function for reading from buffer._---------------------________

/*
int main(int argv,char *argc[]){
	char *main_file_buffer;
	int size;
	FILE *main_file;

	_file=argc[1];
	
	small_query(argv);

	main_file=fopen(_file,"r");
	fseek(main_file,0L,SEEK_END);
        size=ftell(main_file);
        rewind(main_file);
        main_file_buffer=malloc(size+1);
        fread(main_file_buffer,1,size,main_file);
        fclose(main_file);

	printf("START: ");scanf("%d",&from);
	printf("END  : ");scanf("%d",&to);
	printf("\n");

	totaling();

	for(int i=from;i<=to;i++) printf("%c : %d : %d\n",main_file_buffer[i],main_file_buffer[i],i);
	printf("\n");
	while(from<=to){
		printf("%c",main_file_buffer[from]);
		from++;
	}
}
*/
