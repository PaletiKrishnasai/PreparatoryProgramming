// using command line arguments
// refernce : Deitel & Deitel
// cp simulation WITHOUT POSIX.
#include<stdio.h>

int main(int argc, char *argv[])
{
	FILE *infileptr; // input file pointer
	FILE *outfileptr; // output file pointer
	int c; // used to hold characters read from source file.

	// cmd line arguments check
	if(argc!=3)
	{
		puts("usage : ./copy source destination");
	}
	else
	{
		if((infileptr = fopen(argv[1],"r"))!=NULL)
		{
			if((outfileptr = fopen(argv[2],"w")!=NULL))
			{
				while((c=fgetc(infileptr))!=EOF)
				{
					fputc(c,outfileptr);
				}
				fclose(outfileptr);
			}
			else 
			{
				printf("File \"%s\" could not be opened\n",argv[2]);
			}
			fclose(infileptr);
		}
		else
		{
			printf("File \"%s\" could not be opened\n",argv[1]);
		}

	}
	/* code */
	return 0;
}