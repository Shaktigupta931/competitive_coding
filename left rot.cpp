
#include<bits/stdc++.h>
using namespace std;
void toh(int n,char s,char a,char d);
int main(int argc, char const *argv[])
{
	toh(3,'s','a','d');
	
	return 0;
}
void toh(int n,char s,char a,char d)
{
	if (n==1)
		printf("movedisk from %c to %c\n",s,d);
	else
		{
			toh(n-1,s,d,a);
			printf("move %d disk from %c to %c \n",n,s,d);
			toh(n-1,a,s,d);
		}

}