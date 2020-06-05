#include <stdio.h>

int main(){
    int a, b;
    printf("Nhập vào hai số: \n");
    printf("Hãy nhập số đầu tiên: ");
    scanf("%d", &a);
    printf("Hãy nhập số thứ hai: ");
    scanf("%d", &b);
    
    if(a>=b){
        printf("Kết quả của a/b là %d. \n", a/b);
    } else {
        printf("Kết quả của a*b là %d. \n", a*b);
    }
}
