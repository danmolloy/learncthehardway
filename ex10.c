#include <stdio.h>

int main(int argc, char *argv[])
{
  int i = 0;
  argv[1] = "test";
  //go through each string in argv
  //why am i skipping argv[0]?
  for(i = 1; i < argc; i++) {
   printf("arg %d: %s\n", i, argv[i]); 
  }

  //let's make out own array of strings
  char *states[] = {
    "California", "Oregon", 
    "Washington", "Texas", NULL
  };
  int num_states = 5;

  for(i = 0; i < num_states; i++) {
    printf("state %d: %s\n", i, states[i]);
  }

  return 0;

}
