#include <stdio.h>
#include "stos1.h"


int inits(int S[])
{
	S[0]=0;
}

int push(int S[], int x){
    if (S[0]<N-1){
       S[++S[0]]=x;
       return 0;
    }
    return 1;
}
    
int pop(int S[]){  
    return (S[0]>0) ? S[S[0]--] : 0;
}

int peek(int S[]){
    return S[S[0]];
}

int empty(int S[]){
    return !S[0];
}

void druks(int S[]){
	int i;
	for (i=S[0]; i>0; i--) printf("%i  ", S[i]);
	printf("\n");
}

