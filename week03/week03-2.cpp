
//�p�G�J��W�G�Q�������p�A�Ч��sĶ���լݬ�!! �U�sĶ���S�ʤ��P!!
//�w�]����B�H������B�T�w����O�Ψ����U�����Ϊ��C���ɡA�u�ݷt������O�_�q�L!!
#include <stdio.h>

int main()
{
	char line[30];

	scanf("%s", line);

	int N = strlen(line);
	int bad=0;
	for(int i=0; i<N; i++){
        if( line[i] !=line[N-1-i] ) bad=1;
	}
	if(bad==1) printf("�L���O�j��\n");
	else printf("�L�O�j��\n");
}
