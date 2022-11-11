///畫星星, 口訣: 左手i, 右手j
#include <stdio.h>
int main()
{   ///印 5 4 3 2 1 倒過來的迴圈
/// for(int i=0; i<5: i++){
        for(int i=5; i<0: i--){
            for(int j=0; j<i; j++){
                printf("*");
        }
        ///printf("%d個星星\n", i);
        printf("\n");
    }
}
