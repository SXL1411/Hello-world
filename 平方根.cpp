#include <stdio.h>
#include <math.h>
int main() {
	int t;
	scanf("%d",&t);
	for(int i = 1 ; i <= t ; ++i) {
		int x;
		scanf("%d",&x);
		if(x<0) printf("ERROR\n");
		else printf("%.2lf\n",sqrt(x));
	}
}

