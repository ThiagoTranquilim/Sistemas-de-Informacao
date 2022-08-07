#include <stdio.h>
#include <stdbool.h>

int main()
{
	int a, b;
	scanf("%d", &a);
	bool primo = true;
	for(b = 2; b< a; b++)
	{
		if(a % b == 0){
			primo = false;
			printf("Nao primo");
			break;
		}
		if(primo == true){
			printf("E primo");
			break;
		}
	}
return 0;
}
