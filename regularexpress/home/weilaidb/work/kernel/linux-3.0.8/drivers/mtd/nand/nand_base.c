static struct nand_ecclayout nand_oob_8 = ;
static struct nand_ecclayout nand_oob_16 = ;
static struct nand_ecclayout nand_oob_64 = ;
static struct nand_ecclayout nand_oob_128 = ;
static int nand_get_device(struct nand_chip *chip, struct mtd_info *mtd,
int new_state);
static int nand_do_write_oob(struct mtd_info *mtd, loff_t to,
struct mtd_oob_ops *ops);
DEFINE_LED_TRIGGER(nand_led_trigger);
static int check_offs_len(struct mtd_info *mtd,
loff_t ofs, uint64_t len)
static void nand_release_device(struct mtd_info *mtd)
static uint8_t nand_read_byte(struct mtd_info *mtd)
static uint8_t nand_read_byte16(struct mtd_info *mtd)
static u16 nand_read_word(struct mtd_info *mtd)
static void nand_select_chip(struct mtd_info *mtd, int chipnr)
static void nand_write_buf(struct mtd_info *mtd, const uint8_t *buf, int len)
static void nand_read_buf(struct mtd_info *mtd, uint8_t *buf, int len)
static int nand_verify_buf(struct mtd_info *mtd, const uint8_t *buf, int len)
static void nand_write_buf16(struct mtd_info *mtd, const uint8_t *buf, int len)
static void nand_read_buf16(struct mtd_info *mtd, uint8_t *buf, int len)
static int nand_verify_buf16(struct mtd_info *mtd, const uint8_t *buf, int len)
static int nand_block_bad(struct mtd_info *mtd, loff_t ofs, int getchip)
static int nand_default_block_markbad(struct mtd_info *mtd, loff_t ofs)
static int nand_check_wp(struct mtd_info *mtd)
static int nand_block_checkbad(struct mtd_info *mtd, loff_t ofs, int getchip,
int allowbbt)
static void panic_nand_wait_ready(struct mtd_info *mtd, unsigned long timeo)
void nand_wait_ready(struct mtd_info *mtd)
EXPORT_SYMBOL_GPL(nand_wait_ready);
static void nand_command(struct mtd_info *mtd, unsigned int command,
int column, int page_addr)
static void nand_command_lp(struct mtd_info *mtd, unsigned int command,
int column, int page_addr)
static void panic_nand_get_device(struct nand_chip *chip,
struct mtd_info *mtd, int new_state)
static int
nand_get_device(struct nand_chip *chip, struct mtd_info *mtd, int new_state)
static void panic_nand_wait(struct mtd_info *mtd, struct nand_chip *chip,
unsigned long timeo)
static int nand_wait(struct mtd_info *mtd, struct nand_chip *chip)
static int __nand_unlock(struct mtd_info *mtd, loff_t ofs,
uint64_t len, int invert)
int nand_unlock(struct mtd_info *mtd, loff_t ofs, uint64_t len)
EXPORT_SYMBOL(nand_unlock);
int nand_lock(struct mtd_info *mtd, loff_t ofs, uint64_t len)
EXPORT_SYMBOL(nand_lock);
static int nand_read_page_raw(struct mtd_info *mtd, struct nand_chip *chip,
uint8_t *buf, int page)
static int nand_read_page_raw_syndrome(struct mtd_info *mtd,
struct nand_chip *chip,
uint8_t *buf, int page)
static int nand_read_page_swecc(struct mtd_info *mtd, struct nand_chip *chip,
uint8_t *buf, int page)
static int nand_read_subpage(struct mtd_info *mtd, struct nand_chip *chip,
uint32_t data_offs, uint32_t readlen, uint8_t *bufpoi)
static int nand_read_page_hwecc(struct mtd_info *mtd, struct nand_chip *chip,
uint8_t *buf, int page)
static int nand_read_page_hwecc_oob_first(struct mtd_info *mtd,
struct nand_chip *chip, uint8_t *buf, int page)
static int nand_read_page_syndrome(struct mtd_info *mtd, struct nand_chip *chip,
uint8_t *buf, int page)
static uint8_t *nand_transfer_oob(struct nand_chip *chip, uint8_t *oob,
struct mtd_oob_ops *ops, size_t len)
static int nand_do_read_ops(struct mtd_info *mtd, loff_t from,
struct mtd_oob_ops *ops)
static int nand_read(struct mtd_info *mtd, loff_t from, size_t len,
size_t *retlen, uint8_t *buf)
static int nand_read_oob_std(struct mtd_info *mtd, struct nand_chip *chip,
int page, int sndcmd)
static int nand_read_oob_syndrome(struct mtd_info *mtd, struct nand_chip *chip,
int page, int sndcmd)
static int nand_write_oob_std(struct mtd_info *mtd, struct nand_chip *chip,
int page)
static int nand_write_oob_syndrome(struct mtd_info *mtd,
struct nand_chip *chip, int page)
static int nand_do_read_oob(struct mtd_info *mtd, loff_t from,
struct mtd_oob_ops *ops)
static int nand_read_oob(struct mtd_info *mtd, loff_t from,
struct mtd_oob_ops *ops)
static void nand_write_page_raw(struct mtd_info *mtd, struct nand_chip *chip,
const uint8_t *buf)
static void nand_write_page_raw_syndrome(struct mtd_info *mtd,
struct nand_chip *chip,
const uint8_t *buf)
static void nand_write_page_swecc(struct mtd_info *mtd, struct nand_chip *chip,
const uint8_t *buf)
static void nand_write_page_hwecc(struct mtd_info *mtd, struct nand_chip *chip,
const uint8_t *buf)
static void nand_write_page_syndrome(struct mtd_info *mtd,
struct nand_chip *chip, const uint8_t *buf)
static int nand_write_page(struct mtd_info *mtd, struct nand_chip *chip,
const uint8_t *buf, int page, int cached, int raw)
static uint8_t *nand_fill_oob(struct nand_chip *chip, uint8_t *oob, size_t len,
struct mtd_oob_ops *ops)
#define NOTALIGNED(x)	((x & (chip->subpagesize - 1)) != 0)
static int nand_do_write_ops(struct mtd_info *mtd, loff_t to,
struct mtd_oob_ops *ops)
static int panic_nand_write(struct mtd_info *mtd, loff_t to, size_t len,
size_t *retlen, const uint8_t *buf)
static int nand_write(struct mtd_info *mtd, loff_t to, size_t len,
size_t *retlen, const uint8_t *buf)
static int nand_do_write_oob(struct mtd_info *mtd, loff_t to,
struct mtd_oob_ops *ops)
static int nand_write_oob(struct mtd_info *mtd, loff_t to,
struct mtd_oob_ops *ops)
static void single_erase_cmd(struct mtd_info *mtd, int page)
static void multi_erase_cmd(struct mtd_info *mtd, int page)
static int nand_erase(struct mtd_info *mtd, struct erase_info *instr)
#define BBT_PAGE_MASK	0xffffff3f
int nand_erase_nand(struct mtd_info *mtd, struct erase_info *instr,
int allowbbt)
static void nand_sync(struct mtd_info *mtd)
static int nand_block_isbad(struct mtd_info *mtd, loff_t offs)
static int nand_block_markbad(struct mtd_info *mtd, loff_t ofs)
static int nand_suspend(struct mtd_info *mtd)
static void nand_resume(struct mtd_info *mtd)
static void nand_set_defaults(struct nand_chip *chip, int busw)
static void sanitize_string(uint8_t *s, size_t len)
static u16 onfi_crc16(u16 crc, u8 const *p, size_t len)
static int nand_flash_detect_onfi(struct mtd_info *mtd, struct nand_chip *chip,
int busw)
static struct nand_flash_dev *nand_get_flash_type(struct mtd_info *mtd,
struct nand_chip *chip,
int busw,
int *maf_id, int *dev_id,
struct nand_flash_dev *type)
int nand_scan_ident(struct mtd_info *mtd, int maxchips,
struct nand_flash_dev *table)
EXPORT_SYMBOL(nand_scan_ident);
int nand_scan_tail(struct mtd_info *mtd)
EXPORT_SYMBOL(nand_scan_tail);
#define caller_is_module() (1)
#define caller_is_module() \
is_module_text_address((unsigned long)__builtin_return_address(0))
int nand_scan(struct mtd_info *mtd, int maxchips)
EXPORT_SYMBOL(nand_scan);
void nand_release(struct mtd_info *mtd)
EXPORT_SYMBOL_GPL(nand_release);
static int __init nand_base_init(void)
static void __exit nand_base_exit(void)
module_init(nand_base_init);
module_exit(nand_base_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Steven J. Hill <sjhill@realitydiluted.com>");
MODULE_AUTHOR("Thomas Gleixner <tglx@linutronix.de>");
MODULE_DESCRIPTION("Generic NAND flash driver code");
