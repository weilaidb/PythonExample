#define DRIVER_NAME "tifm_ms"
static int no_dma;
module_param(no_dma, bool, 0644);
#define TIFM_MS_STAT_DRQ     0x04000
#define TIFM_MS_STAT_MSINT   0x02000
#define TIFM_MS_STAT_RDY     0x01000
#define TIFM_MS_STAT_CRC     0x00200
#define TIFM_MS_STAT_TOE     0x00100
#define TIFM_MS_STAT_EMP     0x00020
#define TIFM_MS_STAT_FUL     0x00010
#define TIFM_MS_STAT_CED     0x00008
#define TIFM_MS_STAT_ERR     0x00004
#define TIFM_MS_STAT_BRQ     0x00002
#define TIFM_MS_STAT_CNK     0x00001
#define TIFM_MS_SYS_DMA      0x10000
#define TIFM_MS_SYS_RESET    0x08000
#define TIFM_MS_SYS_SRAC     0x04000
#define TIFM_MS_SYS_INTEN    0x02000
#define TIFM_MS_SYS_NOCRC    0x01000
#define TIFM_MS_SYS_INTCLR   0x00800
#define TIFM_MS_SYS_MSIEN    0x00400
#define TIFM_MS_SYS_FCLR     0x00200
#define TIFM_MS_SYS_FDIR     0x00100
#define TIFM_MS_SYS_DAM      0x00080
#define TIFM_MS_SYS_DRM      0x00040
#define TIFM_MS_SYS_DRQSL    0x00020
#define TIFM_MS_SYS_REI      0x00010
#define TIFM_MS_SYS_REO      0x00008
#define TIFM_MS_SYS_BSY_MASK 0x00007
#define TIFM_MS_SYS_FIFO     (TIFM_MS_SYS_INTEN | TIFM_MS_SYS_MSIEN \
| TIFM_MS_SYS_FCLR | TIFM_MS_SYS_BSY_MASK)
enum ;
struct tifm_ms ;
static unsigned int tifm_ms_read_data(struct tifm_ms *host,
unsigned char *buf, unsigned int length)
static unsigned int tifm_ms_write_data(struct tifm_ms *host,
unsigned char *buf, unsigned int length)
static unsigned int tifm_ms_transfer_data(struct tifm_ms *host)
static int tifm_ms_issue_cmd(struct tifm_ms *host)
static void tifm_ms_complete_cmd(struct tifm_ms *host)
static int tifm_ms_check_status(struct tifm_ms *host)
static void tifm_ms_data_event(struct tifm_dev *sock)
static void tifm_ms_card_event(struct tifm_dev *sock)
static void tifm_ms_req_tasklet(unsigned long data)
static void tifm_ms_dummy_submit(struct memstick_host *msh)
static void tifm_ms_submit_req(struct memstick_host *msh)
static int tifm_ms_set_param(struct memstick_host *msh,
enum memstick_param param,
int value)
static void tifm_ms_abort(unsigned long data)
static int tifm_ms_probe(struct tifm_dev *sock)
static void tifm_ms_remove(struct tifm_dev *sock)
static int tifm_ms_suspend(struct tifm_dev *sock, pm_message_t state)
static int tifm_ms_resume(struct tifm_dev *sock)
#define tifm_ms_suspend NULL
#define tifm_ms_resume NULL
static struct tifm_device_id tifm_ms_id_tbl[] = ;
static struct tifm_driver tifm_ms_driver = ;
static int __init tifm_ms_init(void)
static void __exit tifm_ms_exit(void)
MODULE_AUTHOR("Alex Dubov");
MODULE_DESCRIPTION("TI FlashMedia MemoryStick driver");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(tifm, tifm_ms_id_tbl);
module_init(tifm_ms_init);
module_exit(tifm_ms_exit);
