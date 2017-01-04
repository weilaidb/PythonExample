#define MAX_CHANNELS 8
static unsigned int myrnd(unsigned int *seed_ptr, int n)
#define FRAC_BITS 16
#define FRAC_ONE (1 << FRAC_BITS)
#define COS_TABLE_BITS 7
static const unsigned short cos_table[(1 << COS_TABLE_BITS) + 2] = ;
#define CSHIFT (FRAC_BITS - COS_TABLE_BITS - 2)
static int int_cos(int a)
FILE *outfile;
static void put16(int16_t v)
static void put32(uint32_t v)
#define HEADER_SIZE      46
#define FMT_SIZE         18
#define SAMPLE_SIZE       2
#define WFORMAT_PCM  0x0001
static void put_wav_header(int sample_rate, int channels, int nb_samples)
int main(int argc, char **argv)
