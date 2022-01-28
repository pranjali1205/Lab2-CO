#include <bits/stdc++.h>
using namespace std;

void print_mem(char *num, int n,string s)
{
    cout<<s<<endl;
	for (int i = 0; i < n; i++)
		printf("%4x",num[i]);
	printf("\n");
}
int swap(int n){
    int leftmost = (n & 0x000000ff);
    int leftmiddle = (n & 0x0000ff00)>>8;
    int rightmiddle = (n & 0x00ff0000)>>16;
    int rightmost = (n & 0xff000000)>>24;
    int result = ((leftmost<<24)|(leftmiddle<<16)|(rightmiddle<<8)|(rightmost<<0));
    return result;
}
int main()
{
int i = 0x12345678;
printf("num = 0x%x\n",i);
print_mem((char *)&i, sizeof(i), "Little Endian:");
//converting
int ri = swap(i);
print_mem((char*)&ri, sizeof(i), "Big Endian:");
return 0;
}



