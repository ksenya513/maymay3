#include "../include/array_function.h"

void join_int_arrays(int *src1, size_t size_src1, int *src2, size_t size_src2, int *dest) {
for(int i=0;i<size_src1;i++) {
    dest[i] = src1[i];
};
for(int i=0;i<size_src2;i++) {
    dest[i+size_src1] = src2[i];
};
}

void join_and_sort_int_arrays(int* src1, size_t size_src1, int* src2, size_t size_src2, int* dest) {
    for(int i=0;i<size_src1;i++) {
    dest[i] = src1[i];
};
for(int i=0;i<size_src2;i++) {
    dest[i+size_src1] = src2[i];
};
for(int i=0;i<size_src1+size_src2;i++){
    while (dest[size_src1-1]>dest[size_src1]){
        if (dest[i]>dest[i+1]){
            int a=dest[i];
            dest[i]=dest[i+1];
            dest[i+1]=a;
        }

    }
    
}

void get_min_and_max_from_int_array(int* src, size_t size, int* min, int* max) {}

