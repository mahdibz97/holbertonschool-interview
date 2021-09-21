#ifndef SORT_H
#define SORT_H

void radix_sort(int *array, size_t size);
void counting_sort(int *array, size_t size, size_t sig);
void print_array(const int *array, size_t size);
int getmax(int *array, size_t size);

#endif
