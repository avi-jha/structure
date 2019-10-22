#include <stdio.h>
#include <stdlib.h>
#include<string.h>
	
// initialize structure to store data	
struct stu{
	char name[30];
	int id;
	int c;
}s;
	
int main(){
		// input data for structure
		printf("enter the name ");
		gets(s.name);
		printf("enter id ");
		scanf("%d",&s.id);
		printf("enter class ");
		scanf("%d",&s.c);
		// printing the structure
		printf("\n name %s",s.name);
		printf("\n id %d",s.id);
		printf("\n class %d",s.c);
		
	return 0;
}
