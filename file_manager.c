// file_manager.c

#include "file_manager.h"
#include <stdlib.h>

void create_directory(Directory* dir, const char* name) {
    snprintf(dir->name, sizeof(dir->name), "%s", name);
    dir->files = NULL;
    dir->file_count = 0;
}

void create_file(Directory* dir, const char* file_name, int file_size) {
    dir->files = realloc(dir->files, (dir->file_count + 1) * sizeof(File));
    snprintf(dir->files[dir->file_count].name, sizeof(dir->files[dir->file_count].name), "%s", file_name);
    dir->files[dir->file_count].size = file_size;
    dir->file_count++;
}

void display_directory_contents(const Directory* dir) {
    printf("Directory: %s\n", dir->name);
    printf("Files:\n");
    for (int i = 0; i < dir->file_count; i++) {
        printf("- %s\n", dir->files[i].name);
    }
}

void display_file_contents(const File* file) {
    printf("File: %s\n", file->name);
    printf("Size: %d bytes\n", file->size);
}

void free_directory(Directory* dir) {
    free(dir->files);
}
