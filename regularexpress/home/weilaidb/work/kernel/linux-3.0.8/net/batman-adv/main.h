#define _NET_BATMAN_ADV_MAIN_H_
#define DRIVER_AUTHOR "Marek Lindner <lindner_marek@yahoo.de>, " \
"Simon Wunderlich <siwu@hrz.tu-chemnitz.de>"
#define DRIVER_DESC   "B.A.T.M.A.N. advanced"
#define DRIVER_DEVICE "batman-adv"
#define SOURCE_VERSION "next"
#define TQ_MAX_VALUE 255
#define JITTER 20
#define TTL 50
#define PURGE_TIMEOUT 200
#define TT_LOCAL_TIMEOUT 3600
#define TQ_LOCAL_WINDOW_SIZE 64
#define TQ_GLOBAL_WINDOW_SIZE 5
#define TQ_LOCAL_BIDRECT_SEND_MINIMUM 1
#define TQ_LOCAL_BIDRECT_RECV_MINIMUM 1
#define TQ_TOTAL_BIDRECT_LIMIT 1
#define NUM_WORDS (TQ_LOCAL_WINDOW_SIZE / WORD_BIT_SIZE)
#define LOG_BUF_LEN 8192
#define VIS_INTERVAL 5000
#define BONDING_TQ_THRESHOLD	50
#define MAX_AGGREGATION_BYTES 512
#define MAX_AGGREGATION_MS 100
#define SOFTIF_NEIGH_TIMEOUT 180000
#define RESET_PROTECTION_MS 30000
#define EXPECTED_SEQNO_RANGE	65536
#define MESH_INACTIVE 0
#define MESH_ACTIVE 1
#define MESH_DEACTIVATING 2
#define BCAST_QUEUE_LEN		256
#define BATMAN_QUEUE_LEN	256
#undef pr_fmt
#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DBG_BATMAN 1
#define DBG_ROUTES 2
#define DBG_ALL 3
#define REVISION_VERSION_STR ""
#define REVISION_VERSION_STR " "REVISION_VERSION
extern struct list_head hardif_list;
extern unsigned char broadcast_addr[];
extern struct workqueue_struct *bat_event_workqueue;
int mesh_init(struct net_device *soft_iface);
void mesh_free(struct net_device *soft_iface);
void inc_module_count(void);
void dec_module_count(void);
int is_my_mac(uint8_t *addr);
int debug_log(struct bat_priv *bat_priv, char *fmt, ...);
#define bat_dbg(type, bat_priv, fmt, arg...)			\
do 							\
while (0)
static inline void bat_dbg(char type __always_unused,
struct bat_priv *bat_priv __always_unused,
char *fmt __always_unused, ...)
#define bat_info(net_dev, fmt, arg...)					\
do  while (0)
#define bat_err(net_dev, fmt, arg...)					\
do  while (0)
static inline int compare_eth(void *data1, void *data2)
#define atomic_dec_not_zero(v)	atomic_add_unless((v), -1, 0)
