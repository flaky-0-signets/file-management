// file_operations.c

#include "file_manager.h"

int main() {
    // Sample usage of the file management system

    Directory my_directory;
    create_directory(&my_directory, "MyFiles");

    create_file(&my_directory, "document.txt", 1024);
    create_file(&my_directory, "image.jpg", 2048);

    display_directory_contents(&my_directory);

    File* first_file = &my_directory.files[0];
    display_file_contents(first_file);

    free_directory(&my_directory);

    return 0;
}
