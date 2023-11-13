
//include libery
#include <stdio.h>

// load file
int main() {
    FILE *file;
    char c;
    int count = 0;
    int incount = 0;

    //name of the text document (text.txt can be replace with any name)
    file = fopen("text.txt", "r");

    //when the program dont have perms to open the file
    if (file == NULL) {
        printf("File cant be open!\n");
        return 1;
    }
    //counting the words from the file
    while ((c = fgetc(file)) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            incount = 0;
        } else if (incount == 0){
            incount = 1;
            count++;
        }
    }

    //Close FILE 
    fclose(file);

    //Print words
    printf("Count of words in this text is: %d\n", count);

    return 0;
}
