static int sas_discover_expander(struct domain_device *dev);
static int sas_configure_routing(struct domain_device *dev, u8 *sas_addr);
static int sas_configure_phy(struct domain_device *dev, int phy_id,
u8 *sas_addr, int include);
static int sas_disable_routing(struct domain_device *dev,  u8 *sas_addr);
static void smp_task_timedout(unsigned long _task)
static void smp_task_done(struct sas_task *task)
#define SMP_TIMEOUT 10
static int smp_execute_task(struct domain_device *dev, void *req, int req_size,
void *resp, int resp_size)
static inline void *alloc_smp_req(int size)
static inline void *alloc_smp_resp(int size)
static void sas_set_ex_phy(struct domain_device *dev, int phy_id,
void *disc_resp)
#define DISCOVER_REQ_SIZE  16
#define DISCOVER_RESP_SIZE 56
static int sas_ex_phy_discover_helper(struct domain_device *dev, u8 *disc_req,
u8 *disc_resp, int single)
static int sas_ex_phy_discover(struct domain_device *dev, int single)
static int sas_expander_discover(struct domain_device *dev)
#define MAX_EXPANDER_PHYS 128
static void ex_assign_report_general(struct domain_device *dev,
struct smp_resp *resp)
#define RG_REQ_SIZE   8
#define RG_RESP_SIZE 32
static int sas_ex_general(struct domain_device *dev)
static void ex_assign_manuf_info(struct domain_device *dev, void
*_mi_resp)
#define MI_REQ_SIZE   8
#define MI_RESP_SIZE 64
static int sas_ex_manuf_info(struct domain_device *dev)
#define PC_REQ_SIZE  44
#define PC_RESP_SIZE 8
int sas_smp_phy_control(struct domain_device *dev, int phy_id,
enum phy_func phy_func,
struct sas_phy_linkrates *rates)
static void sas_ex_disable_phy(struct domain_device *dev, int phy_id)
static void sas_ex_disable_port(struct domain_device *dev, u8 *sas_addr)
static int sas_dev_present_in_domain(struct asd_sas_port *port,
u8 *sas_addr)
#define RPEL_REQ_SIZE	16
#define RPEL_RESP_SIZE	32
int sas_smp_get_phy_events(struct sas_phy *phy)
#define RPS_REQ_SIZE  16
#define RPS_RESP_SIZE 60
static int sas_get_report_phy_sata(struct domain_device *dev,
int phy_id,
struct smp_resp *rps_resp)
static void sas_ex_get_linkrate(struct domain_device *parent,
struct domain_device *child,
struct ex_phy *parent_phy)
static struct domain_device *sas_ex_discover_end_dev(
struct domain_device *parent, int phy_id)
static int sas_ex_join_wide_port(struct domain_device *parent, int phy_id)
static struct domain_device *sas_ex_discover_expander(
struct domain_device *parent, int phy_id)
static int sas_ex_discover_dev(struct domain_device *dev, int phy_id)
static int sas_find_sub_addr(struct domain_device *dev, u8 *sub_addr)
static int sas_check_level_subtractive_boundary(struct domain_device *dev)
static int sas_ex_discover_devices(struct domain_device *dev, int single)
static int sas_check_ex_subtractive_boundary(struct domain_device *dev)
static void sas_print_parent_topology_bug(struct domain_device *child,
struct ex_phy *parent_phy,
struct ex_phy *child_phy)
static int sas_check_eeds(struct domain_device *child,
struct ex_phy *parent_phy,
struct ex_phy *child_phy)
static int sas_check_parent_topology(struct domain_device *child)
#define RRI_REQ_SIZE  16
#define RRI_RESP_SIZE 44
static int sas_configure_present(struct domain_device *dev, int phy_id,
u8 *sas_addr, int *index, int *present)
#define CRI_REQ_SIZE  44
#define CRI_RESP_SIZE  8
static int sas_configure_set(struct domain_device *dev, int phy_id,
u8 *sas_addr, int index, int include)
static int sas_configure_phy(struct domain_device *dev, int phy_id,
u8 *sas_addr, int include)
static int sas_configure_parent(struct domain_device *parent,
struct domain_device *child,
u8 *sas_addr, int include)
static int sas_configure_routing(struct domain_device *dev, u8 *sas_addr)
static int sas_disable_routing(struct domain_device *dev,  u8 *sas_addr)
static int sas_discover_expander(struct domain_device *dev)
static int sas_ex_level_discovery(struct asd_sas_port *port, const int level)
static int sas_ex_bfs_disc(struct asd_sas_port *port)
int sas_discover_root_expander(struct domain_device *dev)
static int sas_get_phy_discover(struct domain_device *dev,
int phy_id, struct smp_resp *disc_resp)
static int sas_get_phy_change_count(struct domain_device *dev,
int phy_id, int *pcc)
static int sas_get_phy_attached_sas_addr(struct domain_device *dev,
int phy_id, u8 *attached_sas_addr)
static int sas_find_bcast_phy(struct domain_device *dev, int *phy_id,
int from_phy, bool update)
static int sas_get_ex_change_count(struct domain_device *dev, int *ecc)
static int sas_find_bcast_dev(struct domain_device *dev,
struct domain_device **src_dev)
static void sas_unregister_ex_tree(struct domain_device *dev)
static void sas_unregister_devs_sas_addr(struct domain_device *parent,
int phy_id, bool last)
static int sas_discover_bfs_by_root_level(struct domain_device *root,
const int level)
static int sas_discover_bfs_by_root(struct domain_device *dev)
static int sas_discover_new(struct domain_device *dev, int phy_id)
static int sas_rediscover_dev(struct domain_device *dev, int phy_id, bool last)
static int sas_rediscover(struct domain_device *dev, const int phy_id)
int sas_ex_revalidate_domain(struct domain_device *port_dev)
int sas_smp_handler(struct Scsi_Host *shost, struct sas_rphy *rphy,
struct request *req)
