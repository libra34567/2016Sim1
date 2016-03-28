#include <stdio.h>
//2300.notes.02hellogcc
int main()
{
	printf("addTwoNum");
	int value1, value2, sum;
	scanf("%d %d", &v1, &v2); //%d means integer and not double. For double you can use %lf or %g
	sum = v1+v2;
	printf("%d\n", sum);
	return 0;
	//return;
}
//compile
//gcc -Wall -o exeName .cName
//-Wall ask for longer 

//Itrace: lists the library calls made by a running process when it's running. 
//Strace: list the system calls. 



