#define KMSG_COMPONENT "zfcp"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
struct kmem_cache *zfcp_fc_req_cache;
static u32 zfcp_fc_rscn_range_mask[] = ;
void zfcp_fc_post_event(struct work_struct *work)
void zfcp_fc_enqueue_event(struct zfcp_adapter *adapter,
enum fc_host_event_code event_code, u32 event_data)
static int zfcp_fc_wka_port_get(struct zfcp_fc_wka_port *wka_port)
static void zfcp_fc_wka_port_offline(struct work_struct *work)
static void zfcp_fc_wka_port_put(struct zfcp_fc_wka_port *wka_port)
static void zfcp_fc_wka_port_init(struct zfcp_fc_wka_port *wka_port, u32 d_id,
struct zfcp_adapter *adapter)
static void zfcp_fc_wka_port_force_offline(struct zfcp_fc_wka_port *wka)
void zfcp_fc_wka_ports_force_offline(struct zfcp_fc_wka_ports *gs)
static void _zfcp_fc_incoming_rscn(struct zfcp_fsf_req *fsf_req, u32 range,
struct fc_els_rscn_page *page)
static void zfcp_fc_incoming_rscn(struct zfcp_fsf_req *fsf_req)
static void zfcp_fc_incoming_wwpn(struct zfcp_fsf_req *req, u64 wwpn)
static void zfcp_fc_incoming_plogi(struct zfcp_fsf_req *req)
static void zfcp_fc_incoming_logo(struct zfcp_fsf_req *req)
void zfcp_fc_incoming_els(struct zfcp_fsf_req *fsf_req)
static void zfcp_fc_ns_gid_pn_eval(struct zfcp_fc_req *fc_req)
static void zfcp_fc_complete(void *data)
static void zfcp_fc_ct_ns_init(struct fc_ct_hdr *ct_hdr, u16 cmd, u16 mr_size)
static int zfcp_fc_ns_gid_pn_request(struct zfcp_port *port,
struct zfcp_fc_req *fc_req)
static int zfcp_fc_ns_gid_pn(struct zfcp_port *port)
void zfcp_fc_port_did_lookup(struct work_struct *work)
void zfcp_fc_trigger_did_lookup(struct zfcp_port *port)
void zfcp_fc_plogi_evaluate(struct zfcp_port *port, struct fc_els_flogi *plogi)
static void zfcp_fc_adisc_handler(void *data)
static int zfcp_fc_adisc(struct zfcp_port *port)
void zfcp_fc_link_test_work(struct work_struct *work)
void zfcp_fc_test_link(struct zfcp_port *port)
static struct zfcp_fc_req *zfcp_alloc_sg_env(int buf_num)
static int zfcp_fc_send_gpn_ft(struct zfcp_fc_req *fc_req,
struct zfcp_adapter *adapter, int max_bytes)
static void zfcp_fc_validate_port(struct zfcp_port *port, struct list_head *lh)
static int zfcp_fc_eval_gpn_ft(struct zfcp_fc_req *fc_req,
struct zfcp_adapter *adapter, int max_entries)
void zfcp_fc_scan_ports(struct work_struct *work)
static int zfcp_fc_gspn(struct zfcp_adapter *adapter,
struct zfcp_fc_req *fc_req)
static void zfcp_fc_rspn(struct zfcp_adapter *adapter,
struct zfcp_fc_req *fc_req)
void zfcp_fc_sym_name_update(struct work_struct *work)
static void zfcp_fc_ct_els_job_handler(void *data)
static struct zfcp_fc_wka_port *zfcp_fc_job_wka_port(struct fc_bsg_job *job)
static void zfcp_fc_ct_job_handler(void *data)
static int zfcp_fc_exec_els_job(struct fc_bsg_job *job,
struct zfcp_adapter *adapter)
static int zfcp_fc_exec_ct_job(struct fc_bsg_job *job,
struct zfcp_adapter *adapter)
int zfcp_fc_exec_bsg_job(struct fc_bsg_job *job)
int zfcp_fc_timeout_bsg_job(struct fc_bsg_job *job)
int zfcp_fc_gs_setup(struct zfcp_adapter *adapter)
void zfcp_fc_gs_destroy(struct zfcp_adapter *adapter)
