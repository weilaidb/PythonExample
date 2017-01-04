struct parsed_partitions ;
static inline void *read_part_sector(struct parsed_partitions *state,
sector_t n, Sector *p)
static inline void
put_partition(struct parsed_partitions *p, int n, sector_t from, sector_t size)
extern int warn_no_part;
