#if HAVE_SCHED_GETAFFINITY
# define _GNU_SOURCE
#if HAVE_GETPROCESSAFFINITYMASK || HAVE_WINRT
#if HAVE_SYSCTL
#if HAVE_SYS_PARAM_H
#if HAVE_UNISTD_H
static int flags, checked;
av_force_cpu_flags
av_get_cpu_flags
av_set_cpu_flags_mask
av_parse_cpu_flags
av_parse_cpu_caps
av_cpu_count
