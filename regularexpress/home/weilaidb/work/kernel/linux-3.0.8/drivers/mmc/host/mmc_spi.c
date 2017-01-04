#define SPI_MMC_RESPONSE_CODE(x)	((x) & 0x1f)
#define SPI_RESPONSE_ACCEPTED		((2 << 1)|1)
#define SPI_RESPONSE_CRC_ERR		((5 << 1)|1)
#define SPI_RESPONSE_WRITE_ERR		((6 << 1)|1)
#define SPI_TOKEN_SINGLE	0xfe
#define SPI_TOKEN_MULTI_WRITE	0xfc
#define SPI_TOKEN_STOP_TRAN	0xfd
#define MMC_SPI_BLOCKSIZE	512
#define r1b_timeout		(HZ * 3)
#define MMC_SPI_BLOCKSATONCE	128
struct scratch ;
struct mmc_spi_host ;
static inline int mmc_cs_off(struct mmc_spi_host *host)
static int
mmc_spi_readbytes(struct mmc_spi_host *host, unsigned len)
static int mmc_spi_skip(struct mmc_spi_host *host, unsigned long timeout,
unsigned n, u8 byte)
static inline int
mmc_spi_wait_unbusy(struct mmc_spi_host *host, unsigned long timeout)
static int mmc_spi_readtoken(struct mmc_spi_host *host, unsigned long timeout)
static char *maptype(struct mmc_command *cmd)
static int mmc_spi_response_get(struct mmc_spi_host *host,
struct mmc_command *cmd, int cs_on)
static int
mmc_spi_command_send(struct mmc_spi_host *host,
struct mmc_request *mrq,
struct mmc_command *cmd, int cs_on)
static void
mmc_spi_setup_data_message(
struct mmc_spi_host	*host,
int			multiple,
enum dma_data_direction	direction)
static int
mmc_spi_writeblock(struct mmc_spi_host *host, struct spi_transfer *t,
unsigned long timeout)
static int
mmc_spi_readblock(struct mmc_spi_host *host, struct spi_transfer *t,
unsigned long timeout)
static void
mmc_spi_data_do(struct mmc_spi_host *host, struct mmc_command *cmd,
struct mmc_data *data, u32 blk_size)
static void mmc_spi_request(struct mmc_host *mmc, struct mmc_request *mrq)
static void mmc_spi_initsequence(struct mmc_spi_host *host)
static char *mmc_powerstring(u8 power_mode)
static void mmc_spi_set_ios(struct mmc_host *mmc, struct mmc_ios *ios)
static int mmc_spi_get_ro(struct mmc_host *mmc)
static int mmc_spi_get_cd(struct mmc_host *mmc)
static const struct mmc_host_ops mmc_spi_ops = ;
static irqreturn_t
mmc_spi_detect_irq(int irq, void *mmc)
static int mmc_spi_probe(struct spi_device *spi)
static int __devexit mmc_spi_remove(struct spi_device *spi)
static struct of_device_id mmc_spi_of_match_table[] __devinitdata = ;
static struct spi_driver mmc_spi_driver = ;
static int __init mmc_spi_init(void)
module_init(mmc_spi_init);
static void __exit mmc_spi_exit(void)
module_exit(mmc_spi_exit);
MODULE_AUTHOR("Mike Lavender, David Brownell, "
"Hans-Peter Nilsson, Jan Nikitenko");
MODULE_DESCRIPTION("SPI SD/MMC host driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("spi:mmc_spi");
