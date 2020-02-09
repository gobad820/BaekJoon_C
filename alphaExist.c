#include <stdio.h>

int main(){
    
    char alphaArr[101] = {'0'};
    scanf("%s",alphaArr);
    int alpha[26] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    for(int i = 0 ; i < 101 ;i++){
        for(int j = 'a' ; j <= 'z' ; j++ ){
            if(alphaArr[i] == j){
                if(alpha[j-'a'] != -1)
                    continue;
                alpha[j-'a'] = i;
            }
        }
    }
    for(int a = 0 ; a < 26 ; a++)
        printf("%d ", alpha[a]);
    //printf("123");
}