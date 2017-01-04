#define _LINUX_FIRMWARE_MAP_H
int firmware_map_add_early(u64 start, u64 end, const char *type);
int firmware_map_add_hotplug(u64 start, u64 end, const char *type);
static inline int firmware_map_add_early(u64 start, u64 end, const char *type)
static inline int firmware_map_add_hotplug(u64 start, u64 end, const char *type)
