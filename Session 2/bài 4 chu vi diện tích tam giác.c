
#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    printf("Kiểm tra ba số ngẫu nhiên có phải là ba cạnh của một hình tam giác hay không. Nếu phải thì tính chu vi và diện tích của tam giác đó. \n");
    printf("Nhập số đầu tiên: ");
    scanf("%d", &a);
    printf("Nhập số thứ hai: ");
    scanf("%d", &b);
    printf("Nhập số cuối cùng: ");
    scanf("%d", &c);
    
    if(a+b>c){
        if(a+c>b){
            if(b+c>a){
                int P=a+b+c;
                int p=P/2;
                int S=sqrt((p*(p-a))*(p*(p-b))*(p*(p-c)));
                printf("%d, %d, %d là ba cạnh của một hình tam giác, với diện tích là %d và chu vi là %d. \n", a, b, c, S, P);
            }else {
                printf("%d, %d, %d không phải là ba cạnh của một hình tam giác. \n", a, b, c);
            }
        }else {
            printf("%d, %d, %d không phải là ba cạnh của một hình tam giác. \n", a, b, c);
        }
    }else {
        printf("%d, %d, %d không phải là ba cạnh của một hình tam giác. \n", a, b, c);
    }

}
