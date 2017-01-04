#if HAVE_UNISTD_H
#if HAVE_IO_H
#if HAVE_CRYPTGENRANDOM
#define TEST 0
static int read_random(uint32_t *dst, const char *file)
static uint32_t get_generic_seed(void)
uint32_t av_get_random_seed(void)
#if TEST
#undef printf
#define N 256
int main(void)
