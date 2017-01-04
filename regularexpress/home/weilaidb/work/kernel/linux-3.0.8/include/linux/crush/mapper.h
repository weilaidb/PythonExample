#define CEPH_CRUSH_MAPPER_H
extern int crush_find_rule(struct crush_map *map, int pool, int type, int size);
extern int crush_do_rule(struct crush_map *map,
int ruleno,
int x, int *result, int result_max,
int forcefeed,
__u32 *weights);
