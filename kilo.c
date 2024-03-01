#include <unistd.h>
#include <stdio.h>
int main() {
  printf("Goodbye Text Editor");
  char c;
  while (read(STDIN_FILENO, &c, 1) == 1 && c != 'q');
  return 0;
}

