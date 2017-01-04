int nr_cgroups;
static int
cgroupfs_find_mountpoint(char *buf, size_t maxlen)
static int open_cgroup(char *name)
static int add_cgroup(struct perf_evlist *evlist, char *str)
void close_cgroup(struct cgroup_sel *cgrp)
int parse_cgroups(const struct option *opt __used, const char *str,
int unset __used)
