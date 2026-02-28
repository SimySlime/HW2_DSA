#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "initializeArrays.h"

void initialize_unsortedArray(const char *filename, int array[], int maxSize, int *outCount) {
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening %s\n", filename);
        if (outCount != NULL) {
            *outCount = 0;
        }
        return;
    }

    int n = 0;
    while (n < maxSize && fscanf(fp, "%d", &array[n]) == 1) {
        n++;
    }

    fclose(fp);
    if (outCount != NULL) {
        *outCount = n;
    }
}

int initialize_sortedArray(const char *filename, const int array[], int n) {
    FILE *fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Error opening %s\n", filename);
        return -1;
    }

    for (int i = 0; i < n; i++) {
        fprintf(fp, "%d\n", array[i]);
    }

    fclose(fp);
    return 0;
}
