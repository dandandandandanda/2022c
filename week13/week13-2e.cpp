#include <stdio.h>
int main()
{
	int a[20];
	int N=0;
	for(int i=0; i<20; i++){
		scanf("%d", &a[i] );
		if( a[i] == 0 ){
			N = i;
			break;
		}
	}

	int next;
	scanf("%d", &next);

	int ans = 0;
	for(int i=0; i<N; i++){
		if(a[i]==next) ans++;
	}
	printf("%d\n", ans);
}
