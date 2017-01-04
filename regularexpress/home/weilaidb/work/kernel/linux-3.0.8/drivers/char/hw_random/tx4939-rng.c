#define TX4939_RNG_RCSR		0x00000000
#define TX4939_RNG_ROR(n)	(0x00000018 + (n) * 8)
#define TX4939_RNG_RCSR_INTE	0x00000008
#define TX4939_RNG_RCSR_RST	0x00000004
#define TX4939_RNG_RCSR_FIN	0x00000002
#define TX4939_RNG_RCSR_ST	0x00000001
struct tx4939_rng ;
static void rng_io_start(void)
static void rng_io_end(void)
static u64 read_rng(void __iomem *base, unsigned int offset)
static void write_rng(u64 val, void __iomem *base, unsigned int offset)
static int tx4939_rng_data_present(struct hwrng *rng, int wait)
static int tx4939_rng_data_read(struct hwrng *rng, u32 *buffer)
static int __init tx4939_rng_probe(struct platform_device *dev)
static int __exit tx4939_rng_remove(struct platform_device *dev)
static struct platform_driver tx4939_rng_driver = ;
static int __init tx4939rng_init(void)
static void __exit tx4939rng_exit(void)
module_init(tx4939rng_init);
module_exit(tx4939rng_exit);
MODULE_DESCRIPTION("H/W Random Number Generator (RNG) driver for TX4939");
MODULE_LICENSE("GPL");
