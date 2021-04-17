#include <stdio.h>
#include "read_lines.h"

int main(int argc, char** argv) {

    FILE* fp;
    char** lines;
    int* num_lines = 0;


    fp = fopen(argv[1], "r"); //open the file by using file name

    read_lines(fp, &lines, num_lines);

    return 0;

}