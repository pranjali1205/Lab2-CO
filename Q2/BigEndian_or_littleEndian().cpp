#include <bits/stdc++.h>
using namespace std;

void print_mem(char *num, int n)
{
   for (int i = 0; i < n; i++)
		printf("%4x",num[i]);
	printf("\n");
}

int main(){
int i = 0x12345678;
print_mem((char *)&i, sizeof(i));
}
// from the output on my pc I can say that my macine is little Endian