#include <stdio.h>

int main(){
float vet[5], a, b;
int i, h;

for(i = 0; i < 5; i++){
scanf("%f", &vet[i]);
}
for(i = 5; i > 0; i--){
for(h = 0; h < 5; h++){
if(vet[h] > vet[h+1]){
a = vet[h];
vet[h] = vet[h + 1];
vet[h + 1] = a;
}
}
}
b = vet[2] + vet[3] + vet[4];
printf("%f", b);
}