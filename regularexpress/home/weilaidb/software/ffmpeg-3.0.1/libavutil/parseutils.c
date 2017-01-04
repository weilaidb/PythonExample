#define av_get_random_seed av_get_random_seed_deterministic
static uint32_t av_get_random_seed_deterministic(void);
#define av_gettime() 1331972053200000
int av_parse_ratio(AVRational *q, const char *str, int max,
int log_offset, void *log_ctx)
typedef struct VideoSizeAbbr  VideoSizeAbbr;
typedef struct VideoRateAbbr  VideoRateAbbr;
static const VideoSizeAbbr video_size_abbrs[] = ;
static const VideoRateAbbr video_rate_abbrs[]= ;
int av_parse_video_size(int *width_ptr, int *height_ptr, const char *str)
int av_parse_video_rate(AVRational *rate, const char *arg)
typedef struct ColorEntry  ColorEntry;
static const ColorEntry color_table[] = ;
static int color_table_compare(const void *lhs, const void *rhs)
#define ALPHA_SEP '@'
int av_parse_color(uint8_t *rgba_color, const char *color_string, int slen,
void *log_ctx)
const char *av_get_known_color_name(int color_idx, const uint8_t **rgbp)
static int date_get_num(const char **pp,
int n_min, int n_max, int len_max)
char *av_small_strptime(const char *p, const char *fmt, struct tm *dt)
time_t av_timegm(struct tm *tm)
int av_parse_time(int64_t *timeval, const char *timestr, int duration)
int av_find_info_tag(char *arg, int arg_size, const char *tag1, const char *info)
static uint32_t randomv = MKTAG('L','A','V','U');
static uint32_t av_get_random_seed_deterministic(void)
int main(void)
