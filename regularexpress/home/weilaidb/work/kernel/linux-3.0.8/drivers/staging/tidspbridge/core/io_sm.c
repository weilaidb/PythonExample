#define OUTPUTNOTREADY  0xffff
#define NOTENABLED      0xffff
#define EXTEND      "_EXT_END"
#define SWAP_WORD(x)     (x)
#define UL_PAGE_ALIGN_SIZE 0x10000
#define MAX_PM_REQS 32
#define MMU_FAULT_HEAD1 0xa5a5a5a5
#define MMU_FAULT_HEAD2 0x96969696
#define POLL_MAX 1000
#define MAX_MMU_DBGBUFF 10240
struct io_mgr ;
static void io_dispatch_pm(struct io_mgr *pio_mgr);
static void notify_chnl_complete(struct chnl_object *pchnl,
struct chnl_irp *chnl_packet_obj);
static void input_chnl(struct io_mgr *pio_mgr, struct chnl_object *pchnl,
u8 io_mode);
static void output_chnl(struct io_mgr *pio_mgr, struct chnl_object *pchnl,
u8 io_mode);
static void input_msg(struct io_mgr *pio_mgr, struct msg_mgr *hmsg_mgr);
static void output_msg(struct io_mgr *pio_mgr, struct msg_mgr *hmsg_mgr);
static u32 find_ready_output(struct chnl_mgr *chnl_mgr_obj,
struct chnl_object *pchnl, u32 mask);
static int register_shm_segs(struct io_mgr *hio_mgr,
struct cod_manager *cod_man,
u32 dw_gpp_base_pa);
static inline void set_chnl_free(struct shm *sm, u32 chnl)
static inline void set_chnl_busy(struct shm *sm, u32 chnl)
int bridge_io_create(struct io_mgr **io_man,
struct dev_object *hdev_obj,
const struct io_attrs *mgr_attrts)
int bridge_io_destroy(struct io_mgr *hio_mgr)
int bridge_io_on_loaded(struct io_mgr *hio_mgr)
u32 io_buf_size(struct io_mgr *hio_mgr)
void io_cancel_chnl(struct io_mgr *hio_mgr, u32 chnl)
static void io_dispatch_pm(struct io_mgr *pio_mgr)
void io_dpc(unsigned long ref_data)
int io_mbox_msg(struct notifier_block *self, unsigned long len, void *msg)
void io_request_chnl(struct io_mgr *io_manager, struct chnl_object *pchnl,
u8 io_mode, u16 *mbx_val)
void iosm_schedule(struct io_mgr *io_manager)
static u32 find_ready_output(struct chnl_mgr *chnl_mgr_obj,
struct chnl_object *pchnl, u32 mask)
static void input_chnl(struct io_mgr *pio_mgr, struct chnl_object *pchnl,
u8 io_mode)
static void input_msg(struct io_mgr *pio_mgr, struct msg_mgr *hmsg_mgr)
static void notify_chnl_complete(struct chnl_object *pchnl,
struct chnl_irp *chnl_packet_obj)
static void output_chnl(struct io_mgr *pio_mgr, struct chnl_object *pchnl,
u8 io_mode)
static void output_msg(struct io_mgr *pio_mgr, struct msg_mgr *hmsg_mgr)
static int register_shm_segs(struct io_mgr *hio_mgr,
struct cod_manager *cod_man,
u32 dw_gpp_base_pa)
int io_sh_msetting(struct io_mgr *hio_mgr, u8 desc, void *pargs)
int bridge_io_get_proc_load(struct io_mgr *hio_mgr,
struct dsp_procloadstat *proc_lstat)
#if defined(CONFIG_TIDSPBRIDGE_BACKTRACE) || defined(CONFIG_TIDSPBRIDGE_DEBUG)
void print_dsp_debug_trace(struct io_mgr *hio_mgr)
int print_dsp_trace_buffer(struct bridge_dev_context *hbridge_context)
int dump_dsp_stack(struct bridge_dev_context *bridge_context)
void dump_dl_modules(struct bridge_dev_context *bridge_context)
