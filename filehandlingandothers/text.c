// #include <stdio.h>
// #include <stdlib.h>
// #include <errno.h>

// int main() {
//     FILE *file = fopen("nonexistent_file.txt", "r");
//     if (file == NULL) {
//         perror("Error opening file");
//         exit(EXIT_FAILURE);
//     }

//     // File processing code...

//     fclose(file);
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main() {
    FILE *file = fopen("nonexistent_file.txt", "r");
    if (file == NULL) {
        fprintf(stderr, "Error opening file:");
        fprintf(stderr, " %s\n", strerror(errno));
        
        exit(EXIT_FAILURE);
    }

    // File processing code...

    fclose(file);
    return 0;
}
