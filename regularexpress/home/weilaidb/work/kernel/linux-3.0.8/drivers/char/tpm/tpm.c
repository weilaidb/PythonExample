enum tpm_const ;
enum tpm_duration ;
#define TPM_MAX_ORDINAL 243
#define TPM_MAX_PROTECTED_ORDINAL 12
#define TPM_PROTECTED_ORDINAL_MASK 0xFF
static int tpm_suspend_pcr;
module_param_named(suspend_pcr, tpm_suspend_pcr, uint, 0644);
MODULE_PARM_DESC(suspend_pcr,
"PCR to use for dummy writes to faciltate flush on suspend.");
static LIST_HEAD(tpm_chip_list);
static DEFINE_SPINLOCK(driver_lock);
static DECLARE_BITMAP(dev_mask, TPM_NUM_DEVICES);
static const u8 tpm_protected_ordinal_duration[TPM_MAX_PROTECTED_ORDINAL] = ;
static const u8 tpm_ordinal_duration[TPM_MAX_ORDINAL] = ;
static void user_reader_timeout(unsigned long ptr)
static void timeout_work(struct work_struct *work)
unsigned long tpm_calc_ordinal_duration(struct tpm_chip *chip,
u32 ordinal)
EXPORT_SYMBOL_GPL(tpm_calc_ordinal_duration);
static ssize_t tpm_transmit(struct tpm_chip *chip, const char *buf,
size_t bufsiz)
#define TPM_DIGEST_SIZE 20
#define TPM_ERROR_SIZE 10
#define TPM_RET_CODE_IDX 6
enum tpm_capabilities ;
enum tpm_sub_capabilities ;
static ssize_t transmit_cmd(struct tpm_chip *chip, struct tpm_cmd_t *cmd,
int len, const char *desc)
#define TPM_INTERNAL_RESULT_SIZE 200
#define TPM_TAG_RQU_COMMAND cpu_to_be16(193)
#define TPM_ORD_GET_CAP cpu_to_be32(101)
static const struct tpm_input_header tpm_getcap_header = ;
ssize_t tpm_getcap(struct device *dev, __be32 subcap_id, cap_t *cap,
const char *desc)
void tpm_gen_interrupt(struct tpm_chip *chip)
EXPORT_SYMBOL_GPL(tpm_gen_interrupt);
void tpm_get_timeouts(struct tpm_chip *chip)
EXPORT_SYMBOL_GPL(tpm_get_timeouts);
void tpm_continue_selftest(struct tpm_chip *chip)
EXPORT_SYMBOL_GPL(tpm_continue_selftest);
ssize_t tpm_show_enabled(struct device * dev, struct device_attribute * attr,
char *buf)
EXPORT_SYMBOL_GPL(tpm_show_enabled);
ssize_t tpm_show_active(struct device * dev, struct device_attribute * attr,
char *buf)
EXPORT_SYMBOL_GPL(tpm_show_active);
ssize_t tpm_show_owned(struct device * dev, struct device_attribute * attr,
char *buf)
EXPORT_SYMBOL_GPL(tpm_show_owned);
ssize_t tpm_show_temp_deactivated(struct device * dev,
struct device_attribute * attr, char *buf)
EXPORT_SYMBOL_GPL(tpm_show_temp_deactivated);
static struct tpm_chip *tpm_chip_find_get(int chip_num)
#define TPM_ORDINAL_PCRREAD cpu_to_be32(21)
#define READ_PCR_RESULT_SIZE 30
static struct tpm_input_header pcrread_header = ;
int __tpm_pcr_read(struct tpm_chip *chip, int pcr_idx, u8 *res_buf)
int tpm_pcr_read(u32 chip_num, int pcr_idx, u8 *res_buf)
EXPORT_SYMBOL_GPL(tpm_pcr_read);
#define TPM_ORD_PCR_EXTEND cpu_to_be32(20)
#define EXTEND_PCR_RESULT_SIZE 34
static struct tpm_input_header pcrextend_header = ;
int tpm_pcr_extend(u32 chip_num, int pcr_idx, const u8 *hash)
EXPORT_SYMBOL_GPL(tpm_pcr_extend);
int tpm_send(u32 chip_num, void *cmd, size_t buflen)
EXPORT_SYMBOL_GPL(tpm_send);
ssize_t tpm_show_pcrs(struct device *dev, struct device_attribute *attr,
char *buf)
EXPORT_SYMBOL_GPL(tpm_show_pcrs);
#define  READ_PUBEK_RESULT_SIZE 314
#define TPM_ORD_READPUBEK cpu_to_be32(124)
struct tpm_input_header tpm_readpubek_header = ;
ssize_t tpm_show_pubek(struct device *dev, struct device_attribute *attr,
char *buf)
EXPORT_SYMBOL_GPL(tpm_show_pubek);
ssize_t tpm_show_caps(struct device *dev, struct device_attribute *attr,
char *buf)
EXPORT_SYMBOL_GPL(tpm_show_caps);
ssize_t tpm_show_caps_1_2(struct device * dev,
struct device_attribute * attr, char *buf)
EXPORT_SYMBOL_GPL(tpm_show_caps_1_2);
ssize_t tpm_store_cancel(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
EXPORT_SYMBOL_GPL(tpm_store_cancel);
int tpm_open(struct inode *inode, struct file *file)
EXPORT_SYMBOL_GPL(tpm_open);
int tpm_release(struct inode *inode, struct file *file)
EXPORT_SYMBOL_GPL(tpm_release);
ssize_t tpm_write(struct file *file, const char __user *buf,
size_t size, loff_t *off)
EXPORT_SYMBOL_GPL(tpm_write);
ssize_t tpm_read(struct file *file, char __user *buf,
size_t size, loff_t *off)
EXPORT_SYMBOL_GPL(tpm_read);
void tpm_remove_hardware(struct device *dev)
EXPORT_SYMBOL_GPL(tpm_remove_hardware);
#define TPM_ORD_SAVESTATE cpu_to_be32(152)
#define SAVESTATE_RESULT_SIZE 10
static struct tpm_input_header savestate_header = ;
int tpm_pm_suspend(struct device *dev, pm_message_t pm_state)
EXPORT_SYMBOL_GPL(tpm_pm_suspend);
int tpm_pm_resume(struct device *dev)
EXPORT_SYMBOL_GPL(tpm_pm_resume);
void tpm_dev_vendor_release(struct tpm_chip *chip)
EXPORT_SYMBOL_GPL(tpm_dev_vendor_release);
void tpm_dev_release(struct device *dev)
EXPORT_SYMBOL_GPL(tpm_dev_release);
struct tpm_chip *tpm_register_hardware(struct device *dev,
const struct tpm_vendor_specific *entry)
EXPORT_SYMBOL_GPL(tpm_register_hardware);
MODULE_AUTHOR("Leendert van Doorn (leendert@watson.ibm.com)");
MODULE_DESCRIPTION("TPM Driver");
MODULE_VERSION("2.0");
MODULE_LICENSE("GPL");
