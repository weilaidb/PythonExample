static char const ID_sccs[] = "@(#)hwmtm.c	1.40 99/05/31 (C) SK" ;
#define	HWMTM
#define	FDDI
static	SMbuf *mb_start = 0 ;
static	SMbuf *mb_free = 0 ;
static	int mb_init = FALSE ;
static	int call_count = 0 ;
extern	struct smt_debug	debug ;
extern	u_char	offDepth ;
extern	u_char	force_irq_pending ;
static void queue_llc_rx(struct s_smc *smc, SMbuf *mb);
static void smt_to_llc(struct s_smc *smc, SMbuf *mb);
static void init_txd_ring(struct s_smc *smc);
static void init_rxd_ring(struct s_smc *smc);
static void queue_txd_mb(struct s_smc *smc, SMbuf *mb);
static u_long init_descr_ring(struct s_smc *smc, union s_fp_descr volatile *start,
int count);
static u_long repair_txd_ring(struct s_smc *smc, struct s_smt_tx_queue *queue);
static u_long repair_rxd_ring(struct s_smc *smc, struct s_smt_rx_queue *queue);
static SMbuf* get_llc_rx(struct s_smc *smc);
static SMbuf* get_txd_mb(struct s_smc *smc);
static void mac_drv_clear_txd(struct s_smc *smc);
extern void* mac_drv_get_space(struct s_smc *smc, unsigned int size);
extern void* mac_drv_get_desc_mem(struct s_smc *smc, unsigned int size);
extern void mac_drv_fill_rxd(struct s_smc *smc);
extern void mac_drv_tx_complete(struct s_smc *smc,
volatile struct s_smt_fp_txd *txd);
extern void mac_drv_rx_complete(struct s_smc *smc,
volatile struct s_smt_fp_rxd *rxd,
int frag_count, int len);
extern void mac_drv_requeue_rxd(struct s_smc *smc,
volatile struct s_smt_fp_rxd *rxd,
int frag_count);
extern void mac_drv_clear_rxd(struct s_smc *smc,
volatile struct s_smt_fp_rxd *rxd, int frag_count);
extern void hwm_cpy_rxd2mb(void);
extern void hwm_cpy_txd2mb(void);
extern void mac_drv_all_receives_complete(void);
extern u_long mac_drv_virt2phys(struct s_smc *smc, void *virt);
extern u_long dma_master(struct s_smc *smc, void *virt, int len, int flag);
extern void post_proc(void);
extern void dma_complete(struct s_smc *smc, volatile union s_fp_descr *descr,
int flag);
extern int mac_drv_rx_init(struct s_smc *smc, int len, int fc, char *look_ahead,
int la_len);
void process_receive(struct s_smc *smc);
void fddi_isr(struct s_smc *smc);
void smt_free_mbuf(struct s_smc *smc, SMbuf *mb);
void init_driver_fplus(struct s_smc *smc);
void mac_drv_rx_mode(struct s_smc *smc, int mode);
void init_fddi_driver(struct s_smc *smc, u_char *mac_addr);
void mac_drv_clear_tx_queue(struct s_smc *smc);
void mac_drv_clear_rx_queue(struct s_smc *smc);
void hwm_tx_frag(struct s_smc *smc, char far *virt, u_long phys, int len,
int frame_status);
void hwm_rx_frag(struct s_smc *smc, char far *virt, u_long phys, int len,
int frame_status);
int mac_drv_init(struct s_smc *smc);
int hwm_tx_init(struct s_smc *smc, u_char fc, int frag_count, int frame_len,
int frame_status);
u_int mac_drv_check_space(void);
SMbuf* smt_get_mbuf(struct s_smc *smc);
void mac_drv_debug_lev(void);
#define UNUSED(x)	(x) = (x)
#define UNUSED(x)
#define MA		smc->hw.fddi_canon_addr.a
#define	GROUP_ADDR_BIT	0x01
#define	MA		smc->hw.fddi_home_addr.a
#define	GROUP_ADDR_BIT	0x80
#define RXD_TXD_COUNT	(HWM_ASYNC_TXD_COUNT+HWM_SYNC_TXD_COUNT+\
SMT_R1_RXD_COUNT+SMT_R2_RXD_COUNT)
#define	EXT_VIRT_MEM	((RXD_TXD_COUNT+1)*sizeof(struct s_smt_fp_txd) +\
MAX_MBUF*sizeof(SMbuf))
#define	EXT_VIRT_MEM_2	((RXD_TXD_COUNT+1)*sizeof(struct s_smt_fp_txd))
#define	EXT_VIRT_MEM	((RXD_TXD_COUNT+1)*sizeof(struct s_smt_fp_txd))
#if	defined(NDIS_OS2) || defined(ODI2)
#define CR_READ(var)	((var) & 0xffff0000 | ((var) & 0xffff))
#define CR_READ(var)	(__le32)(var)
#define IMASK_SLOW	(IS_PLINT1 | IS_PLINT2 | IS_TIMINT | IS_TOKEN | \
IS_MINTR1 | IS_MINTR2 | IS_MINTR3 | IS_R1_P | \
IS_R1_C | IS_XA_C | IS_XS_C)
u_int mac_drv_check_space(void)
int mac_drv_init(struct s_smc *smc)
void init_driver_fplus(struct s_smc *smc)
static u_long init_descr_ring(struct s_smc *smc,
union s_fp_descr volatile *start,
int count)
static void init_txd_ring(struct s_smc *smc)
static void init_rxd_ring(struct s_smc *smc)
void init_fddi_driver(struct s_smc *smc, u_char *mac_addr)
SMbuf *smt_get_mbuf(struct s_smc *smc)
void smt_free_mbuf(struct s_smc *smc, SMbuf *mb)
void mac_drv_repair_descr(struct s_smc *smc)
static u_long repair_txd_ring(struct s_smc *smc, struct s_smt_tx_queue *queue)
static u_long repair_rxd_ring(struct s_smc *smc, struct s_smt_rx_queue *queue)
void fddi_isr(struct s_smc *smc)
void mac_drv_rx_mode(struct s_smc *smc, int mode)
void process_receive(struct s_smc *smc)
static void smt_to_llc(struct s_smc *smc, SMbuf *mb)
void hwm_rx_frag(struct s_smc *smc, char far *virt, u_long phys, int len,
int frame_status)
void mac_drv_clear_rx_queue(struct s_smc *smc)
int hwm_tx_init(struct s_smc *smc, u_char fc, int frag_count, int frame_len,
int frame_status)
void hwm_tx_frag(struct s_smc *smc, char far *virt, u_long phys, int len,
int frame_status)
static void queue_llc_rx(struct s_smc *smc, SMbuf *mb)
static SMbuf *get_llc_rx(struct s_smc *smc)
static void queue_txd_mb(struct s_smc *smc, SMbuf *mb)
static SMbuf *get_txd_mb(struct s_smc *smc)
void smt_send_mbuf(struct s_smc *smc, SMbuf *mb, int fc)
static void mac_drv_clear_txd(struct s_smc *smc)
void mac_drv_clear_tx_queue(struct s_smc *smc)
void mac_drv_debug_lev(struct s_smc *smc, int flag, int lev)
