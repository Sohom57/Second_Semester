/*
W.A.C.P to open a file and write some text and close it.
*/
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
#include<limits.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    FILE *p;
    p=fopen("test1.txt", "w");
    fprintf(p, "Please give us pass marks in Lab Final ;)\n");
    printf("\nCompleted");
}

// #include <stdio.h>

// int main() {
//     FILE *file;

//     // Open the file for writing
//     file = fopen("output.txt", "w");

//     if (file == NULL) {
//         printf("Error opening the file.\n");
//         return 1;
//     }

//     // Write some text to the file
//     fprintf(file, "This is some text written to the file.\n");
//     fprintf(file, "You can write multiple lines like this.\n");

//     // Close the file
//     fclose(file);

//     printf("Text has been successfully written to the file.\n");

//     return 0;
// }
