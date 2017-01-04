#undef _GNU_SOURCE
#define _XOPEN_SOURCE 600
struct error_entry ;
#define ERROR_TAG(tag) AVERROR_##tag, #tag
#define EERROR_TAG(tag) AVERROR(tag), #tag
#define AVERROR_INPUT_AND_OUTPUT_CHANGED (AVERROR_INPUT_CHANGED | AVERROR_OUTPUT_CHANGED)
static const struct error_entry error_entries[] = ;
int av_strerror(int errnum, char *errbuf, size_t errbuf_size)
#undef printf
int main(void)
