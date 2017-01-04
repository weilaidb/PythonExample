#define MCPDM_REVISION         0x00
#define MCPDM_SYSCONFIG                0x10
#define MCPDM_IRQSTATUS_RAW    0x24
#define MCPDM_IRQSTATUS                0x28
#define MCPDM_IRQENABLE_SET    0x2C
#define MCPDM_IRQENABLE_CLR    0x30
#define MCPDM_IRQWAKE_EN       0x34
#define MCPDM_DMAENABLE_SET    0x38
#define MCPDM_DMAENABLE_CLR    0x3C
#define MCPDM_DMAWAKEEN                0x40
#define MCPDM_CTRL             0x44
#define MCPDM_DN_DATA          0x48
#define MCPDM_UP_DATA          0x4C
#define MCPDM_FIFO_CTRL_DN     0x50
#define MCPDM_FIFO_CTRL_UP     0x54
#define MCPDM_DN_OFFSET                0x58
#define MCPDM_DN_IRQ                   (1 << 0)
#define MCPDM_DN_IRQ_EMPTY             (1 << 1)
#define MCPDM_DN_IRQ_ALMST_EMPTY       (1 << 2)
#define MCPDM_DN_IRQ_FULL              (1 << 3)
#define MCPDM_UP_IRQ                   (1 << 8)
#define MCPDM_UP_IRQ_EMPTY             (1 << 9)
#define MCPDM_UP_IRQ_ALMST_FULL                (1 << 10)
#define MCPDM_UP_IRQ_FULL              (1 << 11)
#define MCPDM_DOWNLINK_IRQ_MASK                0x00F
#define MCPDM_UPLINK_IRQ_MASK          0xF00
#define DMA_DN_ENABLE          0x1
#define DMA_UP_ENABLE          0x2
#define PDM_UP1_EN             0x0001
#define PDM_UP2_EN             0x0002
#define PDM_UP3_EN             0x0004
#define PDM_DN1_EN             0x0008
#define PDM_DN2_EN             0x0010
#define PDM_DN3_EN             0x0020
#define PDM_DN4_EN             0x0040
#define PDM_DN5_EN             0x0080
#define PDMOUTFORMAT           0x0100
#define CMD_INT                        0x0200
#define STATUS_INT             0x0400
#define SW_UP_RST              0x0800
#define SW_DN_RST              0x1000
#define PDM_UP_MASK            0x007
#define PDM_DN_MASK            0x0F8
#define PDM_CMD_MASK           0x200
#define PDM_STATUS_MASK                0x400
#define PDMOUTFORMAT_LJUST     (0 << 8)
#define PDMOUTFORMAT_RJUST     (1 << 8)
#define UP_THRES_MAX           0xF
#define DN_THRES_MAX           0xF
#define DN_OFST_RX1_EN         0x0001
#define DN_OFST_RX2_EN         0x0100
#define DN_OFST_RX1            1
#define DN_OFST_RX2            9
#define DN_OFST_MAX            0x1F
#define MCPDM_UPLINK           1
#define MCPDM_DOWNLINK         2
struct omap_mcpdm_link ;
struct omap_mcpdm_platform_data ;
struct omap_mcpdm ;
extern void omap_mcpdm_start(int stream);
extern void omap_mcpdm_stop(int stream);
extern int omap_mcpdm_capture_open(struct omap_mcpdm_link *uplink);
extern int omap_mcpdm_playback_open(struct omap_mcpdm_link *downlink);
extern int omap_mcpdm_capture_close(struct omap_mcpdm_link *uplink);
extern int omap_mcpdm_playback_close(struct omap_mcpdm_link *downlink);
extern int omap_mcpdm_request(void);
extern void omap_mcpdm_free(void);
extern int omap_mcpdm_set_offset(int offset1, int offset2);
int __devinit omap_mcpdm_probe(struct platform_device *pdev);
int __devexit omap_mcpdm_remove(struct platform_device *pdev);
