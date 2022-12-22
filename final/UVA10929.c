#include <stdio.h>
#include <string.h>


int main(){
    char num[1001];

    while (scanf("%s", num)!=EOF){
        long int len = strlen(num); // 讀出字串長度

        if(len == 1 && num[0] == '0'){ // 判斷是否只有一個位數並且輸入的該數不能為零 
            break;
        }

        int odd = 0, even = 0;
        for(int i = 0 ; i < len ; i++){ // 分別做奇偶數位的相加
            if(i%2 == 0){
                odd = odd + (num[i] - '0');
            }else{
                even = even + (num[i] - '0');
            }
        }

        if((odd-even)%11 == 0){ // 判斷
            printf("%s is a multiple of 11.\n", num);
        }else{
            printf("%s is not a multiple of 11.\n", num); 
        }

    }

    return 0;
}