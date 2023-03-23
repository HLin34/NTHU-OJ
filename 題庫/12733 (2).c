#include<stdio.h>
#include<string.h>
#define LL long long int
#define up 1000000007

int main () {
    int t, x ;
    scanf("%d" , &t) ;
    while( t -- ){
        char s[1000001] ;
        LL s_len , t_len , temp_len ;
        scanf("%d" , &x) ;
        scanf("%s", s );
        s_len = strlen(s) ;
        t_len = strlen(s) ;
        for(int i = 0 ; i < x ; i ++){
            int left = s[ i ] - '0' ;
            char temp[1000001];
            t_len = ((i +1) %up + ((left * (t_len - (i + 1)))%up));
            if (s_len <= x){
                strcpy( temp , s + i + 1) ;
                temp_len = strlen(temp);
                for (int j = 1 ; j <= left - 1&& s_len <= x ; j ++){
                    strcat( s , temp ) ;
                    s_len += temp_len ;
                }
            }
        }
        printf("%d\n" , t_len ) ;
    }

    return 0;
}
