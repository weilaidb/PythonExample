#define ARRAY_SIZE(a) (sizeof(a) / sizeof((a)[0]))
static void pabort(const char *s)
static const char *device = "/dev/spidev1.1";
static uint8_t mode;
static uint8_t bits = 8;
static uint32_t speed = 500000;
static uint16_t delay;
static void transfer(int fd)
static void print_usage(const char *prog)
static void parse_opts(int argc, char *argv[])
int main(int argc, char *argv[])
