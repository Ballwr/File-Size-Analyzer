#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// Function to check if file extension indicates a text file
bool isTextFile(const char *filename) {
    const char *textExt[] = {".txt", ".c", ".cpp", ".py", ".csv", ".java", ".html", ".css", ".js"};
    const char *dot = strrchr(filename, '.');  // find last '.' in filename
    if (!dot) return false;  // no extension found

    for (size_t i = 0; i < sizeof(textExt) / sizeof(textExt[0]); i++) {
        if (strcmp(dot, textExt[i]) == 0)
            return true;
    }
    return false;
}

int main() {
    char filename[256];
    FILE *fp;
    long size;

    printf("Enter file name (with extension): ");
    scanf("%255s", filename);

    bool isText = isTextFile(filename);

    // Always open in binary read mode to handle both safely
    fp = fopen(filename, "rb");
    if (!fp) {
        printf("Error: Cannot open file '%s'\n", filename);
        return 1;
    }

    // Find file size
    fseek(fp, 0, SEEK_END);
    size = ftell(fp);
    rewind(fp);

    printf("\nFile Size: %ld bytes (%.2f KB)\n", size, (float)size / 1024);
    printf("\n--- File Content ---\n");

    int ch;
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch); // Print directly as text
    }

    fclose(fp);
    printf("\n\nFile read successfully.\n");
    return 0;
}
