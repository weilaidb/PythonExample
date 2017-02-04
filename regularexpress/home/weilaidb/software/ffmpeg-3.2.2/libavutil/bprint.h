#define AVUTIL_BPRINT_H
FF_PAD_STRUCTURE \
struct ff_pad_helper_##name ; \
typedef struct name  name;
FF_PAD_STRUCTURE(AVBPrint, 1024,
char *str;
unsigned len;
unsigned size;
unsigned size_max;
char reserved_internal_buffer[1];
)
#define AV_BPRINT_SIZE_UNLIMITED  ((unsigned)-1)
#define AV_BPRINT_SIZE_AUTOMATIC  1
#define AV_BPRINT_SIZE_COUNT_ONLY 0
av_bprint_init;
av_bprint_init_for_buffer;
av_bprintf av_printf_format(2, 3);
av_vbprintf;
av_bprint_chars;
av_bprint_append_data;
struct tm;
av_bprint_strftime;
av_bprint_get_buffer;
av_bprint_clear;
av_bprint_is_complete
av_bprint_finalize;
av_bprint_escape;
