static void qe_snums_init(void);
static int qe_sdma_init(void);
static DEFINE_SPINLOCK(qe_lock);
DEFINE_SPINLOCK(cmxgcr_lock);
EXPORT_SYMBOL(cmxgcr_lock);
enum qe_snum_state ;
struct qe_snum ;
struct qe_immap __iomem *qe_immr;
EXPORT_SYMBOL(qe_immr);
static struct qe_snum snums[QE_NUM_OF_SNUM];
static unsigned int qe_num_of_snum;
static phys_addr_t qebase = -1;
phys_addr_t get_qe_base(void)
EXPORT_SYMBOL(get_qe_base);
void qe_reset(void)
int qe_issue_cmd(u32 cmd, u32 device, u8 mcn_protocol, u32 cmd_input)
EXPORT_SYMBOL(qe_issue_cmd);
static unsigned int brg_clk = 0;
unsigned int qe_get_brg_clk(void)
EXPORT_SYMBOL(qe_get_brg_clk);
int qe_setbrg(enum qe_clock brg, unsigned int rate, unsigned int multiplier)
EXPORT_SYMBOL(qe_setbrg);
enum qe_clock qe_clock_source(const char *source)
EXPORT_SYMBOL(qe_clock_source);
static void qe_snums_init(void)
int qe_get_snum(void)
EXPORT_SYMBOL(qe_get_snum);
void qe_put_snum(u8 snum)
EXPORT_SYMBOL(qe_put_snum);
static int qe_sdma_init(void)
#define MAX_QE_RISC     4
static struct qe_firmware_info qe_firmware_info;
static int qe_firmware_uploaded;
static void qe_upload_microcode(const void *base,
const struct qe_microcode *ucode)
int qe_upload_firmware(const struct qe_firmware *firmware)
EXPORT_SYMBOL(qe_upload_firmware);
struct qe_firmware_info *qe_get_firmware_info(void)
EXPORT_SYMBOL(qe_get_firmware_info);
unsigned int qe_get_num_of_risc(void)
EXPORT_SYMBOL(qe_get_num_of_risc);
unsigned int qe_get_num_of_snums(void)
EXPORT_SYMBOL(qe_get_num_of_snums);
#if defined(CONFIG_SUSPEND) && defined(CONFIG_PPC_85xx)
static int qe_resume(struct platform_device *ofdev)
static int qe_probe(struct platform_device *ofdev)
static const struct of_device_id qe_ids[] = ;
static struct platform_driver qe_driver = ;
static int __init qe_drv_init(void)
device_initcall(qe_drv_init);
