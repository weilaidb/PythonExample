#define SCALEBITS 8
#define ONE_HALF  (1 << (SCALEBITS - 1))
#define FIX(x)    ((int) ((x) * (1 << SCALEBITS) + 0.5))
#define err_if(expr) do  while (0)
static void rgb24_to_yuv420p(unsigned char *lum, unsigned char *cb,
unsigned char *cr, const unsigned char *src,
int width, int height)
#define DEFAULT_WIDTH   352
#define DEFAULT_HEIGHT  288
#define DEFAULT_NB_PICT  50
static void pgmyuv_save(const char *filename, int w, int h,
const unsigned char *rgb_tab)
static unsigned char *rgb_tab;
static int width, height, wrap;
static void put_pixel(int x, int y, int r, int g, int b)
