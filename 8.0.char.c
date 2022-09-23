#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (){

	int num, cont;
	char word[100];
	    printf ("Digite uma string: ");
	    fgets (word,100,stdin);

            if(word[strlen(word)-1]=='\n') 
            word[strlen(word)-1]='\0';
	        num=strlen (word);

            printf("\nA string que voce digitou tem tamanho %d\n",num);
            for(cont=0; cont<num; cont++)
            
	        printf ("\n%s\n" ,word);

            system("PAUSE");
            system("CLS");

            word[0]=toupper(word[0]);
            for(cont=1;cont<num;cont++)
            word[cont]=tolower(word[cont]);
            printf("\nA sua string com a primeira letra maiuscula e as demais minusculas\n");
            printf ("\n%s\n" ,word);

    	    system("PAUSE");
            system("CLS");

            printf("\nSua string totalmente maiuscula e minuscula\n");
            printf("\n%s\n", strupr(word));
            printf("\n%s\n", strlwr(word));
    
    	return(0);
} 