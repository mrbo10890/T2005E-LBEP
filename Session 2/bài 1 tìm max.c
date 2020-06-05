

#include <stdio.h>

int main(){
    int  a, b, c;
    printf("Tìm số lớn nhất trong ba số \n");
    printf("Nhập số đầu tiên: ");
    scanf("%d", &a);
    printf("Nhập số thứ hai: ");
    scanf("%d", &b);
    printf("nhập số thứ 3: ");
    scanf("%d", &c);
    
    if(a>b){
        if(a>c){
            printf("%d là số lớn nhất \n", a);
        } else {
            printf("%d là số lớn nhất \n", c);
        }
    }else {
        if(b>c){
            printf("%d là số lớn nhất \n", b);
        } else {
            printf("%d là số lớn nhất \n", c);
        }
    }
}
