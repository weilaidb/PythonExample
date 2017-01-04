#define AVCODEC_TABLEPRINT_VLC_H
#define FFMPEG_CONFIG_H
#define AVUTIL_LOG_H
#define av_log(a, ...) while(0)
#define ff_dlog(a, ...) while(0)
#define AVUTIL_MEM_H
#define av_malloc(s) NULL
#define av_malloc_array(a, b) NULL
#define av_realloc_f(p, o, n) NULL
#define av_free(p) while(0)
#define av_freep(p) while(0)
#define AVCODEC_AVCODEC_H
#define AVCODEC_INTERNAL_H
#define REPLACE_DEFINE2(type) write_##type##_array
#define REPLACE_DEFINE(type) REPLACE_DEFINE2(type)
static void write_VLC_TYPE_array(const VLC_TYPE *p, int s)
WRITE_2D_FUNC(VLC_TYPE)
static void write_vlc_type(const VLC *vlc, VLC_TYPE (*base_table)[2], const char *base_table_name)
#define WRITE_VLC_TYPE(prefix, name, base_table)        \
do  while(0)
#define WRITE_VLC_ARRAY(prefix, name, base_table)       \
do  while(0)
