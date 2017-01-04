typedef unsigned char  u8;
typedef unsigned short u16;
typedef unsigned long  u32;
#define DEFAULT_MAJOR_ROOT 0
#define DEFAULT_MINOR_ROOT 0
#define SETUP_SECT_MIN 5
#define SETUP_SECT_MAX 64
u8 buf[SETUP_SECT_MAX*512];
int is_big_kernel;
static const u32 crctab32[] = ;
static u32 partial_crc32_one(u8 c, u32 crc)
static u32 partial_crc32(const u8 *s, int len, u32 crc)
static void die(const char * str, ...)
static void usage(void)
int main(int argc, char ** argv)
