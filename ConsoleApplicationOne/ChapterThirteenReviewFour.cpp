#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    FILE* fp;
    double num;
    double sum = 0.0;
    int count = 0;

    if (argc < 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (fopen_s(&fp, argv[1], "r") != 0 || fp == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    while (fscanf_s(fp, "%lf", &num) == 1) {
        sum += num;
        count++;
    }

    if (count > 0) {
        printf("Average of %d values = %.2f\n", count, sum / count);
    }
    else {
        printf("No valid data were entered.\n");
    }

    fclose(fp);
    return EXIT_SUCCESS;
}
