#define DRV_MODULE_NAME		"ldc"
#define PFX DRV_MODULE_NAME	": "
#define DRV_MODULE_VERSION	"1.1"
#define DRV_MODULE_RELDATE	"July 22, 2008"
static char version[] __devinitdata =
DRV_MODULE_NAME ".c:v" DRV_MODULE_VERSION " (" DRV_MODULE_RELDATE ")\n";
#define LDC_PACKET_SIZE		64
struct ldc_packet ;
struct ldc_version ;
static struct ldc_version ver_arr[] = ;
#define LDC_DEFAULT_MTU			(4 * LDC_PACKET_SIZE)
#define LDC_DEFAULT_NUM_ENTRIES		(PAGE_SIZE / LDC_PACKET_SIZE)
struct ldc_channel;
struct ldc_mode_ops ;
static const struct ldc_mode_ops raw_ops;
static const struct ldc_mode_ops nonraw_ops;
static const struct ldc_mode_ops stream_ops;
int ldom_domaining_enabled;
struct ldc_iommu ;
struct ldc_channel ;
#define ldcdbg(TYPE, f, a...) \
do  while (0)
static const char *state_to_str(u8 state)
static void ldc_set_state(struct ldc_channel *lp, u8 state)
static unsigned long __advance(unsigned long off, unsigned long num_entries)
static unsigned long rx_advance(struct ldc_channel *lp, unsigned long off)
static unsigned long tx_advance(struct ldc_channel *lp, unsigned long off)
static struct ldc_packet *handshake_get_tx_packet(struct ldc_channel *lp,
unsigned long *new_tail)
static unsigned long head_for_data(struct ldc_channel *lp)
static int tx_has_space_for(struct ldc_channel *lp, unsigned int size)
static struct ldc_packet *data_get_tx_packet(struct ldc_channel *lp,
unsigned long *new_tail)
static int set_tx_tail(struct ldc_channel *lp, unsigned long tail)
static int __set_rx_head(struct ldc_channel *lp, unsigned long head)
static int send_tx_packet(struct ldc_channel *lp,
struct ldc_packet *p,
unsigned long new_tail)
static struct ldc_packet *handshake_compose_ctrl(struct ldc_channel *lp,
u8 stype, u8 ctrl,
void *data, int dlen,
unsigned long *new_tail)
static int start_handshake(struct ldc_channel *lp)
static int send_version_nack(struct ldc_channel *lp,
u16 major, u16 minor)
static int send_version_ack(struct ldc_channel *lp,
struct ldc_version *vp)
static int send_rts(struct ldc_channel *lp)
static int send_rtr(struct ldc_channel *lp)
static int send_rdx(struct ldc_channel *lp)
static int send_data_nack(struct ldc_channel *lp, struct ldc_packet *data_pkt)
static int ldc_abort(struct ldc_channel *lp)
static struct ldc_version *find_by_major(u16 major)
static int process_ver_info(struct ldc_channel *lp, struct ldc_version *vp)
static int process_ver_ack(struct ldc_channel *lp, struct ldc_version *vp)
static int process_ver_nack(struct ldc_channel *lp, struct ldc_version *vp)
static int process_version(struct ldc_channel *lp,
struct ldc_packet *p)
static int process_rts(struct ldc_channel *lp,
struct ldc_packet *p)
static int process_rtr(struct ldc_channel *lp,
struct ldc_packet *p)
static int rx_seq_ok(struct ldc_channel *lp, u32 seqid)
static int process_rdx(struct ldc_channel *lp,
struct ldc_packet *p)
static int process_control_frame(struct ldc_channel *lp,
struct ldc_packet *p)
static int process_error_frame(struct ldc_channel *lp,
struct ldc_packet *p)
static int process_data_ack(struct ldc_channel *lp,
struct ldc_packet *ack)
static void send_events(struct ldc_channel *lp, unsigned int event_mask)
static irqreturn_t ldc_rx(int irq, void *dev_id)
static irqreturn_t ldc_tx(int irq, void *dev_id)
static HLIST_HEAD(ldc_channel_list);
static int __ldc_channel_exists(unsigned long id)
static int alloc_queue(const char *name, unsigned long num_entries,
struct ldc_packet **base, unsigned long *ra)
static void free_queue(unsigned long num_entries, struct ldc_packet *q)
#define LDC_IOTABLE_SIZE	(8 * 1024)
static int ldc_iommu_init(struct ldc_channel *lp)
static void ldc_iommu_release(struct ldc_channel *lp)
struct ldc_channel *ldc_alloc(unsigned long id,
const struct ldc_channel_config *cfgp,
void *event_arg)
EXPORT_SYMBOL(ldc_alloc);
void ldc_free(struct ldc_channel *lp)
EXPORT_SYMBOL(ldc_free);
int ldc_bind(struct ldc_channel *lp, const char *name)
EXPORT_SYMBOL(ldc_bind);
int ldc_connect(struct ldc_channel *lp)
EXPORT_SYMBOL(ldc_connect);
int ldc_disconnect(struct ldc_channel *lp)
EXPORT_SYMBOL(ldc_disconnect);
int ldc_state(struct ldc_channel *lp)
EXPORT_SYMBOL(ldc_state);
static int write_raw(struct ldc_channel *lp, const void *buf, unsigned int size)
static int read_raw(struct ldc_channel *lp, void *buf, unsigned int size)
static const struct ldc_mode_ops raw_ops = ;
static int write_nonraw(struct ldc_channel *lp, const void *buf,
unsigned int size)
static int rx_bad_seq(struct ldc_channel *lp, struct ldc_packet *p,
struct ldc_packet *first_frag)
static int data_ack_nack(struct ldc_channel *lp, struct ldc_packet *p)
static int rx_data_wait(struct ldc_channel *lp, unsigned long cur_head)
static int rx_set_head(struct ldc_channel *lp, unsigned long head)
static void send_data_ack(struct ldc_channel *lp)
static int read_nonraw(struct ldc_channel *lp, void *buf, unsigned int size)
static const struct ldc_mode_ops nonraw_ops = ;
static int write_stream(struct ldc_channel *lp, const void *buf,
unsigned int size)
static int read_stream(struct ldc_channel *lp, void *buf, unsigned int size)
static const struct ldc_mode_ops stream_ops = ;
int ldc_write(struct ldc_channel *lp, const void *buf, unsigned int size)
EXPORT_SYMBOL(ldc_write);
int ldc_read(struct ldc_channel *lp, void *buf, unsigned int size)
EXPORT_SYMBOL(ldc_read);
static long arena_alloc(struct ldc_iommu *iommu, unsigned long npages)
#define COOKIE_PGSZ_CODE	0xf000000000000000ULL
#define COOKIE_PGSZ_CODE_SHIFT	60ULL
static u64 pagesize_code(void)
static u64 make_cookie(u64 index, u64 pgsz_code, u64 page_offset)
static u64 cookie_to_index(u64 cookie, unsigned long *shift)
static struct ldc_mtable_entry *alloc_npages(struct ldc_iommu *iommu,
unsigned long npages)
static u64 perm_to_mte(unsigned int map_perm)
static int pages_in_region(unsigned long base, long len)
struct cookie_state ;
static void fill_cookies(struct cookie_state *sp, unsigned long pa,
unsigned long off, unsigned long len)
static int sg_count_one(struct scatterlist *sg)
static int sg_count_pages(struct scatterlist *sg, int num_sg)
int ldc_map_sg(struct ldc_channel *lp,
struct scatterlist *sg, int num_sg,
struct ldc_trans_cookie *cookies, int ncookies,
unsigned int map_perm)
EXPORT_SYMBOL(ldc_map_sg);
int ldc_map_single(struct ldc_channel *lp,
void *buf, unsigned int len,
struct ldc_trans_cookie *cookies, int ncookies,
unsigned int map_perm)
EXPORT_SYMBOL(ldc_map_single);
static void free_npages(unsigned long id, struct ldc_iommu *iommu,
u64 cookie, u64 size)
void ldc_unmap(struct ldc_channel *lp, struct ldc_trans_cookie *cookies,
int ncookies)
EXPORT_SYMBOL(ldc_unmap);
int ldc_copy(struct ldc_channel *lp, int copy_dir,
void *buf, unsigned int len, unsigned long offset,
struct ldc_trans_cookie *cookies, int ncookies)
EXPORT_SYMBOL(ldc_copy);
void *ldc_alloc_exp_dring(struct ldc_channel *lp, unsigned int len,
struct ldc_trans_cookie *cookies, int *ncookies,
unsigned int map_perm)
EXPORT_SYMBOL(ldc_alloc_exp_dring);
void ldc_free_exp_dring(struct ldc_channel *lp, void *buf, unsigned int len,
struct ldc_trans_cookie *cookies, int ncookies)
EXPORT_SYMBOL(ldc_free_exp_dring);
static int __init ldc_init(void)
core_initcall(ldc_init);
