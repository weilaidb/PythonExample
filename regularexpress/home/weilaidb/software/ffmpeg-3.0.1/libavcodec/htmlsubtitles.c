static int html_color_parse(void *log_ctx, const char *str)
enum ;
typedef struct SrtStack  SrtStack;
static void rstrip_spaces_buf(AVBPrint *buf)
void ff_htmlmarkup_to_ass(void *log_ctx, AVBPrint *dst, const char *in)
while (dst->len >= 2 && !strncmp(&dst->str[dst->len - 2], "\\N", 2))
dst->len -= 2;
dst->str[dst->len] = 0;
rstrip_spaces_buf(dst);
}
