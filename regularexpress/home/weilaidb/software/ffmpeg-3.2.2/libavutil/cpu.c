#if HAVE_SCHED_GETAFFINITY
# define _GNU_SOURCE
#if HAVE_GETPROCESSAFFINITYMASK || HAVE_WINRT
#if HAVE_SYSCTL
#if HAVE_SYS_PARAM_H
#if HAVE_UNISTD_H
static int flags, checked;
void av_force_cpu_flags(int arg)
int av_get_cpu_flags(void)
void av_set_cpu_flags_mask(int mask)
int av_parse_cpu_flags(const char *s)
int av_parse_cpu_caps(unsigned *flags, const char *s)
int av_cpu_count(void)
