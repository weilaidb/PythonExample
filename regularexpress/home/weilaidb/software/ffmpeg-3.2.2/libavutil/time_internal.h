#define AVUTIL_TIME_INTERNAL_H
#if !HAVE_GMTIME_R && !defined(gmtime_r)
static inline struct tm *gmtime_r(const time_t* clock, struct tm *result)
#if !HAVE_LOCALTIME_R && !defined(localtime_r)
static inline struct tm *localtime_r(const time_t* clock, struct tm *result)
