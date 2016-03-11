#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdint.h>

#include <string.h>

int main(int argc, char *argv[]) {

  int fdr, fdw,i;

  fdr = open("/dev/xillybus_read_8", O_RDONLY);
  fdw = open("/dev/xillybus_write_8", O_WRONLY);

  if ((fdr < 0) || (fdw < 0)) {
    perror("Failed to open Xillybus device file(s)");
    exit(1);
  }

  // Not checking return values of write() and read(). This must be done
  // in a real-life program to ensure reliability.
  
  unsigned char data_w[] = {50, 150, 170};
  unsigned char data_r[30];
	sscanf(argv[1], "%d", data_w);
	sscanf(argv[2], "%d", &data_w[1]);
  write(fdw, (void *) data_w,3 );
  read(fdr, (void *) data_r, 2);
    
  data_r[19] = 0;
  
  //printf("Send: %s; Receive %s\n", data_w, data_r);

  for (i = 0;i<3;i++)
    printf("%d ", data_w[i]);
  for (i = 0;i<2;i++)
    printf("%d ", data_r[i]);

  close(fdr);
  close(fdw);

  return 0;
}
