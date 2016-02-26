#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdint.h>

#include <string.h>

int main(int argc, char *argv[]) {

  int fdr, fdw;

  fdr = open("/dev/xillybus_read_8", O_RDONLY);
  fdw = open("/dev/xillybus_write_8", O_WRONLY);

  if ((fdr < 0) || (fdw < 0)) {
    perror("Failed to open Xillybus device file(s)");
    exit(1);
  }

  // Not checking return values of write() and read(). This must be done
  // in a real-life program to ensure reliability.
  
  unsigned char data_w[] = "Ala ma kota";
  unsigned char data_r[20];

  write(fdw, (void *) data_w, strlen(data_w)+1);
  read(fdr, (void *) data_r, strlen(data_w)+1);

  printf("Send: %s; Receive %s\n", data_w, data_r);

  close(fdr);
  close(fdw);

  return 0;
}
