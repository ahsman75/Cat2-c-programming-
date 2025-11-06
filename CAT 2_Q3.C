
/* Emmanuel Mulei Nzuki 
CT101/G/26526/25
Q3*/
#include <stdio.h>
#include <stdlib.h>


void writeInputFile() {
    FILE *fp;
    int numbers[10];
    fp = fopen("input.txt", "w");

    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        exit(1);
    }

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        fprintf(fp, "%d\n", numbers[i]);
    }

    fclose(fp);
    printf("\n Data successfully written to input.txt\n\n");
}


void processFiles() {
    FILE *fpIn, *fpOut;
    int num, sum = 0, count = 0;
    float average;

    fpIn = fopen("input.txt", "r");
    if (fpIn == NULL) {
        printf("Error opening input.txt for reading!\n");
        exit(1);
    }

    
    while (fscanf(fpIn, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    fclose(fpIn);

    if (count == 0) {
        printf("No data found in input.txt!\n");
        exit(1);
    }

    average = (float)sum / count;

    fpOut = fopen("output.txt", "w");
    if (fpOut == NULL) {
        printf("Error opening output.txt for writing!\n");
        exit(1);
    }

    fprintf(fpOut, "Sum = %d\nAverage = %.2f\n", sum, average);
    fclose(fpOut);

    printf("Sum and average written to output.txt successfully.\n\n");
}


void displayFiles() {
    FILE *fp;
    char ch;

    printf("Contents of input.txt\n");
    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("Error opening input.txt!\n");
        exit(1);
    }
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);

    printf("\nContents of output.txt\n");
    fp = fopen("output.txt", "r");
    if (fp == NULL) {
        printf("Error opening output.txt!\n");
        exit(1);
    }
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);
    printf("\n");
}


int main() {
    writeInputFile();  
    processFiles();   
    displayFiles();    

    return 0;
}