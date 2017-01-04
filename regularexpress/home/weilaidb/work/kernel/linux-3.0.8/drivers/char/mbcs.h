#define __MBCS_H__
#define MB	(1024*1024)
#define MB2	(2*MB)
#define MB4	(4*MB)
#define MB6	(6*MB)
#define MBCS_CM_ID		0x0000
#define MBCS_CM_STATUS		0x0008
#define MBCS_CM_ERROR_DETAIL1	0x0010
#define MBCS_CM_ERROR_DETAIL2	0x0018
#define MBCS_CM_CONTROL		0x0020
#define MBCS_CM_REQ_TOUT	0x0028
#define MBCS_CM_ERR_INT_DEST	0x0038
#define MBCS_CM_TARG_FL		0x0050
#define MBCS_CM_ERR_STAT	0x0060
#define MBCS_CM_CLR_ERR_STAT	0x0068
#define MBCS_CM_ERR_INT_EN	0x0070
#define MBCS_RD_DMA_SYS_ADDR	0x0100
#define MBCS_RD_DMA_LOC_ADDR	0x0108
#define MBCS_RD_DMA_CTRL	0x0110
#define MBCS_RD_DMA_AMO_DEST	0x0118
#define MBCS_RD_DMA_INT_DEST	0x0120
#define MBCS_RD_DMA_AUX_STAT	0x0130
#define MBCS_WR_DMA_SYS_ADDR	0x0200
#define MBCS_WR_DMA_LOC_ADDR	0x0208
#define MBCS_WR_DMA_CTRL	0x0210
#define MBCS_WR_DMA_AMO_DEST	0x0218
#define MBCS_WR_DMA_INT_DEST	0x0220
#define MBCS_WR_DMA_AUX_STAT	0x0230
#define MBCS_ALG_AMO_DEST	0x0300
#define MBCS_ALG_INT_DEST	0x0308
#define MBCS_ALG_OFFSETS	0x0310
#define MBCS_ALG_STEP		0x0318
#define MBCS_GSCR_START		0x0000000
#define MBCS_DEBUG_START	0x0100000
#define MBCS_RAM0_START		0x0200000
#define MBCS_RAM1_START		0x0400000
#define MBCS_RAM2_START		0x0600000
#define MBCS_CM_CONTROL_REQ_TOUT_MASK 0x0000000000ffffffUL
#define MBCS_SRAM_SIZE		(1024*1024)
#define MBCS_CACHELINE_SIZE	128
#define MBCS_MMR_ADDR(mmr_base, offset)((uint64_t *)(mmr_base + offset))
#define MBCS_MMR_SET(mmr_base, offset, value)
#define MBCS_MMR_GET(mmr_base, offset) *(uint64_t *)(mmr_base + offset)
#define MBCS_MMR_ZERO(mmr_base, offset) MBCS_MMR_SET(mmr_base, offset, 0)
union cm_id ;
union cm_status ;
union cm_error_detail1 ;
union cm_error_detail2 ;
union cm_control ;
union cm_req_timeout ;
union intr_dest ;
union cm_error_status ;
union cm_clr_error_status ;
union cm_error_intr_enable ;
struct cm_mmr ;
union dma_hostaddr ;
union dma_localaddr ;
union dma_control ;
union dma_amo_dest ;
union rdma_aux_status ;
struct rdma_mmr ;
union wdma_aux_status ;
struct wdma_mmr ;
union algo_step ;
struct algo_mmr ;
struct mbcs_mmr ;
#define DEVICE_NAME "mbcs"
#define MBCS_PART_NUM 0xfff0
#define MBCS_PART_NUM_ALG0 0xf001
#define MBCS_MFG_NUM  0x1
struct algoblock ;
struct getdma ;
struct putdma ;
struct mbcs_soft ;
static int mbcs_open(struct inode *ip, struct file *fp);
static ssize_t mbcs_sram_read(struct file *fp, char __user *buf, size_t len,
loff_t * off);
static ssize_t mbcs_sram_write(struct file *fp, const char __user *buf, size_t len,
loff_t * off);
static loff_t mbcs_sram_llseek(struct file *filp, loff_t off, int whence);
static int mbcs_gscr_mmap(struct file *fp, struct vm_area_struct *vma);
