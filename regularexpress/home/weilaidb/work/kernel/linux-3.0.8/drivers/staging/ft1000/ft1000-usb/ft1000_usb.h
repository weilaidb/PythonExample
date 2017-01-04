#define _FT1000_USB_H_
#define FT1000_DRV_VER      0x01010403
#define  MODESZ              2
#define  MAX_NUM_APP         6
#define  MAX_MSG_LIMIT       200
#define  NUM_OF_FREE_BUFFERS 1500
#define MEDIA_STATE        0x0010
#define DSP_PROVISION      0x0030
#define DSP_INIT_MSG       0x0050
#define DSP_STORE_INFO       0x0070
#define DSP_GET_INFO         0x0071
#define GET_DRV_ERR_RPT_MSG  0x0073
#define RSP_DRV_ERR_RPT_MSG  0x0074
#define MAX_CMD_SQSIZE          1780
#define SLOWQ_TYPE              0
#define PSEUDOSZ                16
#define DSP_QID_OFFSET          4
#define	FT1000_REG_DFIFO_STAT	0x0008
#define	FT1000_REG_DPRAM_DATA	0x000C
#define FT1000_DSP_LED          0xFFA
#define FT1000_MAG_DSP_LED               0x3FE
#define FT1000_MAG_DSP_LED_INDX          0x1
#define  SUCCESS             0x00
#define DRIVERID                0x00
#define DSP_CONDRESET_INFO   0x7ef2
#define DSP_HB_INFO          0x7ef0
#define hi_mag                  0x6968
#define ho_mag                  0x6f68
struct media_msg  __attribute__ ((packed));
struct dsp_init_msg  __attribute__ ((packed));
struct app_info_block  __attribute__((packed));
struct prov_record ;
#define DEBUG(args...) printk(KERN_INFO args)
#define FALSE           0
#define TRUE            1
#define STATUS_SUCCESS  0
#define STATUS_FAILURE   0x1001
#define FT1000_STATUS_CLOSING  0x01
#define LARGE_TIMEOUT   5000
#define MAX_DSP_SESS_REC        1024
#define MAX_NUM_CARDS        32
#define DSPVERSZ                4
#define HWSERNUMSZ              16
#define SKUSZ                   20
#define EUISZ                   8
#define CALVERSZ                2
#define CALDATESZ               6
#define MODESZ                  2
#define DSPID                   0x20
#define HOSTID                  0x10
#define DSPOAM                  0x80
#define DSPAIRID                0x90
#define DRIVERID                0x00
#define FMM                     0x10
#define NETWORKID               0x20
#define AUTOLNCHID              0x30
#define DSPLPBKID               0x40
#define DSPBCMSGID              0x10
#define ENET_MAX_SIZE           1514
#define ENET_HEADER_SIZE        14
#define CIS_NET_ADDR_OFFSET 0xff0
#define FT1000_REG_MAG_UFDR 		0x0000
#define FT1000_REG_MAG_UFDRL		0x0000
#define FT1000_REG_MAG_UFDRH		0x0002
#define FT1000_REG_MAG_UFER			0x0004
#define FT1000_REG_MAG_UFSR			0x0006
#define FT1000_REG_MAG_DFR			0x0008
#define FT1000_REG_MAG_DFRL			0x0008
#define FT1000_REG_MAG_DFRH			0x000a
#define FT1000_REG_MAG_DFSR			0x000c
#define FT1000_REG_MAG_DPDATA		0x0010
#define FT1000_REG_MAG_DPDATAL		0x0010
#define FT1000_REG_MAG_DPDATAH		0x0012
#define	FT1000_REG_MAG_WATERMARK	0x002c
#define FT1000_REG_MAG_VERSION		0x0030
#define	FT1000_REG_DPRAM_ADDR	0x000E
#define	FT1000_REG_SUP_CTRL		0x0020
#define	FT1000_REG_SUP_STAT		0x0022
#define	FT1000_REG_RESET		0x0024
#define	FT1000_REG_SUP_ISR		0x0026
#define	FT1000_REG_SUP_IMASK	0x0028
#define	FT1000_REG_DOORBELL		0x002a
#define FT1000_REG_ASIC_ID      0x002e
#define FT1000_DB_DPRAM_RX		0x0001
#define FT1000_DB_DNLD_RX       0x0002
#define FT1000_ASIC_RESET_REQ   0x0004
#define FT1000_DSP_ASIC_RESET   0x0008
#define FT1000_DB_COND_RESET    0x0010
#define FT1000_DB_DPRAM_TX		0x0100
#define FT1000_DB_DNLD_TX       0x0200
#define FT1000_ASIC_RESET_DSP   0x0400
#define FT1000_DB_HB            0x1000
#define FT1000_DPRAM_BASE		0x1000
#define FT1000_DPRAM_TX_BASE	0x1002
#define FT1000_DPRAM_RX_BASE	0x1800
#define FT1000_DPRAM_SIZE       0x1000
#define FT1000_DRV_DEBUG        0x17E0
#define FT1000_FIFO_LEN         0x17FC
#define FT1000_HI_HO            0x17FE
#define FT1000_DSP_STATUS       0x1FFE
#define FT1000_DSP_CON_STATE    0x1FF8
#define FT1000_DSP_LEDS         0x1FFA
#define DSP_TIMESTAMP           0x1FFC
#define DSP_TIMESTAMP_DIFF      0x1FFA
#define FT1000_DPRAM_FEFE    	0x1002
#define FT1000_DSP_TIMER0       0x1FF0
#define FT1000_DSP_TIMER1       0x1FF2
#define FT1000_DSP_TIMER2       0x1FF4
#define FT1000_DSP_TIMER3       0x1FF6
#define FT1000_DPRAM_MAG_TX_BASE	 	 0x0000
#define FT1000_DPRAM_MAG_RX_BASE		 0x0200
#define FT1000_MAG_FIFO_LEN              0x1FF
#define FT1000_MAG_FIFO_LEN_INDX         0x1
#define FT1000_MAG_HI_HO                 0x1FF
#define FT1000_MAG_HI_HO_INDX            0x0
#define FT1000_MAG_DSP_LEDS              0x3FE
#define FT1000_MAG_DSP_LEDS_INDX         0x1
#define FT1000_MAG_DSP_CON_STATE         0x3FE
#define FT1000_MAG_DSP_CON_STATE_INDX    0x0
#define FT1000_MAG_DPRAM_FEFE            0x000
#define FT1000_MAG_DPRAM_FEFE_INDX       0x0
#define FT1000_MAG_DSP_TIMER0            0x3FC
#define FT1000_MAG_DSP_TIMER0_INDX       0x1
#define FT1000_MAG_DSP_TIMER1            0x3FC
#define FT1000_MAG_DSP_TIMER1_INDX       0x0
#define FT1000_MAG_DSP_TIMER2            0x3FD
#define FT1000_MAG_DSP_TIMER2_INDX       0x1
#define FT1000_MAG_DSP_TIMER3            0x3FD
#define FT1000_MAG_DSP_TIMER3_INDX       0x0
#define FT1000_MAG_TOTAL_LEN             0x200
#define FT1000_MAG_TOTAL_LEN_INDX        0x1
#define FT1000_MAG_PH_LEN                0x200
#define FT1000_MAG_PH_LEN_INDX           0x0
#define FT1000_MAG_PORT_ID               0x201
#define FT1000_MAG_PORT_ID_INDX          0x0
#define ISR_EMPTY			(u8)0x00
#define ISR_DOORBELL_ACK	(u8)0x01
#define ISR_DOORBELL_PEND	(u8)0x02
#define ISR_RCV				(u8)0x04
#define ISR_WATERMARK		(u8)0x08
#define ISR_MASK_NONE			0x0000
#define ISR_MASK_DOORBELL_ACK	0x0001
#define ISR_MASK_DOORBELL_PEND	0x0002
#define ISR_MASK_RCV			0x0004
#define ISR_MASK_WATERMARK		0x0008
#define ISR_MASK_ALL			0xffff
#define HOST_INTF_LE            0x0000
#define HOST_INTF_BE            0x0001
#define ISR_DEFAULT_MASK		0x7ff9
#define hi                      0x6869
#define ho                      0x686f
#define FT1000_ASIC_RESET       0x80
#define FT1000_ASIC_BITS        0x51
#define FT1000_ASIC_MAG_BITS    0x55
#define FT1000_COR_OFFSET       0x100
#define ELECTRABUZZ_ID			0
#define MAGNEMITE_ID			0x1a01
#define MAX_ASIC_RESET_CNT      20
#define DSP_RESET_BIT           0x1
#define ASIC_RESET_BIT          0x2
#define DSP_UNENCRYPTED         0x4
#define DSP_ENCRYPTED           0x8
#define EFUSE_MEM_DISABLE       0x0040
#define MAX_BUF_SIZE            4096
struct drv_msg  __attribute__ ((packed));
struct ft1000_device
__attribute__ ((packed));
struct ft1000_debug_dirs ;
struct ft1000_info ;
struct dpram_blk  __attribute__ ((packed));
int ft1000_read_register(struct ft1000_device *ft1000dev, u16* Data, u16 nRegIndx);
int ft1000_write_register(struct ft1000_device *ft1000dev, u16 value, u16 nRegIndx);
int ft1000_read_dpram32(struct ft1000_device *ft1000dev, u16 indx, u8 *buffer, u16 cnt);
int ft1000_write_dpram32(struct ft1000_device *ft1000dev, u16 indx, u8 *buffer, u16 cnt);
int ft1000_read_dpram16(struct ft1000_device *ft1000dev, u16 indx, u8 *buffer, u8 highlow);
int ft1000_write_dpram16(struct ft1000_device *ft1000dev, u16 indx, u16 value, u8 highlow);
int fix_ft1000_read_dpram32(struct ft1000_device *ft1000dev, u16 indx, u8 *buffer);
int fix_ft1000_write_dpram32(struct ft1000_device *ft1000dev, u16 indx, u8 *buffer);
extern void *pFileStart;
extern size_t FileLength;
extern int numofmsgbuf;
int ft1000_close (struct net_device *dev);
u16 scram_dnldr(struct ft1000_device *ft1000dev, void *pFileStart, u32  FileLength);
extern struct list_head freercvpool;
extern spinlock_t free_buff_lock;
int ft1000_create_dev(struct ft1000_device *dev);
void ft1000_destroy_dev(struct net_device *dev);
extern void card_send_command(struct ft1000_device *ft1000dev, void *ptempbuffer, int size);
struct dpram_blk *ft1000_get_buffer(struct list_head *bufflist);
void ft1000_free_buffer(struct dpram_blk *pdpram_blk, struct list_head *plist);
int dsp_reload(struct ft1000_device *ft1000dev);
int init_ft1000_netdev(struct ft1000_device *ft1000dev);
struct usb_interface;
int reg_ft1000_netdev(struct ft1000_device *ft1000dev, struct usb_interface *intf);
int ft1000_poll(void* dev_id);
int ft1000_init_proc(struct net_device *dev);
void ft1000_cleanup_proc(struct ft1000_info *info);
