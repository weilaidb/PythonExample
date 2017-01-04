#define FFSWAP(type,a,b) dowhile(0)
#define FFMIN(a,b) ((a) > (b) ? (b) : (a))
#define BIT_DEPTH 8
#define PIXEL_MAX ((1 << BIT_DEPTH)-1)
typedef uint8_t  pixel;
static void ssim_4x4x2_core( const pixel *pix1, intptr_t stride1,
const pixel *pix2, intptr_t stride2,
int sums[2][4] )
static float ssim_end1( int s1, int s2, int ss, int s12 )
static float ssim_end4( int sum0[5][4], int sum1[5][4], int width )
float ssim_plane(
pixel *pix1, intptr_t stride1,
pixel *pix2, intptr_t stride2,
int width, int height, void *buf, int *cnt )
uint64_t ssd_plane( const uint8_t *pix1, const uint8_t *pix2, int size )
static double ssd_to_psnr( uint64_t ssd, uint64_t denom )
static double ssim_db( double ssim, double weight )
static void print_results(uint64_t ssd[3], double ssim[3], int frames, int w, int h)
int main(int argc, char* argv[])
