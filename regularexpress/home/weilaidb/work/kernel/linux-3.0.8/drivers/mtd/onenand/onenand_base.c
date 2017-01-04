#define MB_ERASE_MIN_BLK_COUNT 2
#define MB_ERASE_MAX_BLK_COUNT 64
static int flex_bdry[MAX_DIES * 2] = ;
module_param_array(flex_bdry, int, NULL, 0400);
MODULE_PARM_DESC(flex_bdry,	"SLC Boundary information for Flex-OneNAND"
"Syntax:flex_bdry=DIE_BDRY,LOCK,..."
"DIE_BDRY: SLC boundary of the die"
"LOCK: Locking information for SLC boundary"
"    : 0->Set boundary in unlocked status"
"    : 1->Set boundary in locked status");
static int otp;
module_param(otp, int, 0400);
MODULE_PARM_DESC(otp,	"Corresponding behaviour of OneNAND in OTP"
"Syntax : otp=LOCK_TYPE"
"LOCK_TYPE : Keys issued, for specific OTP Lock type"
"	   : 0 -> Default (No Blocks Locked)"
"	   : 1 -> OTP Block lock"
"	   : 2 -> 1st Block lock"
"	   : 3 -> BOTH OTP Block and 1st Block lock");
static struct nand_ecclayout flexonenand_oob_128 = ;
static struct nand_ecclayout onenand_oob_128 = ;
static struct nand_ecclayout onenand_oob_64 = ;
static struct nand_ecclayout onenand_oob_32 = ;
static const unsigned char ffchars[] = ;
static unsigned short onenand_readw(void __iomem *addr)
static void onenand_writew(unsigned short value, void __iomem *addr)
static int onenand_block_address(struct onenand_chip *this, int block)
static int onenand_bufferram_address(struct onenand_chip *this, int block)
static int onenand_page_address(int page, int sector)
static int onenand_buffer_address(int dataram1, int sectors, int count)
static unsigned flexonenand_block(struct onenand_chip *this, loff_t addr)
inline unsigned onenand_block(struct onenand_chip *this, loff_t addr)
static loff_t flexonenand_addr(struct onenand_chip *this, int block)
loff_t onenand_addr(struct onenand_chip *this, int block)
EXPORT_SYMBOL(onenand_addr);
static inline int onenand_get_density(int dev_id)
int flexonenand_region(struct mtd_info *mtd, loff_t addr)
EXPORT_SYMBOL(flexonenand_region);
static int onenand_command(struct mtd_info *mtd, int cmd, loff_t addr, size_t len)
static inline int onenand_read_ecc(struct onenand_chip *this)
static int onenand_wait(struct mtd_info *mtd, int state)
static irqreturn_t onenand_interrupt(int irq, void *data)
static int onenand_interrupt_wait(struct mtd_info *mtd, int state)
static int onenand_try_interrupt_wait(struct mtd_info *mtd, int state)
static void onenand_setup_wait(struct mtd_info *mtd)
static inline int onenand_bufferram_offset(struct mtd_info *mtd, int area)
static int onenand_read_bufferram(struct mtd_info *mtd, int area,
unsigned char *buffer, int offset, size_t count)
static int onenand_sync_read_bufferram(struct mtd_info *mtd, int area,
unsigned char *buffer, int offset, size_t count)
static int onenand_write_bufferram(struct mtd_info *mtd, int area,
const unsigned char *buffer, int offset, size_t count)
static int onenand_get_2x_blockpage(struct mtd_info *mtd, loff_t addr)
static int onenand_check_bufferram(struct mtd_info *mtd, loff_t addr)
static void onenand_update_bufferram(struct mtd_info *mtd, loff_t addr,
int valid)
static void onenand_invalidate_bufferram(struct mtd_info *mtd, loff_t addr,
unsigned int len)
static int onenand_get_device(struct mtd_info *mtd, int new_state)
static void onenand_release_device(struct mtd_info *mtd)
static int onenand_transfer_auto_oob(struct mtd_info *mtd, uint8_t *buf, int column,
int thislen)
static int onenand_recover_lsb(struct mtd_info *mtd, loff_t addr, int status)
static int onenand_mlc_read_ops_nolock(struct mtd_info *mtd, loff_t from,
struct mtd_oob_ops *ops)
static int onenand_read_ops_nolock(struct mtd_info *mtd, loff_t from,
struct mtd_oob_ops *ops)
static int onenand_read_oob_nolock(struct mtd_info *mtd, loff_t from,
struct mtd_oob_ops *ops)
static int onenand_read(struct mtd_info *mtd, loff_t from, size_t len,
size_t *retlen, u_char *buf)
static int onenand_read_oob(struct mtd_info *mtd, loff_t from,
struct mtd_oob_ops *ops)
static int onenand_bbt_wait(struct mtd_info *mtd, int state)
int onenand_bbt_read_oob(struct mtd_info *mtd, loff_t from,
struct mtd_oob_ops *ops)
static int onenand_verify_oob(struct mtd_info *mtd, const u_char *buf, loff_t to)
static int onenand_verify(struct mtd_info *mtd, const u_char *buf, loff_t addr, size_t len)
#define onenand_verify(...)		(0)
#define onenand_verify_oob(...)		(0)
#define NOTALIGNED(x)	((x & (this->subpagesize - 1)) != 0)
static void onenand_panic_wait(struct mtd_info *mtd)
static int onenand_panic_write(struct mtd_info *mtd, loff_t to, size_t len,
size_t *retlen, const u_char *buf)
static int onenand_fill_auto_oob(struct mtd_info *mtd, u_char *oob_buf,
const u_char *buf, int column, int thislen)
static int onenand_write_ops_nolock(struct mtd_info *mtd, loff_t to,
struct mtd_oob_ops *ops)
static int onenand_write_oob_nolock(struct mtd_info *mtd, loff_t to,
struct mtd_oob_ops *ops)
static int onenand_write(struct mtd_info *mtd, loff_t to, size_t len,
size_t *retlen, const u_char *buf)
static int onenand_write_oob(struct mtd_info *mtd, loff_t to,
struct mtd_oob_ops *ops)
static int onenand_block_isbad_nolock(struct mtd_info *mtd, loff_t ofs, int allowbbt)
static int onenand_multiblock_erase_verify(struct mtd_info *mtd,
struct erase_info *instr)
static int onenand_multiblock_erase(struct mtd_info *mtd,
struct erase_info *instr,
unsigned int block_size)
static int onenand_block_by_block_erase(struct mtd_info *mtd,
struct erase_info *instr,
struct mtd_erase_region_info *region,
unsigned int block_size)
static int onenand_erase(struct mtd_info *mtd, struct erase_info *instr)
static void onenand_sync(struct mtd_info *mtd)
static int onenand_block_isbad(struct mtd_info *mtd, loff_t ofs)
static int onenand_default_block_markbad(struct mtd_info *mtd, loff_t ofs)
static int onenand_block_markbad(struct mtd_info *mtd, loff_t ofs)
static int onenand_do_lock_cmd(struct mtd_info *mtd, loff_t ofs, size_t len, int cmd)
static int onenand_lock(struct mtd_info *mtd, loff_t ofs, uint64_t len)
static int onenand_unlock(struct mtd_info *mtd, loff_t ofs, uint64_t len)
static int onenand_check_lock_status(struct onenand_chip *this)
static void onenand_unlock_all(struct mtd_info *mtd)
static int onenand_otp_command(struct mtd_info *mtd, int cmd, loff_t addr,
size_t len)
static int onenand_otp_write_oob_nolock(struct mtd_info *mtd, loff_t to,
struct mtd_oob_ops *ops)
typedef int (*otp_op_t)(struct mtd_info *mtd, loff_t form, size_t len,
size_t *retlen, u_char *buf);
static int do_otp_read(struct mtd_info *mtd, loff_t from, size_t len,
size_t *retlen, u_char *buf)
static int do_otp_write(struct mtd_info *mtd, loff_t to, size_t len,
size_t *retlen, u_char *buf)
static int do_otp_lock(struct mtd_info *mtd, loff_t from, size_t len,
size_t *retlen, u_char *buf)
static int onenand_otp_walk(struct mtd_info *mtd, loff_t from, size_t len,
size_t *retlen, u_char *buf,
otp_op_t action, int mode)
static int onenand_get_fact_prot_info(struct mtd_info *mtd,
struct otp_info *buf, size_t len)
static int onenand_read_fact_prot_reg(struct mtd_info *mtd, loff_t from,
size_t len, size_t *retlen, u_char *buf)
static int onenand_get_user_prot_info(struct mtd_info *mtd,
struct otp_info *buf, size_t len)
static int onenand_read_user_prot_reg(struct mtd_info *mtd, loff_t from,
size_t len, size_t *retlen, u_char *buf)
static int onenand_write_user_prot_reg(struct mtd_info *mtd, loff_t from,
size_t len, size_t *retlen, u_char *buf)
static int onenand_lock_user_prot_reg(struct mtd_info *mtd, loff_t from,
size_t len)
static void onenand_check_features(struct mtd_info *mtd)
static void onenand_print_device_info(int device, int version)
static const struct onenand_manufacturers onenand_manuf_ids[] = ;
static int onenand_check_maf(int manuf)
static int flexonenand_get_boundary(struct mtd_info *mtd)
static void flexonenand_get_size(struct mtd_info *mtd)
static int flexonenand_check_blocks_erased(struct mtd_info *mtd, int start, int end)
int flexonenand_set_boundary(struct mtd_info *mtd, int die,
int boundary, int lock)
static int onenand_chip_probe(struct mtd_info *mtd)
static int onenand_probe(struct mtd_info *mtd)
static int onenand_suspend(struct mtd_info *mtd)
static void onenand_resume(struct mtd_info *mtd)
int onenand_scan(struct mtd_info *mtd, int maxchips)
void onenand_release(struct mtd_info *mtd)
EXPORT_SYMBOL_GPL(onenand_scan);
EXPORT_SYMBOL_GPL(onenand_release);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Kyungmin Park <kyungmin.park@samsung.com>");
MODULE_DESCRIPTION("Generic OneNAND flash driver code");
