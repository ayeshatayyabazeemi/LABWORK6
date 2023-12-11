#include "file_opertn.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool checkfile(char *filename){
  FILE *file=fopen(filename,"r");
  if (file!=NULL){
    return true;
  }
  return false;
}
void readfile(char *filename) {
  FILE *file=fopen(filename,"r");
  char data[200];
  while (fgets(data,200,file)!=NULL){
    printf("%s",data);
  }
  fclose(file);
}
void writetext(char *filename, char *text){
  FILE *file=fopen(filename,"w");

  fprintf(file,"%s",text);
  fclose(file);
}


