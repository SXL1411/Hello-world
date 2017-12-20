#include <stdio.h>
#include <string.h>
char a[32];
char b[32];
int main() {
    while(scanf("%s",a)!=EOF) {
        int len = strlen(a);
	if(a[0] =='E' && a[1]=='n' && a[2]=='d') break;
        int flag = 1;
        int cnt = 0;
        for(int i = 0 ; i < len ; ++i) {
            if(a[i]=='.') {
                cnt++;
                if(i>0 && a[i-1]=='.') {
                    flag = 0;
                    break;
                }
            } else {
                if(a[i]>'9' || a[i]<'0') {
                    flag = 0;
                    break;
                }
            }
        }
        if(!flag) {
            printf("NO\n");
            continue;
        }
        if(a[0]=='.' || a[len-1]=='.') {
            printf("NO\n");
            continue;
        }
        if(cnt!=3) {
            printf("NO\n");
            continue;
        }
        for(int i = 0 ; i < len ; ++i) {
            if(a[i]=='.')continue;
            int t = 0;
            b[t] = a[i];
            while(a[i+1]!='.' && i+1<len) b[++t] = a[++i];        
            int tmp = 0;
            for(int j = 0 ; j <= t ; ++j) {
                tmp *= 10;
                tmp += b[j]-'0';
            }
            if(t>2) flag = 0;
            if(t==1 && tmp<10) flag = 0;
            if(t==2 && tmp<100) flag = 0;
            if(t==2 && tmp>255) flag = 0;
            if(!flag) break;
        }
        if(flag) printf("YES\n");
        else printf("NO\n");
    }
}
