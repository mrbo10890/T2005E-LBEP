//
//  exam 1.c
//  exam 1
//
//  Created by MacBook on 6/26/20.
//  Copyright © 2020 Lê Nam. All rights reserved.
//

#include <stdio.h>

int main() {
    int n;

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    int ary[n], kq = 0;
    for(int i = 0; i < n; i++){
        printf("Nhap so phan tu %d: ", i+1);
        scanf("%d", &ary[i]);
    }

    for(int i = n-1; i >= 0; i--){
        if(ary[i]%2 == 0 && ary[i]>0) {
            kq = ary[i];
            break;
        }
    }

    if(kq == 0)
        printf("Khong co so chan.\n");
    else
        printf("So chan cuoi cung la: %d.\n", kq);

    return 0;
}
