#include <stdio.h>
#include <string.h>
#include <ctype.h>
char *colorsv[] = {"red", "green", "blue"};
int main(int argc, char *argv[]){
    printf("Coded by Levi Leichtfuss\n Lesson 9 Coding\n Part 1");
    printf("hello world\n");
    char title[] = "hello";
    printf("sizeof(title): %lu\n", sizeof(title));
    printf("strlen(title): %lu\n", strlen(title));
    for (int i = 0; i < sizeof(title); i++){
        printf("title[%d]: %d (0x%02x): ", i, title[i], title[i]);
        if (isalpha(title[i])){
            printf("%c\n", title[i]);
        }else{
            printf("not alpha character\n");
        }
        
    }
    printf("part 2");
    char s1[] = "hello";
    char *s2 = "world";
    printf("%s %s\n", s1, s2);
    for (int i = 0; i < sizeof(colorsv) / sizeof(colorsv[0]); i++){
        printf("%s\n", colorsv[i]);
    }
    printf("argc: %d\n", argc);
    for (int i = 0; i < argc; i++){
        printf("%s\n", argv[i]);
    }
    printf("Part 3\n");
    if (argc == 2){
        printf("please enter a color:\nred\ngreen\nblue\n");
        printf("Example: %s red", argv[1]);
    }if (0 == strcmp(argv[2], "red")){printf("You Entered \"red\"\n");}
    else if (0 == strcmp(argv[2], "green")){printf("You Entered \"green\"\n");}
    else if (0 == strcmp(argv[2], "blue")){printf("You Entered \"blue\"\n");}
    else {printf("you didn't enter a color :(\n");}
    return(0);
}