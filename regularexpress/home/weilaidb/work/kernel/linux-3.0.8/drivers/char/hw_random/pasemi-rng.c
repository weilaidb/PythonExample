#define SDCRNG_CTL_REG			0x00
#define   SDCRNG_CTL_FVLD_M		0x0000f000
#define   SDCRNG_CTL_FVLD_S		12
#define   SDCRNG_CTL_KSZ		0x00000800
#define   SDCRNG_CTL_RSRC_CRG		0x00000010
#define   SDCRNG_CTL_RSRC_RRG		0x00000000
#define   SDCRNG_CTL_CE			0x00000004
#define   SDCRNG_CTL_RE			0x00000002
#define   SDCRNG_CTL_DR			0x00000001
#define   SDCRNG_CTL_SELECT_RRG_RNG	(SDCRNG_CTL_RE | SDCRNG_CTL_RSRC_RRG)
#define   SDCRNG_CTL_SELECT_CRG_RNG	(SDCRNG_CTL_CE | SDCRNG_CTL_RSRC_CRG)
#define SDCRNG_VAL_REG			0x20
#define MODULE_NAME "pasemi_rng"
static int pasemi_rng_data_present(struct hwrng *rng, int wait)
static int pasemi_rng_data_read(struct hwrng *rng, u32 *data)
static int pasemi_rng_init(struct hwrng *rng)
static void pasemi_rng_cleanup(struct hwrng *rng)
static struct hwrng pasemi_rng = ;
static int __devinit rng_probe(struct platform_device *ofdev)
static int __devexit rng_remove(struct platform_device *dev)
static struct of_device_id rng_match[] = ;
static struct platform_driver rng_driver = ;
static int __init rng_init(void)
module_init(rng_init);
static void __exit rng_exit(void)
module_exit(rng_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Egor Martovetsky <egor@pasemi.com>");
MODULE_DESCRIPTION("H/W RNG driver for PA Semi processor");
