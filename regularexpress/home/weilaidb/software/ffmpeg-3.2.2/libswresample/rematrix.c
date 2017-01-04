#define TEMPLATE_REMATRIX_FLT
#undef TEMPLATE_REMATRIX_FLT
#define TEMPLATE_REMATRIX_DBL
#undef TEMPLATE_REMATRIX_DBL
#define TEMPLATE_REMATRIX_S16
#define TEMPLATE_CLIP
#undef TEMPLATE_CLIP
#undef TEMPLATE_REMATRIX_S16
#define TEMPLATE_REMATRIX_S32
#undef TEMPLATE_REMATRIX_S32
#define FRONT_LEFT             0
#define FRONT_RIGHT            1
#define FRONT_CENTER           2
#define LOW_FREQUENCY          3
#define BACK_LEFT              4
#define BACK_RIGHT             5
#define FRONT_LEFT_OF_CENTER   6
#define FRONT_RIGHT_OF_CENTER  7
#define BACK_CENTER            8
#define SIDE_LEFT              9
#define SIDE_RIGHT             10
#define TOP_CENTER             11
#define TOP_FRONT_LEFT         12
#define TOP_FRONT_CENTER       13
#define TOP_FRONT_RIGHT        14
#define TOP_BACK_LEFT          15
#define TOP_BACK_CENTER        16
#define TOP_BACK_RIGHT         17
#define NUM_NAMED_CHANNELS     18
int swr_set_matrix(struct SwrContext *s, const double *matrix, int stride)
static int even(int64_t layout)
static int clean_layout(void *s, int64_t layout)
static int sane_layout(int64_t layout)
av_cold int swr_build_matrix(uint64_t in_ch_layout_param, uint64_t out_ch_layout_param,
double center_mix_level, double surround_mix_level,
double lfe_mix_level, double maxval,
double rematrix_volume, double *matrix_param,
int stride, enum AVMatrixEncoding matrix_encoding, void *log_context)
av_cold static int auto_matrix(SwrContext *s)
av_cold int swri_rematrix_init(SwrContext *s)
av_cold void swri_rematrix_free(SwrContext *s)
int swri_rematrix(SwrContext *s, AudioData *out, AudioData *in, int len, int mustcopy)
