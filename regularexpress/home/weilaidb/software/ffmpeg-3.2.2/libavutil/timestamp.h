#define AVUTIL_TIMESTAMP_H
defined && !defined(__STDC_FORMAT_MACROS) && !defined(PRId64)
#error missing -D__STDC_FORMAT_MACROS / #define __STDC_FORMAT_MACROS
#define AV_TS_MAX_STRING_SIZE 32
*av_ts_make_string
av_ts2str av_ts_make_string((char[AV_TS_MAX_STRING_SIZE]), ts)
*av_ts_make_time_string
av_ts2timestr av_ts_make_time_string((char[AV_TS_MAX_STRING_SIZE]), ts, tb)
