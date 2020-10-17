#include <unistd.h>

#include "config.h"

int main(int argc, char* argv[]) {
    if (argc != 2) { return 1; }
    return execl(GETFATTR_PATH, GETFATTR_PATH,
                 "-m", ".", "-n", "trusted.glusterfs.pathinfo",
                 argv[1], NULL);
}
