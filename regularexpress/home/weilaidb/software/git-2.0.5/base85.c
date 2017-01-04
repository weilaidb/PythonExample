#undef DEBUG_85
#define say(a) fprintf(stderr, a)
#define say1(a,b) fprintf(stderr, a, b)
#define say2(a,b,c) fprintf(stderr, a, b, c)
#define say(a) do  while (0)
#define say1(a,b) do  while (0)
#define say2(a,b,c) do  while (0)
static const char en85[] = ;
static char de85[256];
static void prep_base85(void)
int decode_85(char *dst, const char *buffer, int len)
void encode_85(char *buf, const unsigned char *data, int bytes)
int main(int ac, char **av)
