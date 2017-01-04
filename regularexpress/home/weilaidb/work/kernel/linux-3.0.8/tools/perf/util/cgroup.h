#define __CGROUP_H__
struct option;
struct cgroup_sel ;
extern int nr_cgroups;
extern void close_cgroup(struct cgroup_sel *cgrp);
extern int parse_cgroups(const struct option *opt, const char *str, int unset);
