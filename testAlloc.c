#include "types.h"
#include "user.h"
#include "fcntl.h"
#include "stat.h"
//#include "cnio.h"
//#include "stdio.h"


int main(int argc, char** argv) {

	char* fileName = argv[1];
	printf(0, "%s\n", fileName);
	int fd = open(fileName, O_CREATE | O_EXTENT | O_RDWR);
	if (fd <= 0) {
		printf(1, "File open failed\n");
		exit();
	}

	char x[1];
	int i;
	for (i = 0; i < 1; i++) {
		x[i] = 'a';
	}
	write(fd, x, 1);

	exit();
}