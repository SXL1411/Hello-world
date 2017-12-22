#include <stdio.h>
int main() {
	int n;
	int a[2333];
	int b[2333];
	scanf("%d",&n);
	for(int i = 1 ; i <= n ; ++i) scanf("%d",&a[i]);
	b[1] = a[1];
	printf("%d\n",b[1]);
	if(n==1) return 0;
	for(int i = 2 ; i <= n ; ++i) {
		int j;
		for(j = 0 ; j <= i-1 ; ++j) {
			if(a[i] <= b[j]) {
				for(int k = i-1 ; k >= j ; --k)
					b[k+1] = b[k];
			    b[j] = a[i];
			    break;
			}
		}
		if(j>i-1) b[i] = a[i];
		for(int j = 1 ; j < i ; ++j) printf("%d ",b[j]);
		printf("%d\n",b[i]);
	}
}
