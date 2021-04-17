//
// Created by Auboni Poddar on 2019-0-28.
//

#include "read_lines.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void read_lines(FILE* fp, char*** lines, int* num_lines)
{
    //FILE* fp = fopen(file_name, "r");
    int cols = 0;
    int rows = 0;
    char* temp_line = NULL;
    char temp_char;
    while (!feof(fp)){
        if (fp != NULL) {
            fscanf(fp, "%c", &temp_char);
            do {
                //fscanf(fp, "%c", &temp_char);
                temp_line = (char *) realloc(temp_line, (cols + 1) * sizeof(char));
                temp_line[cols] = temp_char;
                fscanf(fp, "%c", &temp_char);
                cols = cols + 1;
                // printf("%c", temp_char);

            } while (temp_char != '\n');

            *lines = (char **) realloc(*lines, (rows + 1) * sizeof(char *));
            (*lines)[rows] = temp_line;
            //printf("%s\n", *lines[rows]);
            rows++;
            cols = 0;
            temp_line = NULL;

        }
        else{
            **lines = NULL;
            *num_lines = 0;
        }
    }
    //printf("%d ", strlen(*lines[0]));
    for( int i = 0; i <strlen(*lines[1]); i++){
       printf("%s\n", lines[0][i]);}

   // *num_lines = rows;

    printf("size = %d", sizeof(**lines));



    fclose(fp);
}



