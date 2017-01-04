struct spi_bitbang_cs ;
static unsigned bitbang_txrx_8(
struct spi_device	*spi,
u32			(*txrx_word)(struct spi_device *spi,
unsigned nsecs,
u32 word, u8 bits),
unsigned		ns,
struct spi_transfer	*t
)
static unsigned bitbang_txrx_16(
struct spi_device	*spi,
u32			(*txrx_word)(struct spi_device *spi,
unsigned nsecs,
u32 word, u8 bits),
unsigned		ns,
struct spi_transfer	*t
)
static unsigned bitbang_txrx_32(
struct spi_device	*spi,
u32			(*txrx_word)(struct spi_device *spi,
unsigned nsecs,
u32 word, u8 bits),
unsigned		ns,
struct spi_transfer	*t
)
int spi_bitbang_setup_transfer(struct spi_device *spi, struct spi_transfer *t)
EXPORT_SYMBOL_GPL(spi_bitbang_setup_transfer);
int spi_bitbang_setup(struct spi_device *spi)
EXPORT_SYMBOL_GPL(spi_bitbang_setup);
void spi_bitbang_cleanup(struct spi_device *spi)
EXPORT_SYMBOL_GPL(spi_bitbang_cleanup);
static int spi_bitbang_bufs(struct spi_device *spi, struct spi_transfer *t)
static void bitbang_work(struct work_struct *work)
int spi_bitbang_transfer(struct spi_device *spi, struct spi_message *m)
EXPORT_SYMBOL_GPL(spi_bitbang_transfer);
int spi_bitbang_start(struct spi_bitbang *bitbang)
EXPORT_SYMBOL_GPL(spi_bitbang_start);
int spi_bitbang_stop(struct spi_bitbang *bitbang)
EXPORT_SYMBOL_GPL(spi_bitbang_stop);
MODULE_LICENSE("GPL");
