#define _FM_DRV_H
#define FM_DRV_VERSION            "0.10"
#define FM_DRV_RADIO_VERSION      KERNEL_VERSION(0, 0, 1)
#define FM_DRV_NAME               "ti_fmdrv"
#define FM_DRV_CARD_SHORT_NAME    "TI FM Radio"
#define FM_DRV_CARD_LONG_NAME     "Texas Instruments FM Radio"
#define FM_INTTASK_RUNNING            0
#define FM_INTTASK_SCHEDULE_PENDING   1
#define FM_FW_DW_INPROGRESS     2
#define FM_CORE_READY                 3
#define FM_CORE_TRANSPORT_READY       4
#define FM_AF_SWITCH_INPROGRESS	      5
#define FM_CORE_TX_XMITING	      6
#define FM_TUNE_COMPLETE	      0x1
#define FM_BAND_LIMIT		      0x2
#define FM_DRV_TX_TIMEOUT      (5*HZ)
#define FM_DRV_RX_SEEK_TIMEOUT (20*HZ)
#define fmerr(format, ...) \
printk(KERN_ERR "fmdrv: " format, ## __VA_ARGS__)
#define fmwarn(format, ...) \
printk(KERN_WARNING "fmdrv: " format, ##__VA_ARGS__)
#define fmdbg(format, ...) \
printk(KERN_DEBUG "fmdrv: " format, ## __VA_ARGS__)
#define fmdbg(format, ...)
enum ;
#define FM_RX_RDS_INFO_FIELD_MAX	8
struct fm_rdsdata_format ;
struct region_info ;
struct fmdev;
typedef void (*int_handler_prototype) (struct fmdev *);
struct fm_irq ;
struct fm_rds ;
#define FM_RDS_MAX_AF_LIST		25
struct tuned_station_info ;
struct fm_rx ;
#define FMTX_RDS_TXT_STR_SIZE	25
struct tx_rds ;
struct fmtx_data ;
struct fmdev ;
