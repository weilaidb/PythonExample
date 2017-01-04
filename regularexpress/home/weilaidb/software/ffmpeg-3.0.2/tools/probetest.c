#define MAX_FORMATS 1000
static int score_array[MAX_FORMATS];
static int64_t time_array[MAX_FORMATS];
static int failures = 0;
static const char *single_format;
#define AV_READ_TIME(x) 0
static void probe(AVProbeData *pd, int type, int p, int size)
static void print_times(void)
static int read_int(char *arg)
int main(int argc, char **argv)
