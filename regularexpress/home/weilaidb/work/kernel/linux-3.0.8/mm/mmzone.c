struct pglist_data *first_online_pgdat(void)
struct pglist_data *next_online_pgdat(struct pglist_data *pgdat)
struct zone *next_zone(struct zone *zone)
static inline int zref_in_nodemask(struct zoneref *zref, nodemask_t *nodes)
struct zoneref *next_zones_zonelist(struct zoneref *z,
enum zone_type highest_zoneidx,
nodemask_t *nodes,
struct zone **zone)
int memmap_valid_within(unsigned long pfn,
struct page *page, struct zone *zone)
