#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

char filename[50];
char contents[200];
int shift;
FILE *fp;

printf("Enter file name: ");
scanf("%s", filename);

printf("Enter shift amount(1-25):");
scanf("%d", &shift);

fp = fopen(filename, "r");

if (fp == NULL){
		printf("Error: file not exist.");
	} else{
		fgets(contents, 200, fp);
		//puts(contents);
	}
fclose(fp);


char ch[strlen(contents)];

for(int i = 0; i < strlen(contents); i++){
     if( contents[i] >= 'A' && contents[i] <= 'Z'){
          ch[i] = ((contents[i] - 'A')+shift)%25 + 'A';
      } else if( contents[i] >= 'a' && contents[i] <= 'z'){
           ch[i] = ((contents[i] - 'a')+shift)%25 + 'a';
}else{
     ch[i]=contents[i];
   }
}
printf("%s\n", ch);



return 0;
}

