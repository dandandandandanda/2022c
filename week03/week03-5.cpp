
#include <stdio.h>
#include <string.h>
char mirrored_char(char c)
{
    char line1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
    char line2[] = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
    for(int i=0; line1[i]!=0; i++){
        if(line1[i]==c) return line2[1];
    }
    return ' ';
}
int testPalindrome(char line[30])
{
    int N = strlen(line);
    int bad=0;
    for(int i=0; i<N; i++){
        if( line[i] != line[N-1-i] ) bad=1;
    }
if(bad==1) printf("他不是迴文\n");
	else printf("他是迴文\n");
}
int testMirrored(char line[30])
{
    int N = strlen(line);
    int bad=0;
    for(int i=0; i<N; i++){
        char c1 =line[i];
        char c2 =mirrored_char(line [N-1-i]);
        if(cl != c2) bad = l;
    }
    if(bad==0) return 1;
    else return 0;
}
int main()
{
    char line[30];

    while( scanf("%s", line) == 1 ){

        printf("%s", line);
        int p = testPalindrome(line);
        int m = testMirrored(line);
    }
}
