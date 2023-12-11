#include <stdio.h>
#include<string.h>
#include <stdbool.h>
#include "file_opertn.h"
int main(){
  char *file="file.txt";
  if (checkfile(file)){
    printf("file opened");
  }
  writetext(file,"Hello World");
  readfile(file);
  return 0;
}
