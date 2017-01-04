static struct config_group *space_list;
static struct config_group *comm_list;
static struct dlm_comm *local_comm;
struct dlm_clusters;
struct dlm_cluster;
struct dlm_spaces;
struct dlm_space;
struct dlm_comms;
struct dlm_comm;
struct dlm_nodes;
struct dlm_node;
static struct config_group *make_cluster(struct config_group *, const char *);
static void drop_cluster(struct config_group *, struct config_item *);
static void release_cluster(struct config_item *);
static struct config_group *make_space(struct config_group *, const char *);
static void drop_space(struct config_group *, struct config_item *);
static void release_space(struct config_item *);
static struct config_item *make_comm(struct config_group *, const char *);
static void drop_comm(struct config_group *, struct config_item *);
static void release_comm(struct config_item *);
static struct config_item *make_node(struct config_group *, const char *);
static void drop_node(struct config_group *, struct config_item *);
static void release_node(struct config_item *);
static ssize_t show_cluster(struct config_item *i, struct configfs_attribute *a,
char *buf);
static ssize_t store_cluster(struct config_item *i,
struct configfs_attribute *a,
const char *buf, size_t len);
static ssize_t show_comm(struct config_item *i, struct configfs_attribute *a,
char *buf);
static ssize_t store_comm(struct config_item *i, struct configfs_attribute *a,
const char *buf, size_t len);
static ssize_t show_node(struct config_item *i, struct configfs_attribute *a,
char *buf);
static ssize_t store_node(struct config_item *i, struct configfs_attribute *a,
const char *buf, size_t len);
static ssize_t comm_nodeid_read(struct dlm_comm *cm, char *buf);
static ssize_t comm_nodeid_write(struct dlm_comm *cm, const char *buf,
size_t len);
static ssize_t comm_local_read(struct dlm_comm *cm, char *buf);
static ssize_t comm_local_write(struct dlm_comm *cm, const char *buf,
size_t len);
static ssize_t comm_addr_write(struct dlm_comm *cm, const char *buf,
size_t len);
static ssize_t node_nodeid_read(struct dlm_node *nd, char *buf);
static ssize_t node_nodeid_write(struct dlm_node *nd, const char *buf,
size_t len);
static ssize_t node_weight_read(struct dlm_node *nd, char *buf);
static ssize_t node_weight_write(struct dlm_node *nd, const char *buf,
size_t len);
struct dlm_cluster ;
enum ;
struct cluster_attribute ;
static ssize_t cluster_set(struct dlm_cluster *cl, unsigned int *cl_field,
int *info_field, int check_zero,
const char *buf, size_t len)
#define CLUSTER_ATTR(name, check_zero)                                        \
static ssize_t name##_write(struct dlm_cluster *cl, const char *buf, size_t len) \
\
static ssize_t name##_read(struct dlm_cluster *cl, char *buf)                 \
\
static struct cluster_attribute cluster_attr_##name =                         \
__CONFIGFS_ATTR(name, 0644, name##_read, name##_write)
CLUSTER_ATTR(tcp_port, 1);
CLUSTER_ATTR(buffer_size, 1);
CLUSTER_ATTR(rsbtbl_size, 1);
CLUSTER_ATTR(lkbtbl_size, 1);
CLUSTER_ATTR(dirtbl_size, 1);
CLUSTER_ATTR(recover_timer, 1);
CLUSTER_ATTR(toss_secs, 1);
CLUSTER_ATTR(scan_secs, 1);
CLUSTER_ATTR(log_debug, 0);
CLUSTER_ATTR(protocol, 0);
CLUSTER_ATTR(timewarn_cs, 1);
CLUSTER_ATTR(waitwarn_us, 0);
static struct configfs_attribute *cluster_attrs[] = ;
enum ;
struct comm_attribute ;
static struct comm_attribute comm_attr_nodeid = ;
static struct comm_attribute comm_attr_local = ;
static struct comm_attribute comm_attr_addr = ;
static struct configfs_attribute *comm_attrs[] = ;
enum ;
struct node_attribute ;
static struct node_attribute node_attr_nodeid = ;
static struct node_attribute node_attr_weight = ;
static struct configfs_attribute *node_attrs[] = ;
struct dlm_clusters ;
struct dlm_spaces ;
struct dlm_space ;
struct dlm_comms ;
struct dlm_comm ;
struct dlm_nodes ;
struct dlm_node ;
static struct configfs_group_operations clusters_ops = ;
static struct configfs_item_operations cluster_ops = ;
static struct configfs_group_operations spaces_ops = ;
static struct configfs_item_operations space_ops = ;
static struct configfs_group_operations comms_ops = ;
static struct configfs_item_operations comm_ops = ;
static struct configfs_group_operations nodes_ops = ;
static struct configfs_item_operations node_ops = ;
static struct config_item_type clusters_type = ;
static struct config_item_type cluster_type = ;
static struct config_item_type spaces_type = ;
static struct config_item_type space_type = ;
static struct config_item_type comms_type = ;
static struct config_item_type comm_type = ;
static struct config_item_type nodes_type = ;
static struct config_item_type node_type = ;
static struct dlm_cluster *config_item_to_cluster(struct config_item *i)
static struct dlm_space *config_item_to_space(struct config_item *i)
static struct dlm_comm *config_item_to_comm(struct config_item *i)
static struct dlm_node *config_item_to_node(struct config_item *i)
static struct config_group *make_cluster(struct config_group *g,
const char *name)
static void drop_cluster(struct config_group *g, struct config_item *i)
static void release_cluster(struct config_item *i)
static struct config_group *make_space(struct config_group *g, const char *name)
static void drop_space(struct config_group *g, struct config_item *i)
static void release_space(struct config_item *i)
static struct config_item *make_comm(struct config_group *g, const char *name)
static void drop_comm(struct config_group *g, struct config_item *i)
static void release_comm(struct config_item *i)
static struct config_item *make_node(struct config_group *g, const char *name)
static void drop_node(struct config_group *g, struct config_item *i)
static void release_node(struct config_item *i)
static struct dlm_clusters clusters_root = ;
int __init dlm_config_init(void)
void dlm_config_exit(void)
static ssize_t show_cluster(struct config_item *i, struct configfs_attribute *a,
char *buf)
static ssize_t store_cluster(struct config_item *i,
struct configfs_attribute *a,
const char *buf, size_t len)
static ssize_t show_comm(struct config_item *i, struct configfs_attribute *a,
char *buf)
static ssize_t store_comm(struct config_item *i, struct configfs_attribute *a,
const char *buf, size_t len)
static ssize_t comm_nodeid_read(struct dlm_comm *cm, char *buf)
static ssize_t comm_nodeid_write(struct dlm_comm *cm, const char *buf,
size_t len)
static ssize_t comm_local_read(struct dlm_comm *cm, char *buf)
static ssize_t comm_local_write(struct dlm_comm *cm, const char *buf,
size_t len)
static ssize_t comm_addr_write(struct dlm_comm *cm, const char *buf, size_t len)
static ssize_t show_node(struct config_item *i, struct configfs_attribute *a,
char *buf)
static ssize_t store_node(struct config_item *i, struct configfs_attribute *a,
const char *buf, size_t len)
static ssize_t node_nodeid_read(struct dlm_node *nd, char *buf)
static ssize_t node_nodeid_write(struct dlm_node *nd, const char *buf,
size_t len)
static ssize_t node_weight_read(struct dlm_node *nd, char *buf)
static ssize_t node_weight_write(struct dlm_node *nd, const char *buf,
size_t len)
static struct dlm_space *get_space(char *name)
static void put_space(struct dlm_space *sp)
static int addr_compare(struct sockaddr_storage *x, struct sockaddr_storage *y)
static struct dlm_comm *get_comm(int nodeid, struct sockaddr_storage *addr)
static void put_comm(struct dlm_comm *cm)
int dlm_nodeid_list(char *lsname, int **ids_out, int *ids_count_out,
int **new_out, int *new_count_out)
int dlm_node_weight(char *lsname, int nodeid)
int dlm_nodeid_to_addr(int nodeid, struct sockaddr_storage *addr)
int dlm_addr_to_nodeid(struct sockaddr_storage *addr, int *nodeid)
int dlm_our_nodeid(void)
int dlm_our_addr(struct sockaddr_storage *addr, int num)
#define DEFAULT_TCP_PORT       21064
#define DEFAULT_BUFFER_SIZE     4096
#define DEFAULT_RSBTBL_SIZE     1024
#define DEFAULT_LKBTBL_SIZE     1024
#define DEFAULT_DIRTBL_SIZE     1024
#define DEFAULT_RECOVER_TIMER      5
#define DEFAULT_TOSS_SECS         10
#define DEFAULT_SCAN_SECS          5
#define DEFAULT_LOG_DEBUG          0
#define DEFAULT_PROTOCOL           0
#define DEFAULT_TIMEWARN_CS      500
#define DEFAULT_WAITWARN_US	   0
struct dlm_config_info dlm_config = ;
