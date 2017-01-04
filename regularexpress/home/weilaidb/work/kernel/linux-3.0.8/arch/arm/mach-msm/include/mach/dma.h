struct msm_dmov_errdata ;
struct msm_dmov_cmd ;
void msm_dmov_enqueue_cmd(unsigned id, struct msm_dmov_cmd *cmd);
void msm_dmov_stop_cmd(unsigned id, struct msm_dmov_cmd *cmd, int graceful);
int msm_dmov_exec_cmd(unsigned id, unsigned int cmdptr);
static inline
void msm_dmov_enqueue_cmd(unsigned id, struct msm_dmov_cmd *cmd)
static inline
void msm_dmov_stop_cmd(unsigned id, struct msm_dmov_cmd *cmd, int graceful)
static inline
int msm_dmov_exec_cmd(unsigned id, unsigned int cmdptr)
#define DMOV_SD0(off, ch) (MSM_DMOV_BASE + 0x0000 + (off) + ((ch) << 2))
#define DMOV_SD1(off, ch) (MSM_DMOV_BASE + 0x0400 + (off) + ((ch) << 2))
#define DMOV_SD2(off, ch) (MSM_DMOV_BASE + 0x0800 + (off) + ((ch) << 2))
#define DMOV_SD3(off, ch) (MSM_DMOV_BASE + 0x0C00 + (off) + ((ch) << 2))
#if defined(CONFIG_ARCH_MSM7X30)
#define DMOV_SD_AARM DMOV_SD2
#define DMOV_SD_AARM DMOV_SD3
#define DMOV_CMD_PTR(ch)      DMOV_SD_AARM(0x000, ch)
#define DMOV_CMD_LIST         (0 << 29)
#define DMOV_CMD_PTR_LIST     (1 << 29)
#define DMOV_CMD_INPUT_CFG    (2 << 29)
#define DMOV_CMD_OUTPUT_CFG   (3 << 29)
#define DMOV_CMD_ADDR(addr)   ((addr) >> 3)
#define DMOV_RSLT(ch)         DMOV_SD_AARM(0x040, ch)
#define DMOV_RSLT_VALID       (1 << 31)
#define DMOV_RSLT_ERROR       (1 << 3)
#define DMOV_RSLT_FLUSH       (1 << 2)
#define DMOV_RSLT_DONE        (1 << 1)
#define DMOV_RSLT_USER        (1 << 0)
#define DMOV_FLUSH0(ch)       DMOV_SD_AARM(0x080, ch)
#define DMOV_FLUSH1(ch)       DMOV_SD_AARM(0x0C0, ch)
#define DMOV_FLUSH2(ch)       DMOV_SD_AARM(0x100, ch)
#define DMOV_FLUSH3(ch)       DMOV_SD_AARM(0x140, ch)
#define DMOV_FLUSH4(ch)       DMOV_SD_AARM(0x180, ch)
#define DMOV_FLUSH5(ch)       DMOV_SD_AARM(0x1C0, ch)
#define DMOV_STATUS(ch)       DMOV_SD_AARM(0x200, ch)
#define DMOV_STATUS_RSLT_COUNT(n)    (((n) >> 29))
#define DMOV_STATUS_CMD_COUNT(n)     (((n) >> 27) & 3)
#define DMOV_STATUS_RSLT_VALID       (1 << 1)
#define DMOV_STATUS_CMD_PTR_RDY      (1 << 0)
#define DMOV_ISR              DMOV_SD_AARM(0x380, 0)
#define DMOV_CONFIG(ch)       DMOV_SD_AARM(0x300, ch)
#define DMOV_CONFIG_FORCE_TOP_PTR_RSLT (1 << 2)
#define DMOV_CONFIG_FORCE_FLUSH_RSLT   (1 << 1)
#define DMOV_CONFIG_IRQ_EN             (1 << 0)
#define DMOV_NAND_CHAN        7
#define DMOV_NAND_CRCI_CMD    5
#define DMOV_NAND_CRCI_DATA   4
#define DMOV_SDC1_CHAN        8
#define DMOV_SDC1_CRCI        6
#define DMOV_SDC2_CHAN        8
#define DMOV_SDC2_CRCI        7
#define DMOV_TSIF_CHAN        10
#define DMOV_TSIF_CRCI        10
#define DMOV_USB_CHAN         11
#define DMOV_NONE_CRCI        0
#define CMD_PTR_ADDR(addr)  ((addr) >> 3)
#define CMD_PTR_LP          (1 << 31)
#define CMD_PTR_PT          (3 << 29)
typedef struct  dmov_s;
typedef struct  dmov_sg;
typedef struct  dmov_box;
#define CMD_LC      (1 << 31)
#define CMD_FR      (1 << 22)
#define CMD_OCU     (1 << 21)
#define CMD_OCB     (1 << 20)
#define CMD_TCB     (1 << 19)
#define CMD_DAH     (1 << 18)
#define CMD_SAH     (1 << 17)
#define CMD_MODE_SINGLE     (0 << 0)
#define CMD_MODE_SG         (1 << 0)
#define CMD_MODE_IND_SG     (2 << 0)
#define CMD_MODE_BOX        (3 << 0)
#define CMD_DST_SWAP_BYTES  (1 << 14)
#define CMD_DST_SWAP_SHORTS (1 << 15)
#define CMD_DST_SWAP_WORDS  (1 << 16)
#define CMD_SRC_SWAP_BYTES  (1 << 11)
#define CMD_SRC_SWAP_SHORTS (1 << 12)
#define CMD_SRC_SWAP_WORDS  (1 << 13)
#define CMD_DST_CRCI(n)     (((n) & 15) << 7)
#define CMD_SRC_CRCI(n)     (((n) & 15) << 3)
