#define CFAG12864B_WIDTH		(128)
#define CFAG12864B_HEIGHT		(64)
#define CFAG12864B_SIZE			(128 * 64 / 8)
#define CFAG12864B_BPB			(8)
#define CFAG12864B_ADDRESS(x, y)	((y) * CFAG12864B_WIDTH / \
CFAG12864B_BPB + (x) / CFAG12864B_BPB)
#define CFAG12864B_BIT(n)		(((unsigned char) 1) << (n))
#undef CFAG12864B_DOCHECK
#define CFAG12864B_CHECK(x, y)		((x) < CFAG12864B_WIDTH && \
(y) < CFAG12864B_HEIGHT)
#define CFAG12864B_CHECK(x, y)		(1)
int cfag12864b_fd;
unsigned char * cfag12864b_mem;
unsigned char cfag12864b_buffer[CFAG12864B_SIZE];
static int cfag12864b_init(char *path)
static void cfag12864b_exit(void)
static void cfag12864b_set(unsigned char x, unsigned char y)
static void cfag12864b_unset(unsigned char x, unsigned char y)
static unsigned char cfag12864b_isset(unsigned char x, unsigned char y)
static void cfag12864b_not(unsigned char x, unsigned char y)
static void cfag12864b_fill(void)
static void cfag12864b_clear(void)
static void cfag12864b_format(unsigned char * matrix)
static void cfag12864b_blit(void)
#define EXAMPLES	6
static void example(unsigned char n)
int main(int argc, char *argv[])
