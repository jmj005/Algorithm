#include <stdio.h>

int main(){
	int n, i, count = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i ++){
		if (i % 10 == 1)
			count += 1;
	}
	printf("%d", count);
}
