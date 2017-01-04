#define __LINUX_SPI_H
extern struct bus_type spi_bus_type;
struct spi_device ;
static inline struct spi_device *to_spi_device(struct device *dev)
static inline struct spi_device *spi_dev_get(struct spi_device *spi)
static inline void spi_dev_put(struct spi_device *spi)
static inline void *spi_get_ctldata(struct spi_device *spi)
static inline void spi_set_ctldata(struct spi_device *spi, void *state)
static inline void spi_set_drvdata(struct spi_device *spi, void *data)
static inline void *spi_get_drvdata(struct spi_device *spi)
struct spi_message;
struct spi_driver ;
static inline struct spi_driver *to_spi_driver(struct device_driver *drv)
extern int spi_register_driver(struct spi_driver *sdrv);
static inline void spi_unregister_driver(struct spi_driver *sdrv)
struct spi_master ;
static inline void *spi_master_get_devdata(struct spi_master *master)
static inline void spi_master_set_devdata(struct spi_master *master, void *data)
static inline struct spi_master *spi_master_get(struct spi_master *master)
static inline void spi_master_put(struct spi_master *master)
extern struct spi_master *
spi_alloc_master(struct device *host, unsigned size);
extern int spi_register_master(struct spi_master *master);
extern void spi_unregister_master(struct spi_master *master);
extern struct spi_master *spi_busnum_to_master(u16 busnum);
struct spi_transfer ;
struct spi_message ;
static inline void spi_message_init(struct spi_message *m)
static inline void
spi_message_add_tail(struct spi_transfer *t, struct spi_message *m)
static inline void
spi_transfer_del(struct spi_transfer *t)
static inline struct spi_message *spi_message_alloc(unsigned ntrans, gfp_t flags)
static inline void spi_message_free(struct spi_message *m)
extern int spi_setup(struct spi_device *spi);
extern int spi_async(struct spi_device *spi, struct spi_message *message);
extern int spi_async_locked(struct spi_device *spi,
struct spi_message *message);
extern int spi_sync(struct spi_device *spi, struct spi_message *message);
extern int spi_sync_locked(struct spi_device *spi, struct spi_message *message);
extern int spi_bus_lock(struct spi_master *master);
extern int spi_bus_unlock(struct spi_master *master);
static inline int
spi_write(struct spi_device *spi, const void *buf, size_t len)
static inline int
spi_read(struct spi_device *spi, void *buf, size_t len)
extern int spi_write_then_read(struct spi_device *spi,
const void *txbuf, unsigned n_tx,
void *rxbuf, unsigned n_rx);
static inline ssize_t spi_w8r8(struct spi_device *spi, u8 cmd)
static inline ssize_t spi_w8r16(struct spi_device *spi, u8 cmd)
struct spi_board_info ;
extern int
spi_register_board_info(struct spi_board_info const *info, unsigned n);
static inline int
spi_register_board_info(struct spi_board_info const *info, unsigned n)
extern struct spi_device *
spi_alloc_device(struct spi_master *master);
extern int
spi_add_device(struct spi_device *spi);
extern struct spi_device *
spi_new_device(struct spi_master *, struct spi_board_info *);
static inline void
spi_unregister_device(struct spi_device *spi)
extern const struct spi_device_id *
spi_get_device_id(const struct spi_device *sdev);
