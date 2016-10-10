/* (c) 2016 xsd (S Stewart) under the GNU GPL v3 or later. */
#include <stdio.h>
int main() {
   /* I just copy pasted this. */
   printf("Hello! \n");
	/* Did you know you could do this? */
  char cmd[] = "/bin/cat README";
  system(cmd);   
  return 0;
}
