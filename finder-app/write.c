#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <file_path> <string_to_write>\n", argv[0]);
        return 1;
    }

    char *file_path = argv[1];
    char *string_to_write = argv[2];

    FILE *file = fopen(file_path, "w");
    if (file == NULL) {
        printf("Error opening file %s\n", file_path);
        return 1;
    }

    fprintf(file, "%s", string_to_write);
    fclose(file);

    printf("Successfully wrote \"%s\" to file %s\n", string_to_write, file_path);

    return 0;
}
