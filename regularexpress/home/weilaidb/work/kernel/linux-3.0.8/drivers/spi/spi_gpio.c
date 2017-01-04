struct spi_gpio ;
#define DRIVER_NAME	"spi_gpio"
#define GENERIC_BITBANG
#define SPI_MISO_GPIO	((pdata)->miso)
#define SPI_MOSI_GPIO	((pdata)->mosi)
#define SPI_SCK_GPIO	((pdata)->sck)
#define SPI_N_CHIPSEL	((pdata)->num_chipselect)
static inline const struct spi_gpio_platform_data * __pure
spi_to_pdata(const struct spi_device *spi)
#define pdata		spi_to_pdata(spi)
static inline void setsck(const struct spi_device *spi, int is_on)
static inline void setmosi(const struct spi_device *spi, int is_on)
static inline int getmiso(const struct spi_device *spi)
#undef pdata
#define spidelay(nsecs)	do  while (0)
static u32 spi_gpio_txrx_word_mode0(struct spi_device *spi,
unsigned nsecs, u32 word, u8 bits)
static u32 spi_gpio_txrx_word_mode1(struct spi_device *spi,
unsigned nsecs, u32 word, u8 bits)
static u32 spi_gpio_txrx_word_mode2(struct spi_device *spi,
unsigned nsecs, u32 word, u8 bits)
static u32 spi_gpio_txrx_word_mode3(struct spi_device *spi,
unsigned nsecs, u32 word, u8 bits)
static u32 spi_gpio_spec_txrx_word_mode0(struct spi_device *spi,
unsigned nsecs, u32 word, u8 bits)
static u32 spi_gpio_spec_txrx_word_mode1(struct spi_device *spi,
unsigned nsecs, u32 word, u8 bits)
static u32 spi_gpio_spec_txrx_word_mode2(struct spi_device *spi,
unsigned nsecs, u32 word, u8 bits)
static u32 spi_gpio_spec_txrx_word_mode3(struct spi_device *spi,
unsigned nsecs, u32 word, u8 bits)
static void spi_gpio_chipselect(struct spi_device *spi, int is_active)
static int spi_gpio_setup(struct spi_device *spi)
static void spi_gpio_cleanup(struct spi_device *spi)
static int __init spi_gpio_alloc(unsigned pin, const char *label, bool is_in)
static int __init
spi_gpio_request(struct spi_gpio_platform_data *pdata, const char *label,
u16 *res_flags)
static int __init spi_gpio_probe(struct platform_device *pdev)
static int __exit spi_gpio_remove(struct platform_device *pdev)
MODULE_ALIAS("platform:" DRIVER_NAME);
static struct platform_driver spi_gpio_driver = ;
static int __init spi_gpio_init(void)
module_init(spi_gpio_init);
static void __exit spi_gpio_exit(void)
module_exit(spi_gpio_exit);
MODULE_DESCRIPTION("SPI master driver using generic bitbanged GPIO ");
MODULE_AUTHOR("David Brownell");
MODULE_LICENSE("GPL");
