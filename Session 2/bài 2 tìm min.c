#include <stdio.h>

int main(){
    int a, b, c;
    printf("Tìm số bé nhất trong ba số \n");
    printf("Hãy nhập số đầu tiên: ");
    scanf("%d", &a);
    printf("Hãy nhập số thứ hai: ");
    scanf("%d", &b);
    printf("Hãy nhập số cuối cùng: ");
    scanf("%d", &c);
    
    if(a<b){
        if(a<c){
            printf("%d là số bé nhất \n", a);
        } else {
            printf("%d là số bé nhất \n", c);
        }
    } else {
        if(b<c){
            printf("%d là số bé nhất \n", b);
        } else {
            printf("%d là số bé nhất \n", c);
        }
    }
}
