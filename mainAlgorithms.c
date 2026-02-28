#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "AlgorithmLib.h"
#include "initializeArrays.h"
void run_test(void (*sort_ptr)(int*, int), const char* name, int size) {
    int *array = malloc(size * sizeof(int));
    int n = 0;
    char filename[50];

    // 1. Load the data
    sprintf(filename, "unsortedarr%d.txt", size);
    initialize_unsortedArray(filename, array, size, &n);

    // 2. Time the execution
    clock_t start = clock();
    sort_ptr(array, n);
    clock_t end = clock();

    // 3. Report and Save
    double time_ms = ((double)(end - start) / CLOCKS_PER_SEC) * 1000.0;
    printf("Time (%s | Size: %d): %.4f ms\n", name, size, time_ms);

    sprintf(filename, "sortedarr%d.txt", size);
    initialize_sortedArray(filename, array, n);

    free(array); // Clean up memory!
}
int main(void){

   
    int sizes[] = {40, 1000, 6000, 10000};
    int num_sizes = sizeof(sizes) / sizeof(sizes[0]);

    printf("--- Starting Benchmarks ---\n");

    for (int i = 0; i < num_sizes; i++) {
        run_test(insertion_sort, "Insertion Sort", sizes[i]);
    }
    
    printf("\n");

    for (int i = 0; i < num_sizes; i++) {
        run_test(merge_sort, "Merge Sort", sizes[i]);
    }

    printf("\n");

    for (int i = 0; i < num_sizes; i++) {
        run_test(heap_sort, "Heap Sort", sizes[i]);
    }
    
    return 0;
}