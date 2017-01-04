#undef time
#undef fprintf
#define SAMPLES 1000
#define SWR_CH_MAX 32
#define ASSERT_LEVEL 2
static double get(uint8_t *a[], int ch, int index, int ch_count, enum AVSampleFormat f)
static void  set(uint8_t *a[], int ch, int index, int ch_count, enum AVSampleFormat f, double v)
static void shift(uint8_t *a[], int index, int ch_count, enum AVSampleFormat f)
static const enum AVSampleFormat formats[] = ;
static const int rates[] = ;
static const uint64_t layouts[]=;
static void setup_array(uint8_t *out[SWR_CH_MAX], uint8_t *in, enum AVSampleFormat format, int samples)
static int cmp(const void *a, const void *b)
static void audiogen(void *data, enum AVSampleFormat sample_fmt,
int channels, int sample_rate, int nb_samples)
int main(int argc, char **argv)
