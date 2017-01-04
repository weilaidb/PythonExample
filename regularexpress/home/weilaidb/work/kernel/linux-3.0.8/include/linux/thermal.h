#define __THERMAL_H__
struct thermal_zone_device;
struct thermal_cooling_device;
enum thermal_device_mode ;
enum thermal_trip_type ;
struct thermal_zone_device_ops ;
struct thermal_cooling_device_ops ;
#define THERMAL_TRIPS_NONE -1
#define THERMAL_MAX_TRIPS 12
#define THERMAL_NAME_LENGTH 20
struct thermal_cooling_device ;
#define KELVIN_TO_CELSIUS(t)	(long)(((long)t-2732 >= 0) ?	\
((long)t-2732+5)/10 : ((long)t-2732-5)/10)
#define CELSIUS_TO_KELVIN(t)	((t)*10+2732)
#if defined(CONFIG_THERMAL_HWMON)
struct thermal_hwmon_device ;
struct thermal_hwmon_attr ;
struct thermal_zone_device ;
#define THERMAL_GENL_FAMILY_NAME                "thermal_event"
#define THERMAL_GENL_VERSION                    0x01
#define THERMAL_GENL_MCAST_GROUP_NAME           "thermal_mc_group"
enum events ;
struct thermal_genl_event ;
enum ;
#define THERMAL_GENL_ATTR_MAX (__THERMAL_GENL_ATTR_MAX - 1)
enum ;
#define THERMAL_GENL_CMD_MAX (__THERMAL_GENL_CMD_MAX - 1)
struct thermal_zone_device *thermal_zone_device_register(char *, int, void *,
const struct thermal_zone_device_ops *, int tc1, int tc2,
int passive_freq, int polling_freq);
void thermal_zone_device_unregister(struct thermal_zone_device *);
int thermal_zone_bind_cooling_device(struct thermal_zone_device *, int,
struct thermal_cooling_device *);
int thermal_zone_unbind_cooling_device(struct thermal_zone_device *, int,
struct thermal_cooling_device *);
void thermal_zone_device_update(struct thermal_zone_device *);
struct thermal_cooling_device *thermal_cooling_device_register(char *, void *,
const struct thermal_cooling_device_ops *);
void thermal_cooling_device_unregister(struct thermal_cooling_device *);
extern int generate_netlink_event(u32 orig, enum events event);
static inline int generate_netlink_event(u32 orig, enum events event)
