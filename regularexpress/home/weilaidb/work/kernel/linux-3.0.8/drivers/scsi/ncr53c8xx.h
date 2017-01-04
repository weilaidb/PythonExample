#define NCR53C8XX_H
#define SCSI_NCR_BOOT_COMMAND_LINE_SUPPORT
#define SCSI_NCR_DEBUG_INFO_SUPPORT
#	define SCSI_NCR_ENABLE_INTEGRITY_CHECK
#define	SCSI_NCR_SETUP_SPECIAL_FEATURES		(3)
#define SCSI_NCR_MAX_SYNC			(80)
#if	CONFIG_SCSI_NCR53C8XX_MAX_TAGS < 2
#define SCSI_NCR_MAX_TAGS	(2)
#elif	CONFIG_SCSI_NCR53C8XX_MAX_TAGS > 256
#define SCSI_NCR_MAX_TAGS	(256)
#define	SCSI_NCR_MAX_TAGS	CONFIG_SCSI_NCR53C8XX_MAX_TAGS
#define SCSI_NCR_MAX_TAGS	(8)
#define	SCSI_NCR_SETUP_DEFAULT_TAGS	CONFIG_SCSI_NCR53C8XX_DEFAULT_TAGS
#elif	defined CONFIG_SCSI_NCR53C8XX_TAGGED_QUEUE
#define	SCSI_NCR_SETUP_DEFAULT_TAGS	SCSI_NCR_MAX_TAGS
#define	SCSI_NCR_SETUP_DEFAULT_TAGS	(0)
#if defined(CONFIG_SCSI_NCR53C8XX_IARB)
#define SCSI_NCR_IARB_SUPPORT
#define	CONFIG_SCSI_NCR53C8XX_SYNC	(20)
#elif	CONFIG_SCSI_NCR53C8XX_SYNC > SCSI_NCR_MAX_SYNC
#undef	CONFIG_SCSI_NCR53C8XX_SYNC
#define	CONFIG_SCSI_NCR53C8XX_SYNC	SCSI_NCR_MAX_SYNC
#if	CONFIG_SCSI_NCR53C8XX_SYNC == 0
#define	SCSI_NCR_SETUP_DEFAULT_SYNC	(255)
#elif	CONFIG_SCSI_NCR53C8XX_SYNC <= 5
#define	SCSI_NCR_SETUP_DEFAULT_SYNC	(50)
#elif	CONFIG_SCSI_NCR53C8XX_SYNC <= 20
#define	SCSI_NCR_SETUP_DEFAULT_SYNC	(250/(CONFIG_SCSI_NCR53C8XX_SYNC))
#elif	CONFIG_SCSI_NCR53C8XX_SYNC <= 33
#define	SCSI_NCR_SETUP_DEFAULT_SYNC	(11)
#elif	CONFIG_SCSI_NCR53C8XX_SYNC <= 40
#define	SCSI_NCR_SETUP_DEFAULT_SYNC	(10)
#define	SCSI_NCR_SETUP_DEFAULT_SYNC 	(9)
#define SCSI_NCR_SETUP_DISCONNECTION	(0)
#define SCSI_NCR_SETUP_DISCONNECTION	(1)
#define SCSI_NCR_SETUP_FORCE_SYNC_NEGO	(1)
#define SCSI_NCR_SETUP_FORCE_SYNC_NEGO	(0)
#define SCSI_NCR_SETUP_MASTER_PARITY	(0)
#define SCSI_NCR_SETUP_MASTER_PARITY	(1)
#define SCSI_NCR_SETUP_SCSI_PARITY	(0)
#define SCSI_NCR_SETUP_SCSI_PARITY	(1)
#define SCSI_NCR_SETUP_SETTLE_TIME	(2)
#define	SCSI_NCR_PCIQ_WORK_AROUND_OPT	1
#if	SCSI_NCR_PCIQ_WORK_AROUND_OPT == 1
#define	SCSI_NCR_PCIQ_MAY_NOT_FLUSH_PW_UPSTREAM
#define	SCSI_NCR_PCIQ_MAY_REORDER_WRITES
#define	SCSI_NCR_PCIQ_MAY_MISS_COMPLETIONS
#elif	SCSI_NCR_PCIQ_WORK_AROUND_OPT == 2
#define	SCSI_NCR_PCIQ_MAY_NOT_FLUSH_PW_UPSTREAM
#define	SCSI_NCR_PCIQ_MAY_REORDER_WRITES
#define	SCSI_NCR_PCIQ_MAY_MISS_COMPLETIONS
#define	SCSI_NCR_PCIQ_BROKEN_INTR
#elif	SCSI_NCR_PCIQ_WORK_AROUND_OPT == 3
#define	SCSI_NCR_PCIQ_SYNC_ON_INTR
#define SCSI_NCR_ALWAYS_SIMPLE_TAG
#define SCSI_NCR_MAX_SCATTER	(127)
#define SCSI_NCR_MAX_TARGET	(16)
#define SCSI_NCR_CAN_QUEUE	(8*SCSI_NCR_MAX_TAGS + 2*SCSI_NCR_MAX_TARGET)
#define SCSI_NCR_CMD_PER_LUN	(SCSI_NCR_MAX_TAGS)
#define SCSI_NCR_SG_TABLESIZE	(SCSI_NCR_MAX_SCATTER)
#define SCSI_NCR_TIMER_INTERVAL	(HZ)
#if 1
#define SCSI_NCR_MAX_LUN	(16)
#define SCSI_NCR_MAX_LUN	(1)
#define	inw_l2b		inw
#define	inl_l2b		inl
#define	outw_b2l	outw
#define	outl_b2l	outl
#define	readb_raw	readb
#define	writeb_raw	writeb
#if defined(SCSI_NCR_BIG_ENDIAN)
#define	readw_l2b	__raw_readw
#define	readl_l2b	__raw_readl
#define	writew_b2l	__raw_writew
#define	writel_b2l	__raw_writel
#define	readw_raw	__raw_readw
#define	readl_raw	__raw_readl
#define	writew_raw	__raw_writew
#define	writel_raw	__raw_writel
#define	readw_l2b	readw
#define	readl_l2b	readl
#define	writew_b2l	writew
#define	writel_b2l	writel
#define	readw_raw	readw
#define	readl_raw	readl
#define	writew_raw	writew
#define	writel_raw	writel
#define	inw_raw		inw
#define	inl_raw		inl
#define	outw_raw	outw
#define	outl_raw	outl
#define	readb_raw	readb
#define	readw_raw	readw
#define	readl_raw	readl
#define	writeb_raw	writeb
#define	writew_raw	writew
#define	writel_raw	writel
#if !defined(__hppa__) && !defined(__mips__)
#error	"The NCR in BIG ENDIAN addressing mode is not (yet) supported"
#define MEMORY_BARRIER()	mb()
#if	defined(SCSI_NCR_BIG_ENDIAN)
#define ncr_offb(o)	(((o)&~3)+((~((o)&3))&3))
#define ncr_offw(o)	(((o)&~3)+((~((o)&3))&2))
#define ncr_offb(o)	(o)
#define ncr_offw(o)	(o)
#if	defined(__BIG_ENDIAN) && !defined(SCSI_NCR_BIG_ENDIAN)
#define cpu_to_scr(dw)	cpu_to_le32(dw)
#define scr_to_cpu(dw)	le32_to_cpu(dw)
#elif	defined(__LITTLE_ENDIAN) && defined(SCSI_NCR_BIG_ENDIAN)
#define cpu_to_scr(dw)	cpu_to_be32(dw)
#define scr_to_cpu(dw)	be32_to_cpu(dw)
#define cpu_to_scr(dw)	(dw)
#define scr_to_cpu(dw)	(dw)
#define INB_OFF(o)		readb_raw((char __iomem *)np->reg + ncr_offb(o))
#define OUTB_OFF(o, val)	writeb_raw((val), (char __iomem *)np->reg + ncr_offb(o))
#if	defined(__BIG_ENDIAN) && !defined(SCSI_NCR_BIG_ENDIAN)
#define INW_OFF(o)		readw_l2b((char __iomem *)np->reg + ncr_offw(o))
#define INL_OFF(o)		readl_l2b((char __iomem *)np->reg + (o))
#define OUTW_OFF(o, val)	writew_b2l((val), (char __iomem *)np->reg + ncr_offw(o))
#define OUTL_OFF(o, val)	writel_b2l((val), (char __iomem *)np->reg + (o))
#elif	defined(__LITTLE_ENDIAN) && defined(SCSI_NCR_BIG_ENDIAN)
#define INW_OFF(o)		readw_b2l((char __iomem *)np->reg + ncr_offw(o))
#define INL_OFF(o)		readl_b2l((char __iomem *)np->reg + (o))
#define OUTW_OFF(o, val)	writew_l2b((val), (char __iomem *)np->reg + ncr_offw(o))
#define OUTL_OFF(o, val)	writel_l2b((val), (char __iomem *)np->reg + (o))
#define INW_OFF(o)		(readb((char __iomem *)np->reg + ncr_offw(o)) << 8 | readb((char __iomem *)np->reg + ncr_offw(o) + 1))
#define INW_OFF(o)		readw_raw((char __iomem *)np->reg + ncr_offw(o))
#define INL_OFF(o)		readl_raw((char __iomem *)np->reg + (o))
#define OUTW_OFF(o, val)	do  while (0)
#define OUTW_OFF(o, val)	writew_raw((val), (char __iomem *)np->reg + ncr_offw(o))
#define OUTL_OFF(o, val)	writel_raw((val), (char __iomem *)np->reg + (o))
#define INB(r)		INB_OFF (offsetof(struct ncr_reg,r))
#define INW(r)		INW_OFF (offsetof(struct ncr_reg,r))
#define INL(r)		INL_OFF (offsetof(struct ncr_reg,r))
#define OUTB(r, val)	OUTB_OFF (offsetof(struct ncr_reg,r), (val))
#define OUTW(r, val)	OUTW_OFF (offsetof(struct ncr_reg,r), (val))
#define OUTL(r, val)	OUTL_OFF (offsetof(struct ncr_reg,r), (val))
#define OUTONB(r, m)	OUTB(r, INB(r) | (m))
#define OUTOFFB(r, m)	OUTB(r, INB(r) & ~(m))
#define OUTONW(r, m)	OUTW(r, INW(r) | (m))
#define OUTOFFW(r, m)	OUTW(r, INW(r) & ~(m))
#define OUTONL(r, m)	OUTL(r, INL(r) | (m))
#define OUTOFFL(r, m)	OUTL(r, INL(r) & ~(m))
#define OUTL_DSP(v)				\
do  while (0)
#define OUTONB_STD()				\
do  while (0)
struct ncr_chip ;
#define SCSI_NCR_MAX_EXCLUDES 8
struct ncr_driver_setup ;
#define SCSI_NCR_DRIVER_SETUP			\
#define SCSI_NCR_DRIVER_SAFE_SETUP		\
struct ncr_reg ;
#define REGJ(p,r) (offsetof(struct ncr_reg, p ## r))
#define REG(r) REGJ (nc_, r)
typedef u32 ncrcmd;
#define	SCR_DATA_OUT	0x00000000
#define	SCR_DATA_IN	0x01000000
#define	SCR_COMMAND	0x02000000
#define	SCR_STATUS	0x03000000
#define SCR_DT_DATA_OUT	0x04000000
#define SCR_DT_DATA_IN	0x05000000
#define SCR_MSG_OUT	0x06000000
#define SCR_MSG_IN      0x07000000
#define SCR_ILG_OUT	0x04000000
#define SCR_ILG_IN	0x05000000
#define OPC_MOVE          0x08000000
#define SCR_MOVE_ABS(l) ((0x00000000 | OPC_MOVE) | (l))
#define SCR_MOVE_IND(l) ((0x20000000 | OPC_MOVE) | (l))
#define SCR_MOVE_TBL     (0x10000000 | OPC_MOVE)
#define SCR_CHMOV_ABS(l) ((0x00000000) | (l))
#define SCR_CHMOV_IND(l) ((0x20000000) | (l))
#define SCR_CHMOV_TBL     (0x10000000)
struct scr_tblmove ;
#define	SCR_SEL_ABS	0x40000000
#define	SCR_SEL_ABS_ATN	0x41000000
#define	SCR_SEL_TBL	0x42000000
#define	SCR_SEL_TBL_ATN	0x43000000
struct scr_tblsel ;
struct scr_tblsel ;
#define SCR_JMP_REL     0x04000000
#define SCR_ID(id)	(((u32)(id)) << 16)
#define	SCR_WAIT_DISC	0x48000000
#define SCR_WAIT_RESEL  0x50000000
#define SCR_SET(f)     (0x58000000 | (f))
#define SCR_CLR(f)     (0x60000000 | (f))
#define	SCR_CARRY	0x00000400
#define	SCR_TRG		0x00000200
#define	SCR_ACK		0x00000040
#define	SCR_ATN		0x00000008
#define SCR_NO_FLUSH 0x01000000
#define SCR_COPY(n) (0xc0000000 | SCR_NO_FLUSH | (n))
#define SCR_COPY_F(n) (0xc0000000 | (n))
#define SCR_REG_OFS(ofs) ((((ofs) & 0x7f) << 16ul) + ((ofs) & 0x80))
#define SCR_SFBR_REG(reg,op,data) \
(0x68000000 | (SCR_REG_OFS(REG(reg))) | (op) | (((data)&0xff)<<8ul))
#define SCR_REG_SFBR(reg,op,data) \
(0x70000000 | (SCR_REG_OFS(REG(reg))) | (op) | (((data)&0xff)<<8ul))
#define SCR_REG_REG(reg,op,data) \
(0x78000000 | (SCR_REG_OFS(REG(reg))) | (op) | (((data)&0xff)<<8ul))
#define      SCR_LOAD   0x00000000
#define      SCR_SHL    0x01000000
#define      SCR_OR     0x02000000
#define      SCR_XOR    0x03000000
#define      SCR_AND    0x04000000
#define      SCR_SHR    0x05000000
#define      SCR_ADD    0x06000000
#define      SCR_ADDC   0x07000000
#define      SCR_SFBR_DATA   (0x00800000>>8ul)
#define	SCR_FROM_REG(reg) \
SCR_REG_SFBR(reg,SCR_OR,0)
#define	SCR_TO_REG(reg) \
SCR_SFBR_REG(reg,SCR_OR,0)
#define	SCR_LOAD_REG(reg,data) \
SCR_REG_REG(reg,SCR_LOAD,data)
#define SCR_LOAD_SFBR(data) \
(SCR_REG_SFBR (gpreg, SCR_LOAD, data))
#define SCR_REG_OFS2(ofs) (((ofs) & 0xff) << 16ul)
#define SCR_NO_FLUSH2	0x02000000
#define SCR_DSA_REL2	0x10000000
#define SCR_LOAD_R(reg, how, n) \
(0xe1000000 | how | (SCR_REG_OFS2(REG(reg))) | (n))
#define SCR_STORE_R(reg, how, n) \
(0xe0000000 | how | (SCR_REG_OFS2(REG(reg))) | (n))
#define SCR_LOAD_ABS(reg, n)	SCR_LOAD_R(reg, SCR_NO_FLUSH2, n)
#define SCR_LOAD_REL(reg, n)	SCR_LOAD_R(reg, SCR_NO_FLUSH2|SCR_DSA_REL2, n)
#define SCR_LOAD_ABS_F(reg, n)	SCR_LOAD_R(reg, 0, n)
#define SCR_LOAD_REL_F(reg, n)	SCR_LOAD_R(reg, SCR_DSA_REL2, n)
#define SCR_STORE_ABS(reg, n)	SCR_STORE_R(reg, SCR_NO_FLUSH2, n)
#define SCR_STORE_REL(reg, n)	SCR_STORE_R(reg, SCR_NO_FLUSH2|SCR_DSA_REL2,n)
#define SCR_STORE_ABS_F(reg, n)	SCR_STORE_R(reg, 0, n)
#define SCR_STORE_REL_F(reg, n)	SCR_STORE_R(reg, SCR_DSA_REL2, n)
#define SCR_NO_OP       0x80000000
#define SCR_JUMP        0x80080000
#define SCR_JUMP64      0x80480000
#define SCR_JUMPR       0x80880000
#define SCR_CALL        0x88080000
#define SCR_CALLR       0x88880000
#define SCR_RETURN      0x90080000
#define SCR_INT         0x98080000
#define SCR_INT_FLY     0x98180000
#define IFFALSE(arg)   (0x00080000 | (arg))
#define IFTRUE(arg)    (0x00000000 | (arg))
#define WHEN(phase)    (0x00030000 | (phase))
#define IF(phase)      (0x00020000 | (phase))
#define DATA(D)        (0x00040000 | ((D) & 0xff))
#define MASK(D,M)      (0x00040000 | (((M ^ 0xff) & 0xff) << 8ul)|((D) & 0xff))
#define CARRYSET       (0x00200000)
#define	S_GOOD		(0x00)
#define	S_CHECK_COND	(0x02)
#define	S_COND_MET	(0x04)
#define	S_BUSY		(0x08)
#define	S_INT		(0x10)
#define	S_INT_COND_MET	(0x14)
#define	S_CONFLICT	(0x18)
#define	S_TERMINATED	(0x20)
#define	S_QUEUE_FULL	(0x28)
#define	S_ILLEGAL	(0xff)
#define	S_SENSE		(0x80)
#define ncr_build_sge(np, data, badd, len)	\
do  while (0)
struct ncr_slot ;
struct ncr_device ;
extern struct Scsi_Host *ncr_attach(struct scsi_host_template *tpnt, int unit, struct ncr_device *device);
extern void ncr53c8xx_release(struct Scsi_Host *host);
irqreturn_t ncr53c8xx_intr(int irq, void *dev_id);
extern int ncr53c8xx_init(void);
extern void ncr53c8xx_exit(void);
