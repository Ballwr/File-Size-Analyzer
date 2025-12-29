#include <stdio.h>

int main() {
    char filename[256];
    FILE *fp;
    int size;

    printf("Enter file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "rb");
    if (fp == NULL) {
        printf("Error: Cannot open file\n");
        return 1;
    }

    fseek(fp, 0, SEEK_END);
    size = ftell(fp);
    fclose(fp);

    printf("File size: %d bytes\n", size);
    printf("File size: %.2f KB\n", size / 1024.0);

    return 0;
}
