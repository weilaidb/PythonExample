#define SYM_HIPD_H
#define DEBUG_ALLOC	(0x0001)
#define DEBUG_PHASE	(0x0002)
#define DEBUG_POLL	(0x0004)
#define DEBUG_QUEUE	(0x0008)
#define DEBUG_RESULT	(0x0010)
#define DEBUG_SCATTER	(0x0020)
#define DEBUG_SCRIPT	(0x0040)
#define DEBUG_TINY	(0x0080)
#define DEBUG_TIMING	(0x0100)
#define DEBUG_NEGO	(0x0200)
#define DEBUG_TAGS	(0x0400)
#define DEBUG_POINTER	(0x0800)
#define DEBUG_FLAGS	(0x0000)
#define sym_verbose	(np->verbose)
#define	assert(expression)
#if	SYM_CONF_MAX_TAG_ORDER > 8
#error	"more than 256 tags per logical unit not allowed."
#define	SYM_CONF_MAX_TASK	(1<<SYM_CONF_MAX_TAG_ORDER)
#define	SYM_CONF_MAX_TAG	SYM_CONF_MAX_TASK
#if	SYM_CONF_MAX_TAG > SYM_CONF_MAX_TASK
#undef	SYM_CONF_MAX_TAG
#define	SYM_CONF_MAX_TAG	SYM_CONF_MAX_TASK
#define NO_TAG	(256)
#if	SYM_CONF_MAX_TARGET > 16
#error	"more than 16 targets not allowed."
#if	SYM_CONF_MAX_LUN > 64
#error	"more than 64 logical units per target not allowed."
#define	SYM_CONF_MIN_ASYNC (40)
#define SYM_MEM_WARN	1
#define SYM_MEM_PAGE_ORDER 0
#define SYM_MEM_CLUSTER_SHIFT	(PAGE_SHIFT+SYM_MEM_PAGE_ORDER)
#define SYM_MEM_FREE_UNUSED
#define SYM_MEM_SHIFT	4
#define SYM_MEM_CLUSTER_SIZE	(1UL << SYM_MEM_CLUSTER_SHIFT)
#define SYM_MEM_CLUSTER_MASK	(SYM_MEM_CLUSTER_SIZE-1)
#define	SYM_CONF_MAX_QUEUE (SYM_CONF_MAX_START+2)
#define	SYM_CONF_MAX_QUEUE (7*SYM_CONF_MAX_TASK+2)
#define	SYM_CONF_MAX_START (SYM_CONF_MAX_QUEUE-2)
#if	SYM_CONF_MAX_QUEUE > SYM_MEM_CLUSTER_SIZE/8
#undef	SYM_CONF_MAX_QUEUE
#define	SYM_CONF_MAX_QUEUE (SYM_MEM_CLUSTER_SIZE/8)
#undef	SYM_CONF_MAX_START
#define	SYM_CONF_MAX_START (SYM_CONF_MAX_QUEUE-2)
#define MAX_QUEUE	SYM_CONF_MAX_QUEUE
#define INB_OFF(np, o)		ioread8(np->s.ioaddr + (o))
#define INW_OFF(np, o)		ioread16(np->s.ioaddr + (o))
#define INL_OFF(np, o)		ioread32(np->s.ioaddr + (o))
#define OUTB_OFF(np, o, val)	iowrite8((val), np->s.ioaddr + (o))
#define OUTW_OFF(np, o, val)	iowrite16((val), np->s.ioaddr + (o))
#define OUTL_OFF(np, o, val)	iowrite32((val), np->s.ioaddr + (o))
#define INB(np, r)		INB_OFF(np, offsetof(struct sym_reg, r))
#define INW(np, r)		INW_OFF(np, offsetof(struct sym_reg, r))
#define INL(np, r)		INL_OFF(np, offsetof(struct sym_reg, r))
#define OUTB(np, r, v)		OUTB_OFF(np, offsetof(struct sym_reg, r), (v))
#define OUTW(np, r, v)		OUTW_OFF(np, offsetof(struct sym_reg, r), (v))
#define OUTL(np, r, v)		OUTL_OFF(np, offsetof(struct sym_reg, r), (v))
#define OUTONB(np, r, m)	OUTB(np, r, INB(np, r) | (m))
#define OUTOFFB(np, r, m)	OUTB(np, r, INB(np, r) & ~(m))
#define OUTONW(np, r, m)	OUTW(np, r, INW(np, r) | (m))
#define OUTOFFW(np, r, m)	OUTW(np, r, INW(np, r) & ~(m))
#define OUTONL(np, r, m)	OUTL(np, r, INL(np, r) | (m))
#define OUTOFFL(np, r, m)	OUTL(np, r, INL(np, r) & ~(m))
#define OUTL_DSP(np, v)				\
do  while (0)
#define OUTONB_STD()				\
do  while (0)
#define HS_IDLE		(0)
#define HS_BUSY		(1)
#define HS_NEGOTIATE	(2)
#define HS_DISCONNECT	(3)
#define HS_WAIT		(4)
#define HS_DONEMASK	(0x80)
#define HS_COMPLETE	(4|HS_DONEMASK)
#define HS_SEL_TIMEOUT	(5|HS_DONEMASK)
#define HS_UNEXPECTED	(6|HS_DONEMASK)
#define HS_COMP_ERR	(7|HS_DONEMASK)
#define	SIR_BAD_SCSI_STATUS	(1)
#define	SIR_SEL_ATN_NO_MSG_OUT	(2)
#define	SIR_MSG_RECEIVED	(3)
#define	SIR_MSG_WEIRD		(4)
#define	SIR_NEGO_FAILED		(5)
#define	SIR_NEGO_PROTO		(6)
#define	SIR_SCRIPT_STOPPED	(7)
#define	SIR_REJECT_TO_SEND	(8)
#define	SIR_SWIDE_OVERRUN	(9)
#define	SIR_SODL_UNDERRUN	(10)
#define	SIR_RESEL_NO_MSG_IN	(11)
#define	SIR_RESEL_NO_IDENTIFY	(12)
#define	SIR_RESEL_BAD_LUN	(13)
#define	SIR_TARGET_SELECTED	(14)
#define	SIR_RESEL_BAD_I_T_L	(15)
#define	SIR_RESEL_BAD_I_T_L_Q	(16)
#define	SIR_ABORT_SENT		(17)
#define	SIR_RESEL_ABORTED	(18)
#define	SIR_MSG_OUT_DONE	(19)
#define	SIR_COMPLETE_ERROR	(20)
#define	SIR_DATA_OVERRUN	(21)
#define	SIR_BAD_PHASE		(22)
#if	SYM_CONF_DMA_ADDRESSING_MODE == 2
#define	SIR_DMAP_DIRTY		(23)
#define	SIR_MAX			(23)
#define	SIR_MAX			(22)
#define	XE_EXTRA_DATA	(1)
#define	XE_BAD_PHASE	(1<<1)
#define	XE_PARITY_ERR	(1<<2)
#define	XE_SODL_UNRUN	(1<<3)
#define	XE_SWIDE_OVRUN	(1<<4)
#define NS_SYNC		(1)
#define NS_WIDE		(2)
#define NS_PPR		(3)
#define CCB_HASH_SHIFT		8
#define CCB_HASH_SIZE		(1UL << CCB_HASH_SHIFT)
#define CCB_HASH_MASK		(CCB_HASH_SIZE-1)
#if 1
#define CCB_HASH_CODE(dsa)	\
(((dsa) >> (_LGRU16_(sizeof(struct sym_ccb)))) & CCB_HASH_MASK)
#define CCB_HASH_CODE(dsa)	(((dsa) >> 9) & CCB_HASH_MASK)
#if	SYM_CONF_DMA_ADDRESSING_MODE == 2
#define SYM_DMAP_SHIFT	(4)
#define SYM_DMAP_SIZE	(1u<<SYM_DMAP_SHIFT)
#define SYM_DMAP_MASK	(SYM_DMAP_SIZE-1)
#define SYM_DISC_ENABLED	(1)
#define SYM_TAGS_ENABLED	(1<<1)
#define SYM_SCAN_BOOT_DISABLED	(1<<2)
#define SYM_SCAN_LUNS_DISABLED	(1<<3)
#define SYM_AVOID_BUS_RESET	(1)
#define SYM_SNOOP_TIMEOUT (10000000)
#define BUS_8_BIT	0
#define BUS_16_BIT	1
struct sym_trans ;
struct sym_tcbh ;
struct sym_tcb ;
struct sym_lcbh ;
struct sym_lcb ;
struct sym_actscr ;
struct sym_pmc ;
#if SYM_CONF_MAX_LUN <= 1
#define sym_lp(tp, lun) (!lun) ? (tp)->lun0p : NULL
#define sym_lp(tp, lun) \
(!lun) ? (tp)->lun0p : (tp)->lunmp ? (tp)->lunmp[(lun)] : NULL
#define  HX_REG	scr0
#define  HX_PRT	nc_scr0
#define  HS_REG	scr1
#define  HS_PRT	nc_scr1
#define  SS_REG	scr2
#define  SS_PRT	nc_scr2
#define  HF_REG	scr3
#define  HF_PRT	nc_scr3
#define  host_xflags   phys.head.status[0]
#define  host_status   phys.head.status[1]
#define  ssss_status   phys.head.status[2]
#define  host_flags    phys.head.status[3]
#define HF_IN_PM0	1u
#define HF_IN_PM1	(1u<<1)
#define HF_ACT_PM	(1u<<2)
#define HF_DP_SAVED	(1u<<3)
#define HF_SENSE	(1u<<4)
#define HF_EXT_ERR	(1u<<5)
#define HF_DATA_IN	(1u<<6)
#define HF_HINT_IARB	(1u<<7)
#if	SYM_CONF_DMA_ADDRESSING_MODE == 2
#define	HX_DMAP_DIRTY	(1u<<7)
struct sym_ccbh ;
#if	SYM_CONF_GENERIC_SUPPORT
#define sym_set_script_dp(np, cp, dp)				\
do  while (0)
#define sym_get_script_dp(np, cp) 				\
scr_to_cpu((np->features & FE_LDSTR) ?			\
cp->phys.head.lastp : np->ccb_head.lastp)
#define sym_set_script_dp(np, cp, dp)				\
do  while (0)
#define sym_get_script_dp(np, cp) (cp->phys.head.lastp)
struct sym_dsb ;
struct sym_ccb ;
#define CCB_BA(cp,lbl)	cpu_to_scr(cp->ccb_ba + offsetof(struct sym_ccb, lbl))
typedef struct device *m_pool_ident_t;
struct sym_hcb ;
#if SYM_CONF_DMA_ADDRESSING_MODE == 0
#define use_dac(np)	0
#define set_dac(np)	do  while (0)
#define use_dac(np)	(np)->use_dac
#define set_dac(np)	(np)->use_dac = 1
#define HCB_BA(np, lbl)	(np->hcb_ba + offsetof(struct sym_hcb, lbl))
struct sym_fw * sym_find_firmware(struct sym_chip *chip);
void sym_fw_bind_script(struct sym_hcb *np, u32 *start, int len);
char *sym_driver_name(void);
void sym_print_xerr(struct scsi_cmnd *cmd, int x_status);
int sym_reset_scsi_bus(struct sym_hcb *np, int enab_int);
struct sym_chip *sym_lookup_chip_table(u_short device_id, u_char revision);
void sym_start_next_ccbs(struct sym_hcb *np, struct sym_lcb *lp, int maxn);
void sym_put_start_queue(struct sym_hcb *np, struct sym_ccb *cp);
void sym_start_up(struct Scsi_Host *, int reason);
irqreturn_t sym_interrupt(struct Scsi_Host *);
int sym_clear_tasks(struct sym_hcb *np, int cam_status, int target, int lun, int task);
struct sym_ccb *sym_get_ccb(struct sym_hcb *np, struct scsi_cmnd *cmd, u_char tag_order);
void sym_free_ccb(struct sym_hcb *np, struct sym_ccb *cp);
struct sym_lcb *sym_alloc_lcb(struct sym_hcb *np, u_char tn, u_char ln);
int sym_free_lcb(struct sym_hcb *np, u_char tn, u_char ln);
int sym_queue_scsiio(struct sym_hcb *np, struct scsi_cmnd *csio, struct sym_ccb *cp);
int sym_abort_scsiio(struct sym_hcb *np, struct scsi_cmnd *ccb, int timed_out);
int sym_reset_scsi_target(struct sym_hcb *np, int target);
void sym_hcb_free(struct sym_hcb *np);
int sym_hcb_attach(struct Scsi_Host *shost, struct sym_fw *fw, struct sym_nvram *nvram);
#if   SYM_CONF_DMA_ADDRESSING_MODE == 0
#define DMA_DAC_MASK	DMA_BIT_MASK(32)
#define sym_build_sge(np, data, badd, len)	\
do  while (0)
#elif SYM_CONF_DMA_ADDRESSING_MODE == 1
#define DMA_DAC_MASK	DMA_BIT_MASK(40)
#define sym_build_sge(np, data, badd, len)				\
do  while (0)
#elif SYM_CONF_DMA_ADDRESSING_MODE == 2
#define DMA_DAC_MASK	DMA_BIT_MASK(64)
int sym_lookup_dmap(struct sym_hcb *np, u32 h, int s);
static inline void
sym_build_sge(struct sym_hcb *np, struct sym_tblmove *data, u64 badd, int len)
#error "Unsupported DMA addressing mode"
#define sym_get_mem_cluster()	\
(void *) __get_free_pages(GFP_ATOMIC, SYM_MEM_PAGE_ORDER)
#define sym_free_mem_cluster(p)	\
free_pages((unsigned long)p, SYM_MEM_PAGE_ORDER)
typedef struct sym_m_link  *m_link_p;
typedef struct sym_m_vtob  *m_vtob_p;
#define VTOB_HASH_SHIFT		5
#define VTOB_HASH_SIZE		(1UL << VTOB_HASH_SHIFT)
#define VTOB_HASH_MASK		(VTOB_HASH_SIZE-1)
#define VTOB_HASH_CODE(m)	\
((((unsigned long)(m)) >> SYM_MEM_CLUSTER_SHIFT) & VTOB_HASH_MASK)
typedef struct sym_m_pool  *m_pool_p;
void *__sym_calloc_dma(m_pool_ident_t dev_dmat, int size, char *name);
void __sym_mfree_dma(m_pool_ident_t dev_dmat, void *m, int size, char *name);
dma_addr_t __vtobus(m_pool_ident_t dev_dmat, void *m);
#define _uvptv_(p) ((void *)((u_long)(p)))
#define _sym_calloc_dma(np, l, n)	__sym_calloc_dma(np->bus_dmat, l, n)
#define _sym_mfree_dma(np, p, l, n)	\
__sym_mfree_dma(np->bus_dmat, _uvptv_(p), l, n)
#define sym_calloc_dma(l, n)		_sym_calloc_dma(np, l, n)
#define sym_mfree_dma(p, l, n)		_sym_mfree_dma(np, p, l, n)
#define vtobus(p)			__vtobus(np->bus_dmat, _uvptv_(p))
#define sym_m_pool_match(mp_id1, mp_id2)	(mp_id1 == mp_id2)
static inline void *sym_m_get_dma_mem_cluster(m_pool_p mp, m_vtob_p vbp)
static inline void sym_m_free_dma_mem_cluster(m_pool_p mp, m_vtob_p vbp)
