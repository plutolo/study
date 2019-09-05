#include <stdio.h>
/* 验证表达式getchar() != EOF 的值是0还是1  */

main()
{
	
	int c;
	c = getchar() != EOF;

	if(c == 0){
		printf("%d",0);
	} else {
		printf("%d",1);
	}
}
