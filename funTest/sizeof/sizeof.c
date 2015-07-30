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


void ca_point(char *str)
{
	int len = 0;
	len = sizeof(str);
	DEBUG("sizeof str = %d",len);

	len = strlen(str);
	DEBUG("strlen str = %d",len);
}

void ca_arrary(char a[])
{
	DEBUG("ca_arrary a = %s",a);

	int len = 0;
	len = sizeof(a);
	DEBUG("sizeof a = %d",len);

	
	len = strlen(a);
	DEBUG("strlen a = %d",len);
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

	
	//C/C++中不能传数组,只能传指针,所以任何数组都会隐式转成指针形式进行操作,所以"类型"还是指针
	DEBUG("sizeof struct struct1=%ld",sizeof(struct struct1));
	struct struct1 *ptr_struct1 = (struct struct1 *) malloc( sizeof(struct struct1) );
	sprintf(ptr_struct1->s,"%s","12345");
	ca_point(ptr_struct1->s);
	free(ptr_struct1);	

	char a[10] = "12345";
	DEBUG("a = %s",a);
	DEBUG("sizeof char[10]=%ld",sizeof(a));
	ca_arrary(a);
	
	return 0;

}

