#define O2CLUSTER_HEARTBEAT_H
#define O2HB_REGION_TIMEOUT_MS		2000
#define O2HB_MAX_REGION_NAME_LEN	32
#define O2HB_LIVE_THRESHOLD	   2
extern unsigned int o2hb_dead_threshold;
#define O2HB_DEFAULT_DEAD_THRESHOLD	   31
#define O2HB_MIN_DEAD_THRESHOLD	  2
#define O2HB_MAX_WRITE_TIMEOUT_MS (O2HB_REGION_TIMEOUT_MS * (o2hb_dead_threshold - 1))
#define O2HB_CB_MAGIC		0x51d1e4ec
enum o2hb_callback_type ;
struct o2nm_node;
typedef void (o2hb_cb_func)(struct o2nm_node *, int, void *);
struct o2hb_callback_func ;
struct config_group *o2hb_alloc_hb_set(void);
void o2hb_free_hb_set(struct config_group *group);
void o2hb_setup_callback(struct o2hb_callback_func *hc,
enum o2hb_callback_type type,
o2hb_cb_func *func,
void *data,
int priority);
int o2hb_register_callback(const char *region_uuid,
struct o2hb_callback_func *hc);
void o2hb_unregister_callback(const char *region_uuid,
struct o2hb_callback_func *hc);
void o2hb_fill_node_map(unsigned long *map,
unsigned bytes);
void o2hb_exit(void);
int o2hb_init(void);
int o2hb_check_node_heartbeating(u8 node_num);
int o2hb_check_node_heartbeating_from_callback(u8 node_num);
int o2hb_check_local_node_heartbeating(void);
void o2hb_stop_all_regions(void);
int o2hb_get_all_regions(char *region_uuids, u8 numregions);
int o2hb_global_heartbeat_active(void);
