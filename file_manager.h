// file_manager.h

#ifndef FILE_MANAGER_H
#define FILE_MANAGER_H

#include <stdio.h>

typedef struct {
    char name[50];
    int size;
} File;

typedef struct {
    char name[50];
    File* files;
    int file_count;
} Directory;

void create_directory(Directory* dir, const char* name);
void create_file(Directory* dir, const char* file_name, int file_size);
void display_directory_contents(const Directory* dir);
void display_file_contents(const File* file);
void free_directory(Directory* dir);

#endif
