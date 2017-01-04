static const char *programname;
static const char *filename;
static const char *logoname = "linux_logo";
static const char *outputname;
static FILE *out;
#define LINUX_LOGO_MONO		1
#define LINUX_LOGO_VGA16	2
#define LINUX_LOGO_CLUT224	3
#define LINUX_LOGO_GRAY256	4
static const char *logo_types[LINUX_LOGO_GRAY256+1] = ;
#define MAX_LINUX_LOGO_COLORS	224
struct color ;
static const struct color clut_vga16[16] = ;
static int logo_type = LINUX_LOGO_CLUT224;
static unsigned int logo_width;
static unsigned int logo_height;
static struct color **logo_data;
static struct color logo_clut[MAX_LINUX_LOGO_COLORS];
static unsigned int logo_clutsize;
static void die(const char *fmt, ...)
__attribute__ ((noreturn)) __attribute ((format (printf, 1, 2)));
static void usage(void) __attribute ((noreturn));
static unsigned int get_number(FILE *fp)
static unsigned int get_number255(FILE *fp, unsigned int maxval)
static void read_image(void)
static inline int is_black(struct color c)
static inline int is_white(struct color c)
static inline int is_gray(struct color c)
static inline int is_equal(struct color c1, struct color c2)
static void write_header(void)
static int write_hex_cnt;
static void write_hex(unsigned char byte)
static void write_logo_mono(void)
static void write_logo_vga16(void)
static void write_logo_clut224(void)
;\n\n", out);
fprintf(out, "static unsigned char %s_clut[] __initdata =
static void write_logo_gray256(void)
static void die(const char *fmt, ...)
static void usage(void)
int main(int argc, char *argv[])
