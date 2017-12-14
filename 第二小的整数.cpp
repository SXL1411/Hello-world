#include <stdio.h>
#include <math.h>
int t,n,a[103],b[103],tt;
void sort_() {
	for(int i = 1 ; i <= n-1 ; ++i) {
		int max = 1;
		for(int j = 2 ; j <= n-i+1 ; ++j)
			if(a[j]>a[max]) max = j;
		int tmp = a[n-i+1];
		a[n-i+1] = a[max];
		a[max] = tmp;
	}
}
int main() {
	scanf("%d",&t);
	for(int i = 1 ; i <= t ; ++i) {
		tt = 0;
		scanf("%d",&n);
		for(int j = 1 ; j <= n ; ++j) scanf("%d",&a[j]);
		sort_();
		b[++tt] = a[1];
		for(int j = 2 ; j <= n ; ++j)
			if(a[j]!=a[j-1]) b[++tt] = a[j];
		if(tt<2) printf("ERROR\n");
		else printf("%d\n",b[2]);
	}
}

