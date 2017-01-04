#define _GNU_SOURCE
static volatile int event_fd;
static void handler(int sig, siginfo_t *si, void *data)
int main(void)
