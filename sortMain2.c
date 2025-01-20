#include <stdio.h>
#include <stdlib.h>
#include "mySort.h"

int main(int argc, char *argv[]) {
    int data[100000];  // Array to hold integers to sort
    int nDataItems = 0;  // Number of items in the array
    int i;

    if (argc > 1) {
        nDataItems = argc - 1;
        for (i = 0; i < nDataItems; i++) {
            data[i] = atoi(argv[i + 1]);
        }
    } else {
        nDataItems = 4;
        data[0] = 10;
        data[1] = 20;
        data[2] = 30;
        data[3] = 40;
    }

    mySort(data, nDataItems);

    for (i = 0; i < nDataItems - 1; i++) {
        if (data[i] > data[i + 1]) {
            fprintf(stderr, "Sort error: data[%d] = %d should be <= data[%d] = %d\n",
                    i, data[i], i + 1, data[i + 1]);
            exit(1);
        }
    }

    for (i = 0; i < nDataItems; i++) {
        printf("%d\n", data[i]);
    }

    return 0;
}
