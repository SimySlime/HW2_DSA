#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "AlgorithmLib.h"
#include "initializeArrays.h"

int main(void){

    int array40[40];
    int array1000[1000];
    int array6000[6000];
    int array10000[10000];
    int n1000 = 0;
    int n40 = 0;
    int n6000 = 0;
    int n10000 = 0;
    const char *unsortedArray40 = "unsortedarr40.txt";
    const char *sortedArray40 = "sortedarr40.txt";
    const char *unsortedArray1000 = "unsortedarr1000.txt";
    const char *sortedArray1000 = "sortedarr1000.txt";
    const char *unsortedArray6000 = "unsortedarr6000.txt";
    const char *sortedArray6000 = "sortedarr6000.txt";
    const char *unsortedArray10000 = "unsortedarr10000.txt";
    const char *sortedArray10000 = "sortedarr10000.txt";
    clock_t start, end;
    double time_used;
    

    initialize_unsortedArray(unsortedArray40, array40, 40, &n40);
    printf("\n");

    //timer to measure function speed start
    

    start = clock();

    insertion_sort(array40, n40);

    end = clock();
    time_used = (double)(end - start) / CLOCKS_PER_SEC;
    

    // speed test end
    printf("Time (Insertion sort Array size: 40): %f milliseconds\n", time_used*1000.0);
    initialize_sortedArray(sortedArray40, array40, n40);
    initialize_unsortedArray(unsortedArray1000, array1000, 1000, &n1000);

    start = clock();

    insertion_sort(array1000, n1000);

    end = clock();
    time_used = (double)(end - start) / CLOCKS_PER_SEC;
    initialize_sortedArray(sortedArray1000, array1000, n1000);
    printf("Time (Insertion sort Array size: 1000): %f milliseconds\n", time_used*1000.0);
    //arr6000.txt
    initialize_unsortedArray(unsortedArray6000, array6000, 6000, &n6000);
    start = clock();

    insertion_sort(array6000, n6000);

    end = clock();
    time_used = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Time (Insertion sort Array size: 6000): %f milliseconds\n", time_used*1000.0);   
    initialize_sortedArray(sortedArray6000, array6000, n6000);
 
    //arr10000.txt start
    initialize_unsortedArray(unsortedArray10000, array10000, 10000, &n10000);

    start = clock();
    insertion_sort(array10000, n10000);

    end = clock();
    time_used = (double)(end - start) / CLOCKS_PER_SEC;
    

    // speed test end
    initialize_sortedArray(sortedArray10000, array10000, n10000);
    printf("Time (Insertion sort Array size: 10000): %f milliseconds\n", time_used*1000.0);

    //arr10000.txt end
    printf("\n");

    start = clock();

    merge_sort(array40, n40);

    end = clock();
    
    initialize_unsortedArray(unsortedArray40, array40, 40, &n40);

    //timer to measure function speed start
    
    start = clock();

    merge_sort(array40, n40);

    end = clock();
    time_used = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Time (merge sort Array size: 40): %f milliseconds\n", time_used*1000.0);
    initialize_sortedArray(sortedArray40, array40, n40);

    initialize_unsortedArray(unsortedArray1000, array1000, 1000, &n1000);

    start = clock();

    merge_sort(array1000, n1000);

    end = clock();
    time_used = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Time (merge sort Array size: 1000): %f milliseconds\n", time_used*1000.0);
    initialize_sortedArray(sortedArray1000, array1000, n1000);

    initialize_unsortedArray(unsortedArray6000, array6000, 6000, &n6000);
    start = clock();

    merge_sort(array6000, n6000);

    end = clock();
    time_used = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Time (merge sort Array size: 6000): %f milliseconds\n", time_used*1000.0);   
    initialize_sortedArray(sortedArray6000, array6000, n6000);
 
    //arr10000.txt start
    initialize_unsortedArray(unsortedArray10000, array10000, 10000, &n10000);

    start = clock();
    merge_sort(array10000, n10000);

    end = clock();
    time_used = (double)(end - start) / CLOCKS_PER_SEC;
    

    // speed test end
    initialize_sortedArray(sortedArray10000, array10000, n10000);
    printf("Time (merge sort Array size: 10000): %f milliseconds\n", time_used*1000.0);

    //arr10000.txt end
    printf("\n");
    initialize_unsortedArray(unsortedArray40, array40, 40, &n40);

    start = clock();
    heap_sort(array40, n40);

    end = clock();
    time_used = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Time (heap sort Array size: 40): %f milliseconds\n", time_used*1000.0);
    initialize_sortedArray(sortedArray40, array40, n40);

    initialize_unsortedArray(unsortedArray1000, array1000, 1000, &n1000);

    start = clock();

    heap_sort(array1000, n1000);

    end = clock();
    time_used = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Time (heap sort Array size: 1000): %f milliseconds\n", time_used*1000.0);
    initialize_sortedArray(sortedArray1000, array1000, n1000);
    initialize_unsortedArray(unsortedArray6000, array6000, 6000, &n6000);
    start = clock();

    heap_sort(array6000, n6000);

    end = clock();
    time_used = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Time (heap sort Array size: 6000): %f milliseconds\n", time_used*1000.0);   
    initialize_sortedArray(sortedArray6000, array6000, n6000);
 
    //arr10000.txt start
    initialize_unsortedArray(unsortedArray10000, array10000, 10000, &n10000);

    start = clock();
    heap_sort(array10000, n10000);

    end = clock();
    time_used = (double)(end - start) / CLOCKS_PER_SEC;
    

    // speed test end
    initialize_sortedArray(sortedArray10000, array10000, n10000);
    printf("Time (heap sort Array size: 10000): %f milliseconds\n", time_used*1000.0);

    return 0;
}