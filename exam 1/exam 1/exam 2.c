//
//  exam 2.c
//  exam 1
//
//  Created by MacBook on 6/26/20.
//  Copyright © 2020 Lê Nam. All rights reserved.
//

#include<stdio.h>
#include<math.h>

float trungBinhCong(int ary[], int n) {
    float trungbinh =0, ketqua;
    for(int i=0; i<n;i++){
        trungbinh = trungbinh + ary[i];
    }
    ketqua = trungbinh/n;
    return(ketqua);
}

int main() {
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    
    int ary[n];
    for(int i=0; i<n;i++){
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &ary[i]);
    }
    
    float ketqua = trungBinhCong(ary, n);
    
    printf("Trung binh cong cua day so la: %f.\n", ketqua);
}

