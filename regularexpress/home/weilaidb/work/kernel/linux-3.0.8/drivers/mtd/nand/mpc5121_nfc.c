#define NFC_MAIN_AREA(n)	((n) *  0x200)
#define NFC_SPARE_BUFFERS	8
#define NFC_SPARE_LEN		0x40
#define NFC_SPARE_AREA(n)	(0x1000 + ((n) * NFC_SPARE_LEN))
#define NFC_BUF_ADDR		0x1E04
#define NFC_FLASH_ADDR		0x1E06
#define NFC_FLASH_CMD		0x1E08
#define NFC_CONFIG		0x1E0A
#define NFC_ECC_STATUS1		0x1E0C
#define NFC_ECC_STATUS2		0x1E0E
#define NFC_SPAS		0x1E10
#define NFC_WRPROT		0x1E12
#define NFC_NF_WRPRST		0x1E18
#define NFC_CONFIG1		0x1E1A
#define NFC_CONFIG2		0x1E1C
#define NFC_UNLOCKSTART_BLK0	0x1E20
#define NFC_UNLOCKEND_BLK0	0x1E22
#define NFC_UNLOCKSTART_BLK1	0x1E24
#define NFC_UNLOCKEND_BLK1	0x1E26
#define NFC_UNLOCKSTART_BLK2	0x1E28
#define NFC_UNLOCKEND_BLK2	0x1E2A
#define NFC_UNLOCKSTART_BLK3	0x1E2C
#define NFC_UNLOCKEND_BLK3	0x1E2E
#define NFC_RBA_MASK		(7 << 0)
#define NFC_ACTIVE_CS_SHIFT	5
#define NFC_ACTIVE_CS_MASK	(3 << NFC_ACTIVE_CS_SHIFT)
#define NFC_BLS_UNLOCKED	(1 << 1)
#define NFC_ECC_4BIT		(1 << 0)
#define NFC_FULL_PAGE_DMA	(1 << 1)
#define NFC_SPARE_ONLY		(1 << 2)
#define NFC_ECC_ENABLE		(1 << 3)
#define NFC_INT_MASK		(1 << 4)
#define NFC_BIG_ENDIAN		(1 << 5)
#define NFC_RESET		(1 << 6)
#define NFC_CE			(1 << 7)
#define NFC_ONE_CYCLE		(1 << 8)
#define NFC_PPB_32		(0 << 9)
#define NFC_PPB_64		(1 << 9)
#define NFC_PPB_128		(2 << 9)
#define NFC_PPB_256		(3 << 9)
#define NFC_PPB_MASK		(3 << 9)
#define NFC_FULL_PAGE_INT	(1 << 11)
#define NFC_COMMAND		(1 << 0)
#define NFC_ADDRESS		(1 << 1)
#define NFC_INPUT		(1 << 2)
#define NFC_OUTPUT		(1 << 3)
#define NFC_ID			(1 << 4)
#define NFC_STATUS		(1 << 5)
#define NFC_CMD_FAIL		(1 << 15)
#define NFC_INT			(1 << 15)
#define NFC_WPC_LOCK_TIGHT	(1 << 0)
#define NFC_WPC_LOCK		(1 << 1)
#define NFC_WPC_UNLOCK		(1 << 2)
#define	DRV_NAME		"mpc5121_nfc"
#define NFC_RESET_TIMEOUT	1000
#define NFC_TIMEOUT		(HZ / 10)
struct mpc5121_nfc_prv ;
static void mpc5121_nfc_done(struct mtd_info *mtd);
static const char *mpc5121_nfc_pprobes[] = ;
static inline u16 nfc_read(struct mtd_info *mtd, uint reg)
static inline void nfc_write(struct mtd_info *mtd, uint reg, u16 val)
static inline void nfc_set(struct mtd_info *mtd, uint reg, u16 bits)
static inline void nfc_clear(struct mtd_info *mtd, uint reg, u16 bits)
static inline void mpc5121_nfc_send_addr(struct mtd_info *mtd, u16 addr)
static inline void mpc5121_nfc_send_cmd(struct mtd_info *mtd, u16 cmd)
static inline void mpc5121_nfc_send_prog_page(struct mtd_info *mtd)
static inline void mpc5121_nfc_send_read_page(struct mtd_info *mtd)
static inline void mpc5121_nfc_send_read_id(struct mtd_info *mtd)
static inline void mpc5121_nfc_send_read_status(struct mtd_info *mtd)
static irqreturn_t mpc5121_nfc_irq(int irq, void *data)
static void mpc5121_nfc_done(struct mtd_info *mtd)
static void mpc5121_nfc_addr_cycle(struct mtd_info *mtd, int column, int page)
static void mpc5121_nfc_select_chip(struct mtd_info *mtd, int chip)
static int ads5121_chipselect_init(struct mtd_info *mtd)
static void ads5121_select_chip(struct mtd_info *mtd, int chip)
static int mpc5121_nfc_dev_ready(struct mtd_info *mtd)
static void mpc5121_nfc_command(struct mtd_info *mtd, unsigned command,
int column, int page)
static void mpc5121_nfc_copy_spare(struct mtd_info *mtd, uint offset,
u8 *buffer, uint size, int wr)
static void mpc5121_nfc_buf_copy(struct mtd_info *mtd, u_char *buf, int len,
int wr)
static void mpc5121_nfc_read_buf(struct mtd_info *mtd, u_char *buf, int len)
static void mpc5121_nfc_write_buf(struct mtd_info *mtd,
const u_char *buf, int len)
static int mpc5121_nfc_verify_buf(struct mtd_info *mtd,
const u_char *buf, int len)
static u8 mpc5121_nfc_read_byte(struct mtd_info *mtd)
static u16 mpc5121_nfc_read_word(struct mtd_info *mtd)
static int mpc5121_nfc_read_hw_config(struct mtd_info *mtd)
static void mpc5121_nfc_free(struct device *dev, struct mtd_info *mtd)
static int __devinit mpc5121_nfc_probe(struct platform_device *op)
static int __devexit mpc5121_nfc_remove(struct platform_device *op)
static struct of_device_id mpc5121_nfc_match[] __devinitdata = ;
static struct platform_driver mpc5121_nfc_driver = ;
static int __init mpc5121_nfc_init(void)
module_init(mpc5121_nfc_init);
static void __exit mpc5121_nfc_cleanup(void)
module_exit(mpc5121_nfc_cleanup);
MODULE_AUTHOR("Freescale Semiconductor, Inc.");
MODULE_DESCRIPTION("MPC5121 NAND MTD driver");
MODULE_LICENSE("GPL");
