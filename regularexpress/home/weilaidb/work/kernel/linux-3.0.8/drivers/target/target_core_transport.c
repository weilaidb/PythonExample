#define DEBUG_CDB_H(x...) printk(KERN_INFO x)
#define DEBUG_CDB_H(x...)
#define DEBUG_CMD_M(x...) printk(KERN_INFO x)
#define DEBUG_CMD_M(x...)
#define DEBUG_MEM(x...) printk(KERN_INFO x)
#define DEBUG_MEM(x...)
#define DEBUG_MEM2(x...) printk(KERN_INFO x)
#define DEBUG_MEM2(x...)
#define DEBUG_SC(x...) printk(KERN_INFO x)
#define DEBUG_SC(x...)
#define DEBUG_SO(x...) printk(KERN_INFO x)
#define DEBUG_SO(x...)
#define DEBUG_VOL(x...) printk(KERN_INFO x)
#define DEBUG_VOL(x...)
#define DEBUG_CS(x...) printk(KERN_INFO x)
#define DEBUG_CS(x...)
#define DEBUG_PT(x...) printk(KERN_INFO x)
#define DEBUG_PT(x...)
#define DEBUG_TS(x...) printk(KERN_INFO x)
#define DEBUG_TS(x...)
#define DEBUG_TRANSPORT_S(x...) printk(KERN_INFO x)
#define DEBUG_TRANSPORT_S(x...)
#define DEBUG_TF(x...) printk(KERN_INFO x)
#define DEBUG_TF(x...)
#define DEBUG_DO(x...) printk(KERN_INFO x)
#define DEBUG_DO(x...)
#define DEBUG_TSTATE(x...) printk(KERN_INFO x)
#define DEBUG_TSTATE(x...)
#define DEBUG_ST(x...) printk(KERN_INFO x)
#define DEBUG_ST(x...)
#define DEBUG_TT(x...) printk(KERN_INFO x)
#define DEBUG_TT(x...)
#define DEBUG_GRF(x...) printk(KERN_INFO x)
#define DEBUG_GRF(x...)
#define DEBUG_STA(x...) printk(KERN_INFO x)
#define DEBUG_STA(x...)
struct se_global *se_global;
static struct kmem_cache *se_cmd_cache;
static struct kmem_cache *se_sess_cache;
struct kmem_cache *se_tmr_req_cache;
struct kmem_cache *se_ua_cache;
struct kmem_cache *se_mem_cache;
struct kmem_cache *t10_pr_reg_cache;
struct kmem_cache *t10_alua_lu_gp_cache;
struct kmem_cache *t10_alua_lu_gp_mem_cache;
struct kmem_cache *t10_alua_tg_pt_gp_cache;
struct kmem_cache *t10_alua_tg_pt_gp_mem_cache;
typedef int (*map_func_t)(struct se_task *, u32);
static int transport_generic_write_pending(struct se_cmd *);
static int transport_processing_thread(void *);
static int __transport_execute_tasks(struct se_device *dev);
static void transport_complete_task_attr(struct se_cmd *cmd);
static void transport_direct_request_timeout(struct se_cmd *cmd);
static void transport_free_dev_tasks(struct se_cmd *cmd);
static u32 transport_generic_get_cdb_count(struct se_cmd *cmd,
unsigned long long starting_lba, u32 sectors,
enum dma_data_direction data_direction,
struct list_head *mem_list, int set_counts);
static int transport_generic_get_mem(struct se_cmd *cmd, u32 length,
u32 dma_size);
static int transport_generic_remove(struct se_cmd *cmd,
int release_to_pool, int session_reinstatement);
static int transport_get_sectors(struct se_cmd *cmd);
static struct list_head *transport_init_se_mem_list(void);
static int transport_map_sg_to_mem(struct se_cmd *cmd,
struct list_head *se_mem_list, void *in_mem,
u32 *se_mem_cnt);
static void transport_memcpy_se_mem_read_contig(struct se_cmd *cmd,
unsigned char *dst, struct list_head *se_mem_list);
static void transport_release_fe_cmd(struct se_cmd *cmd);
static void transport_remove_cmd_from_queue(struct se_cmd *cmd,
struct se_queue_obj *qobj);
static int transport_set_sense_codes(struct se_cmd *cmd, u8 asc, u8 ascq);
static void transport_stop_all_task_timers(struct se_cmd *cmd);
int init_se_global(void)
void release_se_global(void)
static struct scsi_index_table scsi_index_table;
void init_scsi_index_table(void)
u32 scsi_get_new_index(scsi_index_t type)
void transport_init_queue_obj(struct se_queue_obj *qobj)
EXPORT_SYMBOL(transport_init_queue_obj);
static int transport_subsystem_reqmods(void)
int transport_subsystem_check_init(void)
struct se_session *transport_init_session(void)
EXPORT_SYMBOL(transport_init_session);
void __transport_register_session(
struct se_portal_group *se_tpg,
struct se_node_acl *se_nacl,
struct se_session *se_sess,
void *fabric_sess_ptr)
EXPORT_SYMBOL(__transport_register_session);
void transport_register_session(
struct se_portal_group *se_tpg,
struct se_node_acl *se_nacl,
struct se_session *se_sess,
void *fabric_sess_ptr)
EXPORT_SYMBOL(transport_register_session);
void transport_deregister_session_configfs(struct se_session *se_sess)
EXPORT_SYMBOL(transport_deregister_session_configfs);
void transport_free_session(struct se_session *se_sess)
EXPORT_SYMBOL(transport_free_session);
void transport_deregister_session(struct se_session *se_sess)
EXPORT_SYMBOL(transport_deregister_session);
static void transport_all_task_dev_remove_state(struct se_cmd *cmd)
static int transport_cmd_check_stop(
struct se_cmd *cmd,
int transport_off,
u8 t_state)
static int transport_cmd_check_stop_to_fabric(struct se_cmd *cmd)
static void transport_lun_remove_cmd(struct se_cmd *cmd)
void transport_cmd_finish_abort(struct se_cmd *cmd, int remove)
void transport_cmd_finish_abort_tmr(struct se_cmd *cmd)
static int transport_add_cmd_to_queue(
struct se_cmd *cmd,
int t_state)
static struct se_queue_req *
__transport_get_qr_from_queue(struct se_queue_obj *qobj)
static struct se_queue_req *
transport_get_qr_from_queue(struct se_queue_obj *qobj)
static void transport_remove_cmd_from_queue(struct se_cmd *cmd,
struct se_queue_obj *qobj)
void transport_complete_sync_cache(struct se_cmd *cmd, int good)
EXPORT_SYMBOL(transport_complete_sync_cache);
void transport_complete_task(struct se_task *task, int success)
EXPORT_SYMBOL(transport_complete_task);
static inline int transport_add_task_check_sam_attr(
struct se_task *task,
struct se_task *task_prev,
struct se_device *dev)
static void __transport_add_task_to_execute_queue(
struct se_task *task,
struct se_task *task_prev,
struct se_device *dev)
static void transport_add_tasks_to_state_queue(struct se_cmd *cmd)
static void transport_add_tasks_from_cmd(struct se_cmd *cmd)
static struct se_task *
transport_get_task_from_execute_queue(struct se_device *dev)
void transport_remove_task_from_execute_queue(
struct se_task *task,
struct se_device *dev)
unsigned char *transport_dump_cmd_direction(struct se_cmd *cmd)
void transport_dump_dev_state(
struct se_device *dev,
char *b,
int *bl)
static void transport_release_all_cmds(struct se_device *dev)
void transport_dump_vpd_proto_id(
struct t10_vpd *vpd,
unsigned char *p_buf,
int p_buf_len)
void
transport_set_vpd_proto_id(struct t10_vpd *vpd, unsigned char *page_83)
EXPORT_SYMBOL(transport_set_vpd_proto_id);
int transport_dump_vpd_assoc(
struct t10_vpd *vpd,
unsigned char *p_buf,
int p_buf_len)
int transport_set_vpd_assoc(struct t10_vpd *vpd, unsigned char *page_83)
EXPORT_SYMBOL(transport_set_vpd_assoc);
int transport_dump_vpd_ident_type(
struct t10_vpd *vpd,
unsigned char *p_buf,
int p_buf_len)
int transport_set_vpd_ident_type(struct t10_vpd *vpd, unsigned char *page_83)
EXPORT_SYMBOL(transport_set_vpd_ident_type);
int transport_dump_vpd_ident(
struct t10_vpd *vpd,
unsigned char *p_buf,
int p_buf_len)
int
transport_set_vpd_ident(struct t10_vpd *vpd, unsigned char *page_83)
EXPORT_SYMBOL(transport_set_vpd_ident);
static void core_setup_task_attr_emulation(struct se_device *dev)
static void scsi_dump_inquiry(struct se_device *dev)
struct se_device *transport_add_device_to_core_hba(
struct se_hba *hba,
struct se_subsystem_api *transport,
struct se_subsystem_dev *se_dev,
u32 device_flags,
void *transport_dev,
struct se_dev_limits *dev_limits,
const char *inquiry_prod,
const char *inquiry_rev)
EXPORT_SYMBOL(transport_add_device_to_core_hba);
static inline void transport_generic_prepare_cdb(
unsigned char *cdb)
static struct se_task *
transport_generic_get_task(struct se_cmd *cmd,
enum dma_data_direction data_direction)
static int transport_generic_cmd_sequencer(struct se_cmd *, unsigned char *);
void transport_device_setup_cmd(struct se_cmd *cmd)
EXPORT_SYMBOL(transport_device_setup_cmd);
void transport_init_se_cmd(
struct se_cmd *cmd,
struct target_core_fabric_ops *tfo,
struct se_session *se_sess,
u32 data_length,
int data_direction,
int task_attr,
unsigned char *sense_buffer)
EXPORT_SYMBOL(transport_init_se_cmd);
static int transport_check_alloc_task_attr(struct se_cmd *cmd)
void transport_free_se_cmd(
struct se_cmd *se_cmd)
EXPORT_SYMBOL(transport_free_se_cmd);
static void transport_generic_wait_for_tasks(struct se_cmd *, int, int);
int transport_generic_allocate_tasks(
struct se_cmd *cmd,
unsigned char *cdb)
EXPORT_SYMBOL(transport_generic_allocate_tasks);
int transport_generic_handle_cdb(
struct se_cmd *cmd)
EXPORT_SYMBOL(transport_generic_handle_cdb);
int transport_generic_handle_cdb_map(
struct se_cmd *cmd)
EXPORT_SYMBOL(transport_generic_handle_cdb_map);
int transport_generic_handle_data(
struct se_cmd *cmd)
EXPORT_SYMBOL(transport_generic_handle_data);
int transport_generic_handle_tmr(
struct se_cmd *cmd)
EXPORT_SYMBOL(transport_generic_handle_tmr);
void transport_generic_free_cmd_intr(
struct se_cmd *cmd)
EXPORT_SYMBOL(transport_generic_free_cmd_intr);
static int transport_stop_tasks_for_cmd(struct se_cmd *cmd)
static void transport_failure_reset_queue_depth(struct se_device *dev)
static void transport_generic_request_failure(
struct se_cmd *cmd,
struct se_device *dev,
int complete,
int sc)
static void transport_direct_request_timeout(struct se_cmd *cmd)
static void transport_generic_request_timeout(struct se_cmd *cmd)
static int
transport_generic_allocate_buf(struct se_cmd *cmd, u32 data_length)
static inline u32 transport_lba_21(unsigned char *cdb)
static inline u32 transport_lba_32(unsigned char *cdb)
static inline unsigned long long transport_lba_64(unsigned char *cdb)
static inline unsigned long long transport_lba_64_ext(unsigned char *cdb)
static void transport_set_supported_SAM_opcode(struct se_cmd *se_cmd)
static void transport_task_timeout_handler(unsigned long data)
static void transport_start_task_timer(struct se_task *task)
void __transport_stop_task_timer(struct se_task *task, unsigned long *flags)
static void transport_stop_all_task_timers(struct se_cmd *cmd)
static inline int transport_tcq_window_closed(struct se_device *dev)
static inline int transport_execute_task_attr(struct se_cmd *cmd)
static int transport_execute_tasks(struct se_cmd *cmd)
static int __transport_execute_tasks(struct se_device *dev)
void transport_new_cmd_failure(struct se_cmd *se_cmd)
static void transport_nop_wait_for_tasks(struct se_cmd *, int, int);
static inline u32 transport_get_sectors_6(
unsigned char *cdb,
struct se_cmd *cmd,
int *ret)
static inline u32 transport_get_sectors_10(
unsigned char *cdb,
struct se_cmd *cmd,
int *ret)
static inline u32 transport_get_sectors_12(
unsigned char *cdb,
struct se_cmd *cmd,
int *ret)
static inline u32 transport_get_sectors_16(
unsigned char *cdb,
struct se_cmd *cmd,
int *ret)
static inline u32 transport_get_sectors_32(
unsigned char *cdb,
struct se_cmd *cmd,
int *ret)
static inline u32 transport_get_size(
u32 sectors,
unsigned char *cdb,
struct se_cmd *cmd)
unsigned char transport_asciihex_to_binaryhex(unsigned char val[2])
EXPORT_SYMBOL(transport_asciihex_to_binaryhex);
static void transport_xor_callback(struct se_cmd *cmd)
static int transport_get_sense_data(struct se_cmd *cmd)
static int transport_allocate_resources(struct se_cmd *cmd)
static int
transport_handle_reservation_conflict(struct se_cmd *cmd)
static int transport_generic_cmd_sequencer(
struct se_cmd *cmd,
unsigned char *cdb)
static inline void transport_release_tasks(struct se_cmd *);
static void transport_memcpy_write_contig(
struct se_cmd *cmd,
struct scatterlist *sg_d,
unsigned char *src)
static void transport_memcpy_read_contig(
struct se_cmd *cmd,
unsigned char *dst,
struct scatterlist *sg_s)
static void transport_memcpy_se_mem_read_contig(
struct se_cmd *cmd,
unsigned char *dst,
struct list_head *se_mem_list)
static void transport_complete_task_attr(struct se_cmd *cmd)
static void transport_generic_complete_ok(struct se_cmd *cmd)
static void transport_free_dev_tasks(struct se_cmd *cmd)
static inline void transport_free_pages(struct se_cmd *cmd)
static inline void transport_release_tasks(struct se_cmd *cmd)
static inline int transport_dec_and_check(struct se_cmd *cmd)
static void transport_release_fe_cmd(struct se_cmd *cmd)
static int transport_generic_remove(
struct se_cmd *cmd,
int release_to_pool,
int session_reinstatement)
int transport_generic_map_mem_to_cmd(
struct se_cmd *cmd,
struct scatterlist *mem,
u32 sg_mem_num,
struct scatterlist *mem_bidi_in,
u32 sg_mem_bidi_num)
EXPORT_SYMBOL(transport_generic_map_mem_to_cmd);
static inline long long transport_dev_end_lba(struct se_device *dev)
static int transport_get_sectors(struct se_cmd *cmd)
static int transport_new_cmd_obj(struct se_cmd *cmd)
static struct list_head *transport_init_se_mem_list(void)
static int
transport_generic_get_mem(struct se_cmd *cmd, u32 length, u32 dma_size)
u32 transport_calc_sg_num(
struct se_task *task,
struct se_mem *in_se_mem,
u32 task_offset)
static inline int transport_set_tasks_sectors_disk(
struct se_task *task,
struct se_device *dev,
unsigned long long lba,
u32 sectors,
int *max_sectors_set)
static inline int transport_set_tasks_sectors_non_disk(
struct se_task *task,
struct se_device *dev,
unsigned long long lba,
u32 sectors,
int *max_sectors_set)
static inline int transport_set_tasks_sectors(
struct se_task *task,
struct se_device *dev,
unsigned long long lba,
u32 sectors,
int *max_sectors_set)
static int transport_map_sg_to_mem(
struct se_cmd *cmd,
struct list_head *se_mem_list,
void *in_mem,
u32 *se_mem_cnt)
int transport_map_mem_to_sg(
struct se_task *task,
struct list_head *se_mem_list,
void *in_mem,
struct se_mem *in_se_mem,
struct se_mem **out_se_mem,
u32 *se_mem_cnt,
u32 *task_offset)
void transport_do_task_sg_chain(struct se_cmd *cmd)
EXPORT_SYMBOL(transport_do_task_sg_chain);
static int transport_do_se_mem_map(
struct se_device *dev,
struct se_task *task,
struct list_head *se_mem_list,
void *in_mem,
struct se_mem *in_se_mem,
struct se_mem **out_se_mem,
u32 *se_mem_cnt,
u32 *task_offset_in)
static u32 transport_generic_get_cdb_count(
struct se_cmd *cmd,
unsigned long long lba,
u32 sectors,
enum dma_data_direction data_direction,
struct list_head *mem_list,
int set_counts)
static int
transport_map_control_cmd_to_task(struct se_cmd *cmd)
static int transport_generic_new_cmd(struct se_cmd *cmd)
void transport_generic_process_write(struct se_cmd *cmd)
EXPORT_SYMBOL(transport_generic_process_write);
static int transport_generic_write_pending(struct se_cmd *cmd)
void transport_release_cmd_to_pool(struct se_cmd *cmd)
EXPORT_SYMBOL(transport_release_cmd_to_pool);
void transport_generic_free_cmd(
struct se_cmd *cmd,
int wait_for_tasks,
int release_to_pool,
int session_reinstatement)
EXPORT_SYMBOL(transport_generic_free_cmd);
static void transport_nop_wait_for_tasks(
struct se_cmd *cmd,
int remove_cmd,
int session_reinstatement)
static int transport_lun_wait_for_tasks(struct se_cmd *cmd, struct se_lun *lun)
#define DEBUG_CLEAR_L(x...) printk(KERN_INFO x)
#define DEBUG_CLEAR_L(x...)
static void __transport_clear_lun_from_sessions(struct se_lun *lun)
static int transport_clear_lun_thread(void *p)
int transport_clear_lun_from_sessions(struct se_lun *lun)
static void transport_generic_wait_for_tasks(
struct se_cmd *cmd,
int remove_cmd,
int session_reinstatement)
static int transport_get_sense_codes(
struct se_cmd *cmd,
u8 *asc,
u8 *ascq)
static int transport_set_sense_codes(
struct se_cmd *cmd,
u8 asc,
u8 ascq)
int transport_send_check_condition_and_sense(
struct se_cmd *cmd,
u8 reason,
int from_transport)
EXPORT_SYMBOL(transport_send_check_condition_and_sense);
int transport_check_aborted_status(struct se_cmd *cmd, int send_status)
EXPORT_SYMBOL(transport_check_aborted_status);
void transport_send_task_abort(struct se_cmd *cmd)
int transport_generic_do_tmr(struct se_cmd *cmd)
static struct se_task *
transport_get_task_from_state_list(struct se_device *dev)
static void transport_processing_shutdown(struct se_device *dev)
static int transport_processing_thread(void *param)
