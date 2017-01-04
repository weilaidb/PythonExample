#define SCSI_NCR_DRIVER_NAME	"ncr53c8xx-3.4.3g"
#define SCSI_NCR_DEBUG_FLAGS	(0)
#define NAME53C8XX		"ncr53c8xx"
#define DEBUG_ALLOC    (0x0001)
#define DEBUG_PHASE    (0x0002)
#define DEBUG_QUEUE    (0x0008)
#define DEBUG_RESULT   (0x0010)
#define DEBUG_POINTER  (0x0020)
#define DEBUG_SCRIPT   (0x0040)
#define DEBUG_TINY     (0x0080)
#define DEBUG_TIMING   (0x0100)
#define DEBUG_NEGO     (0x0200)
#define DEBUG_TAGS     (0x0400)
#define DEBUG_SCATTER  (0x0800)
#define DEBUG_IC        (0x1000)
static int ncr_debug = SCSI_NCR_DEBUG_FLAGS;
#define DEBUG_FLAGS ncr_debug
#define DEBUG_FLAGS	SCSI_NCR_DEBUG_FLAGS
static inline struct list_head *ncr_list_pop(struct list_head *head)
#define MEMO_SHIFT	4
#if PAGE_SIZE >= 8192
#define MEMO_PAGE_ORDER	0
#define MEMO_PAGE_ORDER	1
#define MEMO_FREE_UNUSED
#define MEMO_WARN	1
#define MEMO_GFP_FLAGS	GFP_ATOMIC
#define MEMO_CLUSTER_SHIFT	(PAGE_SHIFT+MEMO_PAGE_ORDER)
#define MEMO_CLUSTER_SIZE	(1UL << MEMO_CLUSTER_SHIFT)
#define MEMO_CLUSTER_MASK	(MEMO_CLUSTER_SIZE-1)
typedef u_long m_addr_t;
typedef struct device *m_bush_t;
typedef struct m_link  m_link_s;
typedef struct m_vtob  m_vtob_s;
#define VTOB_HASH_SHIFT		5
#define VTOB_HASH_SIZE		(1UL << VTOB_HASH_SHIFT)
#define VTOB_HASH_MASK		(VTOB_HASH_SIZE-1)
#define VTOB_HASH_CODE(m)	\
((((m_addr_t) (m)) >> MEMO_CLUSTER_SHIFT) & VTOB_HASH_MASK)
typedef struct m_pool  m_pool_s;
static void *___m_alloc(m_pool_s *mp, int size)
static void ___m_free(m_pool_s *mp, void *ptr, int size)
static DEFINE_SPINLOCK(ncr53c8xx_lock);
static void *__m_calloc2(m_pool_s *mp, int size, char *name, int uflags)
#define __m_calloc(mp, s, n)	__m_calloc2(mp, s, n, MEMO_WARN)
static void __m_free(m_pool_s *mp, void *ptr, int size, char *name)
static m_addr_t ___mp0_getp(m_pool_s *mp)
static void ___mp0_freep(m_pool_s *mp, m_addr_t m)
static m_pool_s mp0 = ;
static m_addr_t ___dma_getp(m_pool_s *mp)
static void ___dma_freep(m_pool_s *mp, m_addr_t m)
static inline m_pool_s *___get_dma_pool(m_bush_t bush)
static m_pool_s *___cre_dma_pool(m_bush_t bush)
static void ___del_dma_pool(m_pool_s *p)
static void *__m_calloc_dma(m_bush_t bush, int size, char *name)
static void __m_free_dma(m_bush_t bush, void *m, int size, char *name)
static m_addr_t __vtobus(m_bush_t bush, void *m)
#define _m_calloc_dma(np, s, n)		__m_calloc_dma(np->dev, s, n)
#define _m_free_dma(np, p, s, n)	__m_free_dma(np->dev, p, s, n)
#define m_calloc_dma(s, n)		_m_calloc_dma(np, s, n)
#define m_free_dma(p, s, n)		_m_free_dma(np, p, s, n)
#define _vtobus(np, p)			__vtobus(np->dev, p)
#define vtobus(p)			_vtobus(np, p)
#define __data_mapped	SCp.phase
#define __data_mapping	SCp.have_data_in
static void __unmap_scsi_data(struct device *dev, struct scsi_cmnd *cmd)
static int __map_scsi_sg_data(struct device *dev, struct scsi_cmnd *cmd)
#define unmap_scsi_data(np, cmd)	__unmap_scsi_data(np->dev, cmd)
#define map_scsi_sg_data(np, cmd)	__map_scsi_sg_data(np->dev, cmd)
static struct ncr_driver_setup
driver_setup			= SCSI_NCR_DRIVER_SETUP;
static struct ncr_driver_setup
driver_safe_setup __initdata	= SCSI_NCR_DRIVER_SAFE_SETUP;
#define initverbose (driver_setup.verbose)
#define bootverbose (np->verbose)
#define	ARG_SEP	' '
#define	ARG_SEP	','
#define OPT_TAGS		1
#define OPT_MASTER_PARITY	2
#define OPT_SCSI_PARITY		3
#define OPT_DISCONNECTION	4
#define OPT_SPECIAL_FEATURES	5
#define OPT_UNUSED_1		6
#define OPT_FORCE_SYNC_NEGO	7
#define OPT_REVERSE_PROBE	8
#define OPT_DEFAULT_SYNC	9
#define OPT_VERBOSE		10
#define OPT_DEBUG		11
#define OPT_BURST_MAX		12
#define OPT_LED_PIN		13
#define OPT_MAX_WIDE		14
#define OPT_SETTLE_DELAY	15
#define OPT_DIFF_SUPPORT	16
#define OPT_IRQM		17
#define OPT_PCI_FIX_UP		18
#define OPT_BUS_CHECK		19
#define OPT_OPTIMIZE		20
#define OPT_RECOVERY		21
#define OPT_SAFE_SETUP		22
#define OPT_USE_NVRAM		23
#define OPT_EXCLUDE		24
#define OPT_HOST_ID		25
#define OPT_IARB		26
#define	ARG_SEP	' '
#define	ARG_SEP	','
static char setup_token[] __initdata =
"tags:"   "mpar:"
"spar:"   "disc:"
"specf:"  "ultra:"
"fsn:"    "revprob:"
"sync:"   "verb:"
"debug:"  "burst:"
"led:"    "wide:"
"settle:" "diff:"
"irqm:"   "pcifix:"
"buschk:" "optim:"
"recovery:"
"safe:"   "nvram:"
"excl:"   "hostid:"
"iarb:"
;
static int __init get_setup_token(char *p)
static int __init sym53c8xx__setup(char *str)
#define DEF_DEPTH	(driver_setup.default_tags)
#define ALL_TARGETS	-2
#define NO_TARGET	-1
#define ALL_LUNS	-2
#define NO_LUN		-1
static int device_queue_depth(int unit, int target, int lun)
#define SCSI_NCR_CCB_DONE_SUPPORT
#define MAX_DONE 24
#define CCB_DONE_EMPTY 0xffffffffUL
#if BITS_PER_LONG == 32
#define CCB_DONE_VALID(cp)  (((u_long) cp) != CCB_DONE_EMPTY)
#define CCB_DONE_VALID(cp)  \
((((u_long) cp) & 0xffffffff00000000ul) && 	\
(((u_long) cp) & 0xfffffffful) != CCB_DONE_EMPTY)
#define SCSI_NCR_MYADDR      (7)
#define SCSI_NCR_MAX_TAGS    (8)
#if	SCSI_NCR_MAX_TAGS > 64
#define	MAX_TAGS (64)
#define	MAX_TAGS SCSI_NCR_MAX_TAGS
#define NO_TAG	(255)
#if	MAX_TAGS > 32
typedef u64 tagmap_t;
typedef u32 tagmap_t;
#define MAX_TARGET  (SCSI_NCR_MAX_TARGET)
#define MAX_TARGET  (16)
#define MAX_LUN    SCSI_NCR_MAX_LUN
#define MAX_LUN    (1)
#define SCSI_NCR_MIN_ASYNC (40)
#define MAX_START   (SCSI_NCR_CAN_QUEUE + 4)
#define MAX_START   (MAX_TARGET + 7 * MAX_TAGS)
#if	MAX_START > 250
#undef	MAX_START
#define	MAX_START 250
#define MAX_SCATTER (SCSI_NCR_MAX_SCATTER)
#if (MAX_SCATTER > 80)
#define MAX_SCATTERL	80
#define	MAX_SCATTERH	(MAX_SCATTER - MAX_SCATTERL)
#define MAX_SCATTERL	(MAX_SCATTER-1)
#define	MAX_SCATTERH	1
#define NCR_SNOOP_TIMEOUT (1000000)
#define ScsiResult(host_code, scsi_code) (((host_code) << 16) + ((scsi_code) & 0x7f))
#define initverbose (driver_setup.verbose)
#define bootverbose (np->verbose)
#define HS_IDLE		(0)
#define HS_BUSY		(1)
#define HS_NEGOTIATE	(2)
#define HS_DISCONNECT	(3)
#define HS_DONEMASK	(0x80)
#define HS_COMPLETE	(4|HS_DONEMASK)
#define HS_SEL_TIMEOUT	(5|HS_DONEMASK)
#define HS_RESET	(6|HS_DONEMASK)
#define HS_ABORTED	(7|HS_DONEMASK)
#define HS_TIMEOUT	(8|HS_DONEMASK)
#define HS_FAIL		(9|HS_DONEMASK)
#define HS_UNEXPECTED	(10|HS_DONEMASK)
#define HS_INVALMASK	(0x40)
#define	HS_SELECTING	(0|HS_INVALMASK)
#define	HS_IN_RESELECT	(1|HS_INVALMASK)
#define	HS_STARTING	(2|HS_INVALMASK)
#define HS_SKIPMASK	(0x20)
#define	SIR_BAD_STATUS		(1)
#define	SIR_XXXXXXXXXX		(2)
#define	SIR_NEGO_SYNC		(3)
#define	SIR_NEGO_WIDE		(4)
#define	SIR_NEGO_FAILED		(5)
#define	SIR_NEGO_PROTO		(6)
#define	SIR_REJECT_RECEIVED	(7)
#define	SIR_REJECT_SENT		(8)
#define	SIR_IGN_RESIDUE		(9)
#define	SIR_MISSING_SAVE	(10)
#define	SIR_RESEL_NO_MSG_IN	(11)
#define	SIR_RESEL_NO_IDENTIFY	(12)
#define	SIR_RESEL_BAD_LUN	(13)
#define	SIR_RESEL_BAD_TARGET	(14)
#define	SIR_RESEL_BAD_I_T_L	(15)
#define	SIR_RESEL_BAD_I_T_L_Q	(16)
#define	SIR_DONE_OVERFLOW	(17)
#define	SIR_INTFLY		(18)
#define	SIR_MAX			(18)
#define	XE_OK		(0)
#define	XE_EXTRA_DATA	(1)
#define	XE_BAD_PHASE	(2)
#define NS_NOCHANGE	(0)
#define NS_SYNC		(1)
#define NS_WIDE		(2)
#define NS_PPR		(4)
#define CCB_MAGIC	(0xf2691ad2)
static struct scsi_transport_template *ncr53c8xx_transport_template = NULL;
struct tcb;
struct lcb;
struct ccb;
struct ncb;
struct script;
struct link ;
struct	usrcmd ;
#define UC_SETSYNC      10
#define UC_SETTAGS	11
#define UC_SETDEBUG	12
#define UC_SETORDER	13
#define UC_SETWIDE	14
#define UC_SETFLAG	15
#define UC_SETVERBOSE	17
#define	UF_TRACE	(0x01)
#define	UF_NODISC	(0x02)
#define	UF_NOSCAN	(0x04)
struct tcb ;
struct lcb ;
struct launch ;
struct head ;
#define  QU_REG	scr0
#define  HS_REG	scr1
#define  HS_PRT	nc_scr1
#define  SS_REG	scr2
#define  SS_PRT	nc_scr2
#define  PS_REG	scr3
#define  actualquirks  phys.header.status[3]
#define  host_status   phys.header.status[2]
#define  scsi_status   phys.header.status[1]
#define  parity_status phys.header.status[0]
#define  actualquirks  phys.header.status[0]
#define  host_status   phys.header.status[1]
#define  scsi_status   phys.header.status[2]
#define  parity_status phys.header.status[3]
#define  xerr_st       header.scr_st[0]
#define  sync_st       header.scr_st[1]
#define  nego_st       header.scr_st[2]
#define  wide_st       header.scr_st[3]
#define  xerr_status   phys.xerr_st
#define  nego_status   phys.nego_st
struct dsb ;
struct ccb ;
#define CCB_PHYS(cp,lbl)	(cp->p_ccb + offsetof(struct ccb, lbl))
struct ncb ;
#define NCB_SCRIPT_PHYS(np,lbl)	 (np->p_script  + offsetof (struct script, lbl))
#define NCB_SCRIPTH_PHYS(np,lbl) (np->p_scripth + offsetof (struct scripth,lbl))
#define PREFETCH_FLUSH_CNT	2
#define PREFETCH_FLUSH		SCR_CALL, PADDRH (wait_dma),
#define PREFETCH_FLUSH_CNT	0
#define PREFETCH_FLUSH
struct script ;
struct scripth ;
static	void	ncr_alloc_ccb	(struct ncb *np, u_char tn, u_char ln);
static	void	ncr_complete	(struct ncb *np, struct ccb *cp);
static	void	ncr_exception	(struct ncb *np);
static	void	ncr_free_ccb	(struct ncb *np, struct ccb *cp);
static	void	ncr_init_ccb	(struct ncb *np, struct ccb *cp);
static	void	ncr_init_tcb	(struct ncb *np, u_char tn);
static	struct lcb *	ncr_alloc_lcb	(struct ncb *np, u_char tn, u_char ln);
static	struct lcb *	ncr_setup_lcb	(struct ncb *np, struct scsi_device *sdev);
static	void	ncr_getclock	(struct ncb *np, int mult);
static	void	ncr_selectclock	(struct ncb *np, u_char scntl3);
static	struct ccb *ncr_get_ccb	(struct ncb *np, struct scsi_cmnd *cmd);
static	void	ncr_chip_reset	(struct ncb *np, int delay);
static	void	ncr_init	(struct ncb *np, int reset, char * msg, u_long code);
static	int	ncr_int_sbmc	(struct ncb *np);
static	int	ncr_int_par	(struct ncb *np);
static	void	ncr_int_ma	(struct ncb *np);
static	void	ncr_int_sir	(struct ncb *np);
static  void    ncr_int_sto     (struct ncb *np);
static	void	ncr_negotiate	(struct ncb* np, struct tcb* tp);
static	int	ncr_prepare_nego(struct ncb *np, struct ccb *cp, u_char *msgptr);
static	void	ncr_script_copy_and_bind
(struct ncb *np, ncrcmd *src, ncrcmd *dst, int len);
static  void    ncr_script_fill (struct script * scr, struct scripth * scripth);
static	int	ncr_scatter	(struct ncb *np, struct ccb *cp, struct scsi_cmnd *cmd);
static	void	ncr_getsync	(struct ncb *np, u_char sfac, u_char *fakp, u_char *scntl3p);
static	void	ncr_setsync	(struct ncb *np, struct ccb *cp, u_char scntl3, u_char sxfer);
static	void	ncr_setup_tags	(struct ncb *np, struct scsi_device *sdev);
static	void	ncr_setwide	(struct ncb *np, struct ccb *cp, u_char wide, u_char ack);
static	int	ncr_snooptest	(struct ncb *np);
static	void	ncr_timeout	(struct ncb *np);
static  void    ncr_wakeup      (struct ncb *np, u_long code);
static  void    ncr_wakeup_done (struct ncb *np);
static	void	ncr_start_next_ccb (struct ncb *np, struct lcb * lp, int maxn);
static	void	ncr_put_start_queue(struct ncb *np, struct ccb *cp);
static void insert_into_waiting_list(struct ncb *np, struct scsi_cmnd *cmd);
static struct scsi_cmnd *retrieve_from_waiting_list(int to_remove, struct ncb *np, struct scsi_cmnd *cmd);
static void process_waiting_list(struct ncb *np, int sts);
#define remove_from_waiting_list(np, cmd) \
retrieve_from_waiting_list(1, (np), (cmd))
#define requeue_waiting_list(np) process_waiting_list((np), DID_OK)
#define reset_waiting_list(np) process_waiting_list((np), DID_RESET)
static inline char *ncr_name (struct ncb *np)
#define	RELOC_SOFTC	0x40000000
#define	RELOC_LABEL	0x50000000
#define	RELOC_REGISTER	0x60000000
#define	RELOC_LABELH	0x80000000
#define	RELOC_MASK	0xf0000000
#define	NADDR(label)	(RELOC_SOFTC | offsetof(struct ncb, label))
#define PADDR(label)    (RELOC_LABEL | offsetof(struct script, label))
#define PADDRH(label)   (RELOC_LABELH | offsetof(struct scripth, label))
#define	RADDR(label)	(RELOC_REGISTER | REG(label))
#define	FADDR(label,ofs)(RELOC_REGISTER | ((REG(label))+(ofs)))
static	struct script script0 __initdata = ;
static	struct scripth scripth0 __initdata = ;
void __init ncr_script_fill (struct script * scr, struct scripth * scrh)
static void __init
ncr_script_copy_and_bind (struct ncb *np, ncrcmd *src, ncrcmd *dst, int len)
struct host_data ;
#define PRINT_ADDR(cmd, arg...) dev_info(&cmd->device->sdev_gendev , ## arg)
static void ncr_print_msg(struct ccb *cp, char *label, u_char *msg)
#define _5M 5000000
static u_long div_10M[] =
;
#define burst_length(bc) (!(bc))? 0 : 1 << (bc)
#define burst_code(dmode, ctest0) \
(ctest0) & 0x80 ? 0 : (((dmode) & 0xc0) >> 6) + 1
static inline void ncr_init_burst(struct ncb *np, u_char bc)
static void __init ncr_prepare_setting(struct ncb *np)
static inline void ncr_queue_done_cmd(struct ncb *np, struct scsi_cmnd *cmd)
static inline void ncr_flush_done_cmds(struct scsi_cmnd *lcmd)
static int ncr_prepare_nego(struct ncb *np, struct ccb *cp, u_char *msgptr)
static int ncr_queue_command (struct ncb *np, struct scsi_cmnd *cmd)
static void ncr_start_next_ccb(struct ncb *np, struct lcb *lp, int maxn)
static void ncr_put_start_queue(struct ncb *np, struct ccb *cp)
static int ncr_reset_scsi_bus(struct ncb *np, int enab_int, int settle_delay)
static void ncr_start_reset(struct ncb *np)
static int ncr_reset_bus (struct ncb *np, struct scsi_cmnd *cmd, int sync_reset)
static void ncr_detach(struct ncb *np)
void ncr_complete (struct ncb *np, struct ccb *cp)
static void ncr_ccb_skipped(struct ncb *np, struct ccb *cp)
void ncr_wakeup_done (struct ncb *np)
void ncr_wakeup (struct ncb *np, u_long code)
static void ncr_chip_reset(struct ncb *np, int delay)
void ncr_init (struct ncb *np, int reset, char * msg, u_long code)
static void ncr_negotiate (struct ncb* np, struct tcb* tp)
static void ncr_getsync(struct ncb *np, u_char sfac, u_char *fakp, u_char *scntl3p)
static void ncr_set_sync_wide_status (struct ncb *np, u_char target)
static void ncr_setsync (struct ncb *np, struct ccb *cp, u_char scntl3, u_char sxfer)
static void ncr_setwide (struct ncb *np, struct ccb *cp, u_char wide, u_char ack)
static void ncr_setup_tags (struct ncb *np, struct scsi_device *sdev)
static void ncr_timeout (struct ncb *np)
static void ncr_log_hard_error(struct ncb *np, u16 sist, u_char dstat)
void ncr_exception (struct ncb *np)
void ncr_int_sto (struct ncb *np)
static int ncr_int_sbmc (struct ncb *np)
static int ncr_int_par (struct ncb *np)
static void ncr_int_ma (struct ncb *np)
static void ncr_sir_to_redo(struct ncb *np, int num, struct ccb *cp)
void ncr_int_sir (struct ncb *np)
static struct ccb *ncr_get_ccb(struct ncb *np, struct scsi_cmnd *cmd)
static void ncr_free_ccb (struct ncb *np, struct ccb *cp)
#define ncr_reg_bus_addr(r) (np->paddr + offsetof (struct ncr_reg, r))
static void ncr_init_ccb(struct ncb *np, struct ccb *cp)
static void ncr_alloc_ccb(struct ncb *np, u_char tn, u_char ln)
static void ncr_init_tcb (struct ncb *np, u_char tn)
static struct lcb *ncr_alloc_lcb (struct ncb *np, u_char tn, u_char ln)
static struct lcb *ncr_setup_lcb (struct ncb *np, struct scsi_device *sdev)
static int ncr_scatter(struct ncb *np, struct ccb *cp, struct scsi_cmnd *cmd)
static int __init ncr_regtest (struct ncb* np)
{
register volatile u32 data;
data = 0xffffffff;
OUTL_OFF(offsetof(struct ncr_reg, nc_dstat), data);
data = INL_OFF(offsetof(struct ncr_reg, nc_dstat));
#if 1
if (data == 0xffffffff)
static int __init ncr_snooptest (struct ncb* np)
static void ncr_selectclock(struct ncb *np, u_char scntl3)
static unsigned __init ncrgetfreq (struct ncb *np, int gen)
static void __init ncr_getclock (struct ncb *np, int mult)
static int ncr53c8xx_slave_alloc(struct scsi_device *device)
static int ncr53c8xx_slave_configure(struct scsi_device *device)
static int ncr53c8xx_queue_command_lck (struct scsi_cmnd *cmd, void (*done)(struct scsi_cmnd *))
static DEF_SCSI_QCMD(ncr53c8xx_queue_command)
irqreturn_t ncr53c8xx_intr(int irq, void *dev_id)
static void ncr53c8xx_timeout(unsigned long npref)
static int ncr53c8xx_bus_reset(struct scsi_cmnd *cmd)
#define next_wcmd host_scribble
static void insert_into_waiting_list(struct ncb *np, struct scsi_cmnd *cmd)
static struct scsi_cmnd *retrieve_from_waiting_list(int to_remove, struct ncb *np, struct scsi_cmnd *cmd)
static void process_waiting_list(struct ncb *np, int sts)
#undef next_wcmd
static ssize_t show_ncr53c8xx_revision(struct device *dev,
struct device_attribute *attr, char *buf)
static struct device_attribute ncr53c8xx_revision_attr = ;
static struct device_attribute *ncr53c8xx_host_attrs[] = ;
char *ncr53c8xx;
module_param(ncr53c8xx, charp, 0);
static int __init ncr53c8xx_setup(char *str)
__setup("ncr53c8xx=", ncr53c8xx_setup);
struct Scsi_Host * __init ncr_attach(struct scsi_host_template *tpnt,
int unit, struct ncr_device *device)
void ncr53c8xx_release(struct Scsi_Host *host)
static void ncr53c8xx_set_period(struct scsi_target *starget, int period)
static void ncr53c8xx_set_offset(struct scsi_target *starget, int offset)
static void ncr53c8xx_set_width(struct scsi_target *starget, int width)
static void ncr53c8xx_get_signalling(struct Scsi_Host *shost)
static struct spi_function_template ncr53c8xx_transport_functions =  ;
int __init ncr53c8xx_init(void)
void ncr53c8xx_exit(void)
