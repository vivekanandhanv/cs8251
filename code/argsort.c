#include <stdio.h>
#include <string.h>

int comparator(const void* a, const void* b){
    const char* pa = *(const char**)a; 
    const char* pb = *(const char**)b; 
    printf("%s %s\n", pa, pb); 
    return !strcmp(pa, pb); 
    
    //Cast 'a' to a pointer to a constant pointer to a character and dereference that
    //Credits: https://bewuethr.github.io/sorting-strings-in-c-with-qsort/
    //return strcmp(*(char* const*) a, *(char* const*) b);
}

int comparator_char(const void* a, const void* b){
    printf("%c %c\n", *(char*)a, *(char*)b); 
    return ( *(char*)a - *(char*)b );
}


int main(int argc, const char* argv[])
{
    if (argc == 2) {
        qsort(argv[1], strlen(argv[1]), sizeof(char), comparator_char);
        puts("After sorting letters in argument 1..."); 
        printf("%s\n", argv[1]); 
    }
    else if (argc > 2) {
        qsort(&argv[1], argc-1, sizeof(char*), comparator);
        puts("After sorting command line arguments..");
        while (argc > 1)
            printf("%s\n", argv[--argc]);
    }
    else {
        puts("No args to sort!");
    }
    
    return 0;
}
<!--stackedit_data:
eyJoaXN0b3J5IjpbLTE0Mjk5ODM2NzZdfQ==
-->