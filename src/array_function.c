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
    for(size_t i=0;i<size_src1;i++) {
    dest[i] = src1[i];
}
for(size_t i=0;i<size_src2;i++) {
    dest[i+size_src1] = src2[i];
}
size_t n=0;
while(n<(size_src1+size_src2)-1){
    for(size_t i=0;i<size_src1+size_src2 -1;i++){
        if (dest[i]>dest[i+1]){
            int a=dest[i];
            dest[i]=dest[i+1];
            dest[i+1]=a;
            n=1;
        }else if(n==0){
            break;
        }
        }
    }
}

void get_min_and_max_from_int_array(int* src, size_t size, int* min, int* max) {}

