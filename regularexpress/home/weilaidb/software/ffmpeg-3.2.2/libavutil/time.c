#if HAVE_GETTIMEOFDAY
#if HAVE_UNISTD_H
#if HAVE_WINDOWS_H
int64_t av_gettime(void)
int64_t av_gettime_relative(void)
int av_gettime_relative_is_monotonic(void)
int av_usleep(unsigned usec)
