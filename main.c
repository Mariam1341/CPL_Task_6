#include <stdio.h>
#include <stdlib.h>
void read_file(FILE *fptr, char str[])
{
	char c;
	int i = 0;
	while ((c = getc(fptr)) != EOF)
	{
		str[i] = c ;
	    i++;	   
	}
	printf("%s", str);
	
}

void reverse(char str[])
{
    char *begin, *end, temp;
    begin = &str[0];
	end = &str[4];
	char swap;
	while (end != begin)
	{
	  temp = *end;
      *end = *begin;
      *begin = temp;
      
      begin++;
      end--;
	}
	printf("%s", str);
}
	
void write (FILE *fptr, char str[])
{
	int i = 0;
    while (i < 5)
	{
		putc(str[i], fptr);
		i++;
	}
	printf("\nThe reversed string is added to the file successfully ");
}

int main() {
	FILE *fptr;
	char str[10];
	fptr = fopen("Task6 file.txt","r+");
    printf("File opend succesfully\n");
    printf("String input from file:");
    read_file(fptr,str);
    printf("\nReversed string:");
	reverse(str);
    write(fptr,str);
	return 0;
}//   Github repository link  https://github.com/Mariam1341/CPL_Task_6.git
