#define DEVICE "/dev/ptp0"
#define ADJ_SETOFFSET 0x0100
#define CLOCK_INVALID -1
static int clock_adjtime(clockid_t id, struct timex *tx)
static clockid_t get_clockid(int fd)
static void handle_alarm(int s)
static int install_handler(int signum, void (*handler)(int))
static long ppb_to_scaled_ppm(int ppb)
static void usage(char *progname)
int main(int argc, char *argv[])
