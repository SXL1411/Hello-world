#include<stdio.h>
int main(){
	int m=1;
	int n;
	int x=0;
	int f=0;
	scanf("%d",&n);
	for(;m<=n;x=x+m,f=f+x,m=m+1);
	printf("%d",f);
	return 0;
}
