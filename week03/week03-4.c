///�Y�����
///��8����6
///��9����7
///��15����13
///step01: ���L�X�l�� step02�թҦ����Ʀr
#include <stdio.h>
int main()
{
   for( int n=1; n<2000; n++ ) { ///�|�իܦh�Ʀr
       if( n%8==6 && n&9==7 && n%15==13 ){
            printf("\n�{�b���Ʀr�O:%d\n", n);
            printf("��8���l%d\n" , n%8 );
            printf("��9���l%d\n" , n%9 );
            printf("��15���l%d\n" , n%15 );
       }
   }
}

