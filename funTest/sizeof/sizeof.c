#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"../../logUtils/logUtils.h"

struct struct1
{
	char c;
	char s[32];
	int i;
	double d;
	float f;
	long l;
};

union union1
{
	char c;
	int i;
	double d;
	float f;
	long l;
};

enum enum1{c,i,d,f,l};


void ca_len(char *str)
{
	int len = 0;
	len = sizeof(str);
	DEBUG("len1 = %d",len);

	len = strlen(str);
	DEBUG("len2 = %d",len);
}

int main()
{
	DEBUG("sizeof char=%ld",sizeof(char));

	DEBUG("sizeof int=%ld",sizeof(int));

	DEBUG("sizeof double=%ld",sizeof(double));

	DEBUG("sizeof float=%ld",sizeof(float));

	DEBUG("sizeof long=%ld",sizeof(long));

	DEBUG("sizeof int *=%ld",sizeof(int *));

	DEBUG("sizeof struct=%ld",sizeof(struct struct1));

	DEBUG("sizeof union=%ld",sizeof(union union1));

	DEBUG("sizeof enum=%ld",sizeof(enum enum1));

	DEBUG("\n\nstruct struct1=%ld",sizeof(struct struct1));
	struct struct1 *ptr_struct1 = (struct struct1 *) malloc( sizeof(struct struct1) );
	sprintf(ptr_struct1->s,"%s","12345");
	ca_len(ptr_struct1->s);
	free(ptr_struct1);	

	return 0;

}

