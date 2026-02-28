#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#ifndef ALGORITHM_LIB_H
#define ALGORITHM_LIB_H

void swap(int *a, int *b);
void insertion_sort(int array[], int n);
void merge_sort(int array[], int n);
void heap_sort(int array[], int n);

#endif