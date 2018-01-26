#include <stdio.h>

int main(void) {
	int no,count,rem;
	scanf("%d",&no);
	while(no!=0)
	{
		rem=no%10;
		count++;
		no=no/10;
	}
	printf("%d",count);
	return 0;
}
