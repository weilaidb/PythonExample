#define W1 320
#define H1 240
#define W2 640
#define H2 480
static int run_single_test(const char *test,
const uint8_t *block1, ptrdiff_t stride1,
const uint8_t *block2, ptrdiff_t stride2,
int align, int n)
static int run_test(const char *test,
const uint8_t *b1, const uint8_t *b2)
int main(void)
