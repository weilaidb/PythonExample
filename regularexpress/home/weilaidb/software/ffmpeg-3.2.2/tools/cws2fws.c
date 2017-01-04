#if HAVE_UNISTD_H
#if HAVE_IO_H
#define dbgprintf printf
#define dbgprintf(...) do  while (0)
int main(int argc, char *argv[])
