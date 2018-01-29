#include <stdio.h>
#include <string.h>

int success;
char input[20];

int main() {
  success = 0;

  printf("Password: ");                 // Print to standard output
  fflush(stdout);                       // Flush standard output
  scanf("%s", input);                   // Read from standard input,
                                        // and store the data in the variable input
  if(strcmp(input, "PassWord213") == 0) // If input is equal to: PassWord213
    success = 1;

  if(success)
    printf("Logged in\n");
  else
    printf("Wrong password\n");
}
