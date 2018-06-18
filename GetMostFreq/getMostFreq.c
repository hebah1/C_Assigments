#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	FILE *fp;
	int count[26] = {0};
	
	for(int i = 0; i < argc; i++){
	fp = fopen(argv[i], "r");
}
	if (fp == NULL){
		printf("Error: file not exist.");
	}

	char text[250];
	fgets(text, 250, fp);

for(int i = 0; text[i]; i++){
  text[i] = tolower(text[i]);
}


		int c =0;
		while(text[c] != '\0'){
			if(text[c] >= 'a' && text[c] <= 'z')
				count[text[c]-'a']++;
			c++;

		}
		int max = 1;
		char maxCh;
		int index = 0;
		 for( c =0; c <26; c++){
      		if( count[c]!=0){
      			if( count[c] > max){
	      			max = count[c];
	      			index = c;
      	}
      } 
    }      
    maxCh=index+'a';
    printf("The most frequent letter is '%c', it appeared %d times\n",maxCh,max);
	return 0;
	}

