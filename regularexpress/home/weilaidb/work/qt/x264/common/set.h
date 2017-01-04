#define X264_SET_H
enum profile_e
;
enum chroma_format_e
;
enum cqm4_e
;
enum cqm8_e
;
typedef struct
x264_sps_t;
typedef struct
x264_pps_t;
static const uint8_t x264_cqm_jvt4i[16] =
;
static const uint8_t x264_cqm_jvt4p[16] =
;
static const uint8_t x264_cqm_jvt8i[64] =
;
static const uint8_t x264_cqm_jvt8p[64] =
;
static const uint8_t x264_cqm_flat16[64] =
;
static const uint8_t * const x264_cqm_jvt[8] =
;
static const uint8_t x264_cqm_avci50_4ic[16] =
;
static const uint8_t x264_cqm_avci50_1080i_8iy[64] =
;
static const uint8_t x264_cqm_avci50_p_8iy[64] =
;
static const uint8_t x264_cqm_avci100_1080_4ic[16] =
;
static const uint8_t x264_cqm_avci100_720p_4ic[16] =
;
static const uint8_t x264_cqm_avci100_1080i_8iy[64] =
;
static const uint8_t x264_cqm_avci100_1080p_8iy[64] =
;
static const uint8_t x264_cqm_avci100_720p_8iy[64] =
;
int  x264_cqm_init( x264_t *h );
void x264_cqm_delete( x264_t *h );
int  x264_cqm_parse_file( x264_t *h, const char *filename );
