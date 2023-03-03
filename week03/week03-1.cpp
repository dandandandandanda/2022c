//如果遇到超乎想像的狀況，請更改編譯器試看看!! 各編譯器特性不同!!
//預設測資、隨機測資、固定測資是用來幫助除錯用的。批改時，只看暗中測資是否通過!!
#include <stdio.h>

int main()
{
	char line[30];

	while( scanf("%s", line) == 1 ){
		printf("%s", line);

		printf(" -- is not a palindrome.\n\n");
	}
}
