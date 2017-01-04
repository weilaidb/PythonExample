#define CONFIG_MTD_NAND_DISKONCHIP_PROBE_ADDRESS 0
static unsigned long __initdata doc_locations[] = ;
static struct mtd_info *doclist = NULL;
struct doc_priv ;
static u_char empty_read_syndrome[6] = ;
static u_char empty_write_ecc[6] = ;
#define INFTL_BBT_RESERVED_BLOCKS 4
#define DoC_is_MillenniumPlus(doc) ((doc)->ChipID == DOC_ChipID_DocMilPlus16 || (doc)->ChipID == DOC_ChipID_DocMilPlus32)
#define DoC_is_Millennium(doc) ((doc)->ChipID == DOC_ChipID_DocMil)
#define DoC_is_2000(doc) ((doc)->ChipID == DOC_ChipID_Doc2k)
static void doc200x_hwcontrol(struct mtd_info *mtd, int cmd,
unsigned int bitmask);
static void doc200x_select_chip(struct mtd_info *mtd, int chip);
static int debug = 0;
module_param(debug, int, 0);
static int try_dword = 1;
module_param(try_dword, int, 0);
static int no_ecc_failures = 0;
module_param(no_ecc_failures, int, 0);
static int no_autopart = 0;
module_param(no_autopart, int, 0);
static int show_firmware_partition = 0;
module_param(show_firmware_partition, int, 0);
static int inftl_bbt_write = 1;
static int inftl_bbt_write = 0;
module_param(inftl_bbt_write, int, 0);
static unsigned long doc_config_location = CONFIG_MTD_NAND_DISKONCHIP_PROBE_ADDRESS;
module_param(doc_config_location, ulong, 0);
MODULE_PARM_DESC(doc_config_location, "Physical memory address at which to probe for DiskOnChip");
#define SECTOR_SIZE 512
#define NB_DATA (((SECTOR_SIZE + 1) * 8 + 6) / 10)
#define NROOTS 4
#define FCR 510
#define NN 1023
static struct rs_control *rs_decoder;
static int doc_ecc_decode(struct rs_control *rs, uint8_t *data, uint8_t *ecc)
static void DoC_Delay(struct doc_priv *doc, unsigned short cycles)
#define CDSN_CTRL_FR_B_MASK	(CDSN_CTRL_FR_B0 | CDSN_CTRL_FR_B1)
static int _DoC_WaitReady(struct doc_priv *doc)
static inline int DoC_WaitReady(struct doc_priv *doc)
static void doc2000_write_byte(struct mtd_info *mtd, u_char datum)
static u_char doc2000_read_byte(struct mtd_info *mtd)
static void doc2000_writebuf(struct mtd_info *mtd, const u_char *buf, int len)
static void doc2000_readbuf(struct mtd_info *mtd, u_char *buf, int len)
static void doc2000_readbuf_dword(struct mtd_info *mtd, u_char *buf, int len)
static int doc2000_verifybuf(struct mtd_info *mtd, const u_char *buf, int len)
static uint16_t __init doc200x_ident_chip(struct mtd_info *mtd, int nr)
static void __init doc2000_count_chips(struct mtd_info *mtd)
static int doc200x_wait(struct mtd_info *mtd, struct nand_chip *this)
static void doc2001_write_byte(struct mtd_info *mtd, u_char datum)
static u_char doc2001_read_byte(struct mtd_info *mtd)
static void doc2001_writebuf(struct mtd_info *mtd, const u_char *buf, int len)
static void doc2001_readbuf(struct mtd_info *mtd, u_char *buf, int len)
static int doc2001_verifybuf(struct mtd_info *mtd, const u_char *buf, int len)
static u_char doc2001plus_read_byte(struct mtd_info *mtd)
static void doc2001plus_writebuf(struct mtd_info *mtd, const u_char *buf, int len)
static void doc2001plus_readbuf(struct mtd_info *mtd, u_char *buf, int len)
static int doc2001plus_verifybuf(struct mtd_info *mtd, const u_char *buf, int len)
static void doc2001plus_select_chip(struct mtd_info *mtd, int chip)
static void doc200x_select_chip(struct mtd_info *mtd, int chip)
#define CDSN_CTRL_MSK (CDSN_CTRL_CE | CDSN_CTRL_CLE | CDSN_CTRL_ALE)
static void doc200x_hwcontrol(struct mtd_info *mtd, int cmd,
unsigned int ctrl)
static void doc2001plus_command(struct mtd_info *mtd, unsigned command, int column, int page_addr)
static int doc200x_dev_ready(struct mtd_info *mtd)
static int doc200x_block_bad(struct mtd_info *mtd, loff_t ofs, int getchip)
static void doc200x_enable_hwecc(struct mtd_info *mtd, int mode)
static void doc2001plus_enable_hwecc(struct mtd_info *mtd, int mode)
static int doc200x_calculate_ecc(struct mtd_info *mtd, const u_char *dat, unsigned char *ecc_code)
static int doc200x_correct_data(struct mtd_info *mtd, u_char *dat,
u_char *read_ecc, u_char *isnull)
static struct nand_ecclayout doc200x_oobinfo = ;
static int __init find_media_headers(struct mtd_info *mtd, u_char *buf, const char *id, int findmirror)
static inline int __init nftl_partscan(struct mtd_info *mtd, struct mtd_partition *parts)
static inline int __init inftl_partscan(struct mtd_info *mtd, struct mtd_partition *parts)
static int __init nftl_scan_bbt(struct mtd_info *mtd)
static int __init inftl_scan_bbt(struct mtd_info *mtd)
static inline int __init doc2000_init(struct mtd_info *mtd)
static inline int __init doc2001_init(struct mtd_info *mtd)
static inline int __init doc2001plus_init(struct mtd_info *mtd)
static int __init doc_probe(unsigned long physadr)
static void release_nanddoc(void)
static int __init init_nanddoc(void)
static void __exit cleanup_nanddoc(void)
module_init(init_nanddoc);
module_exit(cleanup_nanddoc);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("David Woodhouse <dwmw2@infradead.org>");
MODULE_DESCRIPTION("M-Systems DiskOnChip 2000, Millennium and Millennium Plus device driver");
