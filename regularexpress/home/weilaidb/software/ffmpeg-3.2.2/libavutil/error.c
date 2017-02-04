#undef _GNU_SOURCE
#define _XOPEN_SOURCE 600
struct error_entry ;
ERROR_TAG AVERROR_##tag, #tag
EERROR_TAG AVERROR(tag), #tag
#define AVERROR_INPUT_AND_OUTPUT_CHANGED (AVERROR_INPUT_CHANGED | AVERROR_OUTPUT_CHANGED)
static const struct error_entry error_entries[] = ;
av_strerror
