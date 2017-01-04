#define	DRIVER_NAME	"omap2-nand"
#define	OMAP_NAND_TIMEOUT_MS	5000
#define NAND_Ecc_P1e		(1 << 0)
#define NAND_Ecc_P2e		(1 << 1)
#define NAND_Ecc_P4e		(1 << 2)
#define NAND_Ecc_P8e		(1 << 3)
#define NAND_Ecc_P16e		(1 << 4)
#define NAND_Ecc_P32e		(1 << 5)
#define NAND_Ecc_P64e		(1 << 6)
#define NAND_Ecc_P128e		(1 << 7)
#define NAND_Ecc_P256e		(1 << 8)
#define NAND_Ecc_P512e		(1 << 9)
#define NAND_Ecc_P1024e		(1 << 10)
#define NAND_Ecc_P2048e		(1 << 11)
#define NAND_Ecc_P1o		(1 << 16)
#define NAND_Ecc_P2o		(1 << 17)
#define NAND_Ecc_P4o		(1 << 18)
#define NAND_Ecc_P8o		(1 << 19)
#define NAND_Ecc_P16o		(1 << 20)
#define NAND_Ecc_P32o		(1 << 21)
#define NAND_Ecc_P64o		(1 << 22)
#define NAND_Ecc_P128o		(1 << 23)
#define NAND_Ecc_P256o		(1 << 24)
#define NAND_Ecc_P512o		(1 << 25)
#define NAND_Ecc_P1024o		(1 << 26)
#define NAND_Ecc_P2048o		(1 << 27)
#define TF(value)	(value ? 1 : 0)
#define P2048e(a)	(TF(a & NAND_Ecc_P2048e)	<< 0)
#define P2048o(a)	(TF(a & NAND_Ecc_P2048o)	<< 1)
#define P1e(a)		(TF(a & NAND_Ecc_P1e)		<< 2)
#define P1o(a)		(TF(a & NAND_Ecc_P1o)		<< 3)
#define P2e(a)		(TF(a & NAND_Ecc_P2e)		<< 4)
#define P2o(a)		(TF(a & NAND_Ecc_P2o)		<< 5)
#define P4e(a)		(TF(a & NAND_Ecc_P4e)		<< 6)
#define P4o(a)		(TF(a & NAND_Ecc_P4o)		<< 7)
#define P8e(a)		(TF(a & NAND_Ecc_P8e)		<< 0)
#define P8o(a)		(TF(a & NAND_Ecc_P8o)		<< 1)
#define P16e(a)		(TF(a & NAND_Ecc_P16e)		<< 2)
#define P16o(a)		(TF(a & NAND_Ecc_P16o)		<< 3)
#define P32e(a)		(TF(a & NAND_Ecc_P32e)		<< 4)
#define P32o(a)		(TF(a & NAND_Ecc_P32o)		<< 5)
#define P64e(a)		(TF(a & NAND_Ecc_P64e)		<< 6)
#define P64o(a)		(TF(a & NAND_Ecc_P64o)		<< 7)
#define P128e(a)	(TF(a & NAND_Ecc_P128e)		<< 0)
#define P128o(a)	(TF(a & NAND_Ecc_P128o)		<< 1)
#define P256e(a)	(TF(a & NAND_Ecc_P256e)		<< 2)
#define P256o(a)	(TF(a & NAND_Ecc_P256o)		<< 3)
#define P512e(a)	(TF(a & NAND_Ecc_P512e)		<< 4)
#define P512o(a)	(TF(a & NAND_Ecc_P512o)		<< 5)
#define P1024e(a)	(TF(a & NAND_Ecc_P1024e)	<< 6)
#define P1024o(a)	(TF(a & NAND_Ecc_P1024o)	<< 7)
#define P8e_s(a)	(TF(a & NAND_Ecc_P8e)		<< 0)
#define P8o_s(a)	(TF(a & NAND_Ecc_P8o)		<< 1)
#define P16e_s(a)	(TF(a & NAND_Ecc_P16e)		<< 2)
#define P16o_s(a)	(TF(a & NAND_Ecc_P16o)		<< 3)
#define P1e_s(a)	(TF(a & NAND_Ecc_P1e)		<< 4)
#define P1o_s(a)	(TF(a & NAND_Ecc_P1o)		<< 5)
#define P2e_s(a)	(TF(a & NAND_Ecc_P2e)		<< 6)
#define P2o_s(a)	(TF(a & NAND_Ecc_P2o)		<< 7)
#define P4e_s(a)	(TF(a & NAND_Ecc_P4e)		<< 0)
#define P4o_s(a)	(TF(a & NAND_Ecc_P4o)		<< 1)
static const char *part_probes[] = ;
static struct nand_ecclayout omap_oobinfo;
static uint8_t scan_ff_pattern[] = ;
static struct nand_bbt_descr bb_descrip_flashbased = ;
struct omap_nand_info ;
static void omap_hwcontrol(struct mtd_info *mtd, int cmd, unsigned int ctrl)
static void omap_read_buf8(struct mtd_info *mtd, u_char *buf, int len)
static void omap_write_buf8(struct mtd_info *mtd, const u_char *buf, int len)
static void omap_read_buf16(struct mtd_info *mtd, u_char *buf, int len)
static void omap_write_buf16(struct mtd_info *mtd, const u_char * buf, int len)
static void omap_read_buf_pref(struct mtd_info *mtd, u_char *buf, int len)
static void omap_write_buf_pref(struct mtd_info *mtd,
const u_char *buf, int len)
static void omap_nand_dma_cb(int lch, u16 ch_status, void *data)
static inline int omap_nand_dma_transfer(struct mtd_info *mtd, void *addr,
unsigned int len, int is_write)
static void omap_read_buf_dma_pref(struct mtd_info *mtd, u_char *buf, int len)
static void omap_write_buf_dma_pref(struct mtd_info *mtd,
const u_char *buf, int len)
static irqreturn_t omap_nand_irq(int this_irq, void *dev)
static void omap_read_buf_irq_pref(struct mtd_info *mtd, u_char *buf, int len)
static void omap_write_buf_irq_pref(struct mtd_info *mtd,
const u_char *buf, int len)
static int omap_verify_buf(struct mtd_info *mtd, const u_char * buf, int len)
static void gen_true_ecc(u8 *ecc_buf)
static int omap_compare_ecc(u8 *ecc_data1,
u8 *ecc_data2,
u8 *page_data)
static int omap_correct_data(struct mtd_info *mtd, u_char *dat,
u_char *read_ecc, u_char *calc_ecc)
static int omap_calculate_ecc(struct mtd_info *mtd, const u_char *dat,
u_char *ecc_code)
static void omap_enable_hwecc(struct mtd_info *mtd, int mode)
static int omap_wait(struct mtd_info *mtd, struct nand_chip *chip)
static int omap_dev_ready(struct mtd_info *mtd)
static int __devinit omap_nand_probe(struct platform_device *pdev)
static int omap_nand_remove(struct platform_device *pdev)
static struct platform_driver omap_nand_driver = ;
static int __init omap_nand_init(void)
static void __exit omap_nand_exit(void)
module_init(omap_nand_init);
module_exit(omap_nand_exit);
MODULE_ALIAS("platform:" DRIVER_NAME);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Glue layer for NAND flash on TI OMAP boards");
