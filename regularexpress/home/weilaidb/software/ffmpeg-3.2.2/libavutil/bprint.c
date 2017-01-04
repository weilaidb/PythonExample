#define av_bprint_room(buf) ((buf)->size - FFMIN((buf)->len, (buf)->size))
#define av_bprint_is_allocated(buf) ((buf)->str != (buf)->reserved_internal_buffer)
static int av_bprint_alloc(AVBPrint *buf, unsigned room)
static void av_bprint_grow(AVBPrint *buf, unsigned extra_len)
void av_bprint_init(AVBPrint *buf, unsigned size_init, unsigned size_max)
void av_bprint_init_for_buffer(AVBPrint *buf, char *buffer, unsigned size)
void av_bprintf(AVBPrint *buf, const char *fmt, ...)
void av_vbprintf(AVBPrint *buf, const char *fmt, va_list vl_arg)
void av_bprint_chars(AVBPrint *buf, char c, unsigned n)
void av_bprint_append_data(AVBPrint *buf, const char *data, unsigned size)
void av_bprint_strftime(AVBPrint *buf, const char *fmt, const struct tm *tm)
void av_bprint_get_buffer(AVBPrint *buf, unsigned size,
unsigned char **mem, unsigned *actual_size)
void av_bprint_clear(AVBPrint *buf)
int av_bprint_finalize(AVBPrint *buf, char **ret_str)
#define WHITESPACES " \n\t\r"
void av_bprint_escape(AVBPrint *dstbuf, const char *src, const char *special_chars,
enum AVEscapeMode mode, int flags)
