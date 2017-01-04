#define _TIFM_H
enum ;
enum ;
#define TIFM_CTRL_LED             0x00000040
#define TIFM_CTRL_FAST_CLK        0x00000100
#define TIFM_CTRL_POWER_MASK      0x00000007
#define TIFM_SOCK_STATE_OCCUPIED  0x00000008
#define TIFM_SOCK_STATE_POWERED   0x00000080
#define TIFM_FIFO_ENABLE          0x00000001
#define TIFM_FIFO_READY           0x00000001
#define TIFM_FIFO_MORE            0x00000008
#define TIFM_FIFO_INT_SETALL      0x0000ffff
#define TIFM_FIFO_INTMASK         0x00000005
#define TIFM_DMA_RESET            0x00000002
#define TIFM_DMA_TX               0x00008000
#define TIFM_DMA_EN               0x00000001
#define TIFM_DMA_TSIZE            0x0000007f
#define TIFM_TYPE_XD 1
#define TIFM_TYPE_MS 2
#define TIFM_TYPE_SD 3
struct tifm_device_id ;
struct tifm_driver;
struct tifm_dev ;
struct tifm_driver ;
struct tifm_adapter ;
struct tifm_adapter *tifm_alloc_adapter(unsigned int num_sockets,
struct device *dev);
int tifm_add_adapter(struct tifm_adapter *fm);
void tifm_remove_adapter(struct tifm_adapter *fm);
void tifm_free_adapter(struct tifm_adapter *fm);
void tifm_free_device(struct device *dev);
struct tifm_dev *tifm_alloc_device(struct tifm_adapter *fm, unsigned int id,
unsigned char type);
int tifm_register_driver(struct tifm_driver *drv);
void tifm_unregister_driver(struct tifm_driver *drv);
void tifm_eject(struct tifm_dev *sock);
int tifm_has_ms_pif(struct tifm_dev *sock);
int tifm_map_sg(struct tifm_dev *sock, struct scatterlist *sg, int nents,
int direction);
void tifm_unmap_sg(struct tifm_dev *sock, struct scatterlist *sg, int nents,
int direction);
void tifm_queue_work(struct work_struct *work);
static inline void *tifm_get_drvdata(struct tifm_dev *dev)
static inline void tifm_set_drvdata(struct tifm_dev *dev, void *data)
