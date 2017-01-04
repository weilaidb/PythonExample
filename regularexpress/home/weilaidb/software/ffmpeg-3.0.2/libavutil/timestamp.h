#define AVUTIL_TIMESTAMP_H
#if defined(__cplusplus) && !defined(__STDC_FORMAT_MACROS) && !defined(PRId64)
#error missing -D__STDC_FORMAT_MACROS / #define __STDC_FORMAT_MACROS
#define AV_TS_MAX_STRING_SIZE 32
static inline char *av_ts_make_string(char *buf, int64_t ts)
#define av_ts2str(ts) av_ts_make_string((char[AV_TS_MAX_STRING_SIZE]), ts)
static inline char *av_ts_make_time_string(char *buf, int64_t ts, AVRational *tb)
#define av_ts2timestr(ts, tb) av_ts_make_time_string((char[AV_TS_MAX_STRING_SIZE]), ts, tb)
