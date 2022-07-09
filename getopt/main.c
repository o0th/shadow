#include <stdio.h>
#include <getopt.h>

const char* const short_options = "ta:";
static struct option long_options[] = {
  {"title", 0, NULL, 't'},
  {"artist", 1, NULL, 'a'},
  {NULL, 0, NULL, 0}
};

int main(int argc, char *argv[]) {
  int opt;

  while ((opt = getopt_long(argc, argv, short_options, long_options, NULL)) != -1) {
    switch (opt) {
      case 't':
        printf("true");
        break;
      case 'a':
        printf("%s", optarg);
        break;
    }
  }

  return 0;
}
