#include <stdio.h>

int main(){
char dna[50], rna[50];
int i;

gets(dna);

for(i = 0; i < 50; i++){
if(dna[i] == 'A'){
rna[i] = 'T';
}else
if(dna[i] == 'T'){
rna[i] = 'A';
}else
if(dna[i] == 'G'){
rna[i] = 'C';
}else
if(dna[i] == 'C'){
rna[i] = 'G';
}
}
printf("\n DNA - %s\n", dna);
printf(" RNA - %s\n", rna);
}