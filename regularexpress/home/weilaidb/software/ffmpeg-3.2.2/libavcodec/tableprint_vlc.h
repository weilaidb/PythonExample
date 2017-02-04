#define AVCODEC_TABLEPRINT_VLC_H
#define FFMPEG_CONFIG_H
#define AVUTIL_LOG_H
av_log while(0)
ff_dlog while(0)
#define AVUTIL_MEM_H
av_malloc NULL
av_malloc_array NULL
av_realloc_f NULL
av_free while(0)
av_freep while(0)
#define AVCODEC_AVCODEC_H
#define AVCODEC_INTERNAL_H
REPLACE_DEFINE2 write_##type##_array
REPLACE_DEFINE REPLACE_DEFINE2(type)
write_VLC_TYPE_array
WRITE_2D_FUNC(VLC_TYPE)
write_vlc_type[2], const char *base_table_name)
WRITE_VLC_TYPE        \
while
WRITE_VLC_ARRAY       \
while
