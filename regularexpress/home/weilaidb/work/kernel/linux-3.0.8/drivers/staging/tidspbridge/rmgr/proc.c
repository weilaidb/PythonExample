#define MAXCMDLINELEN       255
#define PROC_ENVPROCID      "PROC_ID=%d"
#define MAXPROCIDLEN	(8 + 5)
#define PROC_DFLT_TIMEOUT   10000
#define PWR_TIMEOUT	 500
#define EXTEND	      "_EXT_END"
#define DSP_CACHE_LINE 128
#define BUFMODE_MASK	(3 << 14)
#define RBUF		0x4000
#define WBUF		0x8000
extern struct device *bridge;
struct proc_object ;
static u32 refs;
DEFINE_MUTEX(proc_lock);
static int proc_monitor(struct proc_object *proc_obj);
static s32 get_envp_count(char **envp);
static char **prepend_envp(char **new_envp, char **envp, s32 envp_elems,
s32 cnew_envp, char *sz_var);
static struct dmm_map_object *add_mapping_info(struct process_context *pr_ctxt,
u32 mpu_addr, u32 dsp_addr, u32 size)
static int match_exact_map_obj(struct dmm_map_object *map_obj,
u32 dsp_addr, u32 size)
static void remove_mapping_information(struct process_context *pr_ctxt,
u32 dsp_addr, u32 size)
static int match_containing_map_obj(struct dmm_map_object *map_obj,
u32 mpu_addr, u32 size)
static struct dmm_map_object *find_containing_mapping(
struct process_context *pr_ctxt,
u32 mpu_addr, u32 size)
static int find_first_page_in_cache(struct dmm_map_object *map_obj,
unsigned long mpu_addr)
static inline struct page *get_mapping_page(struct dmm_map_object *map_obj,
int pg_i)
int
proc_attach(u32 processor_id,
const struct dsp_processorattrin *attr_in,
void **ph_processor, struct process_context *pr_ctxt)
static int get_exec_file(struct cfg_devnode *dev_node_obj,
struct dev_object *hdev_obj,
u32 size, char *exec_file)
int proc_auto_start(struct cfg_devnode *dev_node_obj,
struct dev_object *hdev_obj)
int proc_ctrl(void *hprocessor, u32 dw_cmd, struct dsp_cbdata * arg)
int proc_detach(struct process_context *pr_ctxt)
int proc_enum_nodes(void *hprocessor, void **node_tab,
u32 node_tab_size, u32 *pu_num_nodes,
u32 *pu_allocated)
static int build_dma_sg(struct dmm_map_object *map_obj, unsigned long start,
ssize_t len, int pg_i)
static int memory_regain_ownership(struct dmm_map_object *map_obj,
unsigned long start, ssize_t len, enum dma_data_direction dir)
static int memory_give_ownership(struct dmm_map_object *map_obj,
unsigned long start, ssize_t len, enum dma_data_direction dir)
int proc_begin_dma(void *hprocessor, void *pmpu_addr, u32 ul_size,
enum dma_data_direction dir)
int proc_end_dma(void *hprocessor, void *pmpu_addr, u32 ul_size,
enum dma_data_direction dir)
int proc_flush_memory(void *hprocessor, void *pmpu_addr,
u32 ul_size, u32 ul_flags)
int proc_invalidate_memory(void *hprocessor, void *pmpu_addr, u32 size)
int proc_get_resource_info(void *hprocessor, u32 resource_type,
struct dsp_resourceinfo *resource_info,
u32 resource_info_size)
void proc_exit(void)
int proc_get_dev_object(void *hprocessor,
struct dev_object **device_obj)
int proc_get_state(void *hprocessor,
struct dsp_processorstate *proc_state_obj,
u32 state_info_size)
int proc_get_trace(void *hprocessor, u8 * pbuf, u32 max_size)
bool proc_init(void)
int proc_load(void *hprocessor, const s32 argc_index,
const char **user_args, const char **user_envp)
int proc_map(void *hprocessor, void *pmpu_addr, u32 ul_size,
void *req_addr, void **pp_map_addr, u32 ul_map_attr,
struct process_context *pr_ctxt)
int proc_register_notify(void *hprocessor, u32 event_mask,
u32 notify_type, struct dsp_notification
* hnotification)
int proc_reserve_memory(void *hprocessor, u32 ul_size,
void **pp_rsv_addr,
struct process_context *pr_ctxt)
int proc_start(void *hprocessor)
int proc_stop(void *hprocessor)
int proc_un_map(void *hprocessor, void *map_addr,
struct process_context *pr_ctxt)
int proc_un_reserve_memory(void *hprocessor, void *prsv_addr,
struct process_context *pr_ctxt)
static int proc_monitor(struct proc_object *proc_obj)
static s32 get_envp_count(char **envp)
static char **prepend_envp(char **new_envp, char **envp, s32 envp_elems,
s32 cnew_envp, char *sz_var)
int proc_notify_clients(void *proc, u32 events)
int proc_notify_all_clients(void *proc, u32 events)
int proc_get_processor_id(void *proc, u32 * proc_id)
