#include<stdio.h>
int board[6][6];    //�E�c��
int state[6][6];	//�p�Gboard[i][j]�����A�hstate�אּ-1
int num[30];
int main(){
	int i,j,k;

	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&board[i][j]);
		}
	}

	int t;
	scanf("%d",&t);
	for(int a=1;a<=t;a++){

		for(i=0;i<5;i++){	//�C���P�_�s���@�ռƦr�e���n�����mstate
			for(j=0;j<5;j++){
				state[i][j]=0;
			}
		}

		int n,find=0;	//find�N�����s�u
		scanf("%d",&n);
		for(i=1;i<=n;i++){
			scanf("%d",&num[i]);
		}
		if(n<5){	//�p��5���i��|�s���u�A�������L
			printf("Case #%d: Not yet \\(^o^)/\n",a);
			continue;
		}

		for(k=1;k<=n;k++){	//�}�l��Ʀr

			for(i=0;i<5;i++){	//���ӼƦr�ñN�Ӧ�m��state�]��-1
				for(j=0;j<5;j++){
					if(board[i][j]==num[k]){
						state[i][j]=-1;
					}
				}
			}

			for(i=0;i<5;i++){	//horizontal
				for(j=0;j<5;j++){
					if(state[i][j]!=-1){
						break;
					}
				}
				if(j==5){
					find=1;
					break;
				}
			}
			for(i=0;i<5;i++){	//vertical
				for(j=0;j<5;j++){
					if(state[j][i]!=-1){
						break;
					}
				}
				if(j==5){
					find=1;
					break;
				}
			}
			if(state[0][0]==-1 && state[1][1]==-1 && state[2][2]==-1 && state[3][3]==-1 && state[4][4]==-1){	//�﨤�u
				find=1;
			}
			if(state[0][4]==-1 && state[1][3]==-1 && state[2][2]==-1 && state[3][1]==-1 && state[4][0]==-1){
				find=1;
			}

			/*printf("\n");
			for(i=0;i<5;i++){
				for(j=0;j<5;j++){
					printf("%2d,",state[i][j]);
				}
				printf("\n");
			}
			printf("\n");*/

			if(find){
				printf("Case #%d: %d\n",a,k);
				break;
			}
		}
		if(!find){
			printf("Case #%d: Not yet \\(^o^)/\n",a);
		}
	}
	return 0;
}
