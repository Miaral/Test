#include <stdio.h>
typedef union{
	struct{
		int x	:8;  
		int y	:24;
	}bf;
	unsigned int dw;
} Reg; 
int main(int argc, char* argv[])
{
	Reg reg;
	int a,b;
	reg.bf.x = 2;
	reg.bf.y = 3;
	reg.dw = 0x000001ff;
	a = reg.bf.x + reg.bf.y;
	b = reg.dw;
	printf("%d %d", a,b);
	return 0;
}
