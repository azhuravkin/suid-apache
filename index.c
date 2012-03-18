#include <pwd.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#define DEBUG 1


#ifdef DEBUG
#include <stdio.h>
#include <string.h>
#include <errno.h>
#endif

int main(int argc, char **argv, char **env){
	char *ld_preload = NULL;

	ld_preload = getenv("LD_PRELOAD");

	if (ld_preload) {
		exit(1);
	}

	setuid(0);

	if (execve("./index.pl", argv, env) !=0){
#ifdef DEBUG
		printf("%s in execve\n", strerror(errno));
#endif
	}
	exit(0);
}
