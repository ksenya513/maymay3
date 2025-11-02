#include "../include/array_function.h"
#include <stdio.h>
#include <stdlib.h>

void join_int_arrays(int *src1, size_t size_src1, int *src2, size_t size_src2, int *dest) {
int i = 0;
size_t size_src1= atoi(argv[0]);
size_t size_src2=atoi(argv[1]);
for(i;i<size_src1;i++) {
    scanf("%d",&src1[i]);
    }
for(i;i<size_src2;i++) {
        scanf("%d",&src2[i]);
    }
int* dest[size_src1+size_src2];
for(i;i<size_src1;i++) {
    dest[i] = src1[i];
};
for(i;i<size_src2;i++) {
    dest[i+size_src1] = src2[i];
};
}

void join_and_sort_int_arrays(int* src1, size_t size_src1, int* src2, size_t size_src2, int* dest) {}

void get_min_and_max_from_int_array(int* src, size_t size, int* min, int* max) {}

