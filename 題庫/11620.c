#include<stdio.h>
int board[6][6];    //九宮格
int state[6][6];	//如果board[i][j]有選到，則state改為-1
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

		for(i=0;i<5;i++){	//每次判斷新的一組數字前都要先重置state
			for(j=0;j<5;j++){
				state[i][j]=0;
			}
		}

		int n,find=0;	//find代表有找到連線
		scanf("%d",&n);
		for(i=1;i<=n;i++){
			scanf("%d",&num[i]);
		}
		if(n<5){	//小於5不可能會連成線，直接跳過
			printf("Case #%d: Not yet \\(^o^)/\n",a);
			continue;
		}

		for(k=1;k<=n;k++){	//開始圈數字

			for(i=0;i<5;i++){	//找到該數字並將該位置的state設為-1
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
			if(state[0][0]==-1 && state[1][1]==-1 && state[2][2]==-1 && state[3][3]==-1 && state[4][4]==-1){	//對角線
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
