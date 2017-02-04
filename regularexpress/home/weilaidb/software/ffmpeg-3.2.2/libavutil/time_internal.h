#define AVUTIL_TIME_INTERNAL_H
#if !HAVE_GMTIME_R && !defined(gmtime_r)
*gmtime_r
#if !HAVE_LOCALTIME_R && !defined(localtime_r)
*localtime_r
