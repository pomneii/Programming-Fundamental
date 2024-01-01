
#include <stdio.h>
#include <string.h>

int main() {

    int num[10], even[10], odd[10], j, k, count = 0;
    for(int i = 0 ; i < 10 ; i++) {
        scanf("%d", &num[i]);
        if(num[i]==0){
            break;
        }
        count++;
    }
    printf("Even : ");
    for(int i = 0 ; i < count ; i++) {
        if(num[i] % 2 == 0) {
            printf("%d ", num[i]);
        }
    }
    printf("\n");
    printf("Odd : ");
    for(int i = 0 ; i < count ; i++) {
        if(num[i] % 2 != 0) {
            printf("%d ", num[i]);
        }
    }
    

    return 0;
}