#define MODULE_VERS "1.0"
#define MODULE_NAME "rtas_flash"
#define FIRMWARE_FLASH_NAME "firmware_flash"
#define FIRMWARE_UPDATE_NAME "firmware_update"
#define MANAGE_FLASH_NAME "manage_flash"
#define VALIDATE_FLASH_NAME "validate_flash"
#define RTAS_RC_SUCCESS  0
#define RTAS_RC_HW_ERR	-1
#define RTAS_RC_BUSY	-2
#define FLASH_AUTH           -9002
#define FLASH_NO_OP          -1099
#define FLASH_IMG_SHORT	     -1005
#define FLASH_IMG_BAD_LEN    -1004
#define FLASH_IMG_NULL_DATA  -1003
#define FLASH_IMG_READY      0
#define MANAGE_AUTH          -9002
#define MANAGE_ACTIVE_ERR    -9001
#define MANAGE_NO_OP         -1099
#define MANAGE_PARAM_ERR     -3
#define MANAGE_HW_ERR        -1
#define VALIDATE_AUTH          -9002
#define VALIDATE_NO_OP         -1099
#define VALIDATE_INCOMPLETE    -1002
#define VALIDATE_READY	       -1001
#define VALIDATE_PARAM_ERR     -3
#define VALIDATE_HW_ERR        -1
#define VALIDATE_TMP_UPDATE    0
#define VALIDATE_FLASH_AUTH    1
#define VALIDATE_INVALID_IMG   2
#define VALIDATE_CUR_UNKNOWN   3
#define VALIDATE_TMP_COMMIT_DL 4
#define VALIDATE_TMP_COMMIT    5
#define VALIDATE_TMP_UPDATE_DL 6
#define RTAS_REJECT_TMP_IMG   0
#define RTAS_COMMIT_TMP_IMG   1
#define VALIDATE_BUF_SIZE 4096
#define RTAS_MSG_MAXLEN   64
#define RTAS_BLKLIST_LENGTH 4096
#define RTAS_BLK_SIZE 4096
struct flash_block ;
#define FLASH_BLOCKS_PER_NODE ((RTAS_BLKLIST_LENGTH - 16) / sizeof(struct flash_block))
struct flash_block_list ;
static struct flash_block_list *rtas_firmware_flash_list;
static struct kmem_cache *flash_block_cache = NULL;
#define FLASH_BLOCK_LIST_VERSION (1UL)
struct rtas_update_flash_t
;
struct rtas_manage_flash_t
;
struct rtas_validate_flash_t
;
static DEFINE_SPINLOCK(flash_file_open_lock);
static struct proc_dir_entry *firmware_flash_pde;
static struct proc_dir_entry *firmware_update_pde;
static struct proc_dir_entry *validate_pde;
static struct proc_dir_entry *manage_pde;
static int flash_list_valid(struct flash_block_list *flist)
static void free_flash_list(struct flash_block_list *f)
static int rtas_flash_release(struct inode *inode, struct file *file)
static void get_flash_status_msg(int status, char *buf)
static ssize_t rtas_flash_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
void rtas_block_ctor(void *ptr)
static ssize_t rtas_flash_write(struct file *file, const char __user *buffer,
size_t count, loff_t *off)
static int rtas_excl_open(struct inode *inode, struct file *file)
static int rtas_excl_release(struct inode *inode, struct file *file)
static void manage_flash(struct rtas_manage_flash_t *args_buf)
static ssize_t manage_flash_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t manage_flash_write(struct file *file, const char __user *buf,
size_t count, loff_t *off)
static void validate_flash(struct rtas_validate_flash_t *args_buf)
static int get_validate_flash_msg(struct rtas_validate_flash_t *args_buf,
char *msg)
static ssize_t validate_flash_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t validate_flash_write(struct file *file, const char __user *buf,
size_t count, loff_t *off)
static int validate_flash_release(struct inode *inode, struct file *file)
static void rtas_flash_firmware(int reboot_type)
static void remove_flash_pde(struct proc_dir_entry *dp)
static int initialize_flash_pde_data(const char *rtas_call_name,
size_t buf_size,
struct proc_dir_entry *dp)
static struct proc_dir_entry *create_flash_pde(const char *filename,
const struct file_operations *fops)
static const struct file_operations rtas_flash_operations = ;
static const struct file_operations manage_flash_operations = ;
static const struct file_operations validate_flash_operations = ;
static int __init rtas_flash_init(void)
static void __exit rtas_flash_cleanup(void)
module_init(rtas_flash_init);
module_exit(rtas_flash_cleanup);
MODULE_LICENSE("GPL");
