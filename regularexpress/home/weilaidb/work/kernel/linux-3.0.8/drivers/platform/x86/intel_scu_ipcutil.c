static u32 major;
#define MAX_FW_SIZE 264192
#define	INTE_SCU_IPC_REGISTER_READ	0
#define INTE_SCU_IPC_REGISTER_WRITE	1
#define INTE_SCU_IPC_REGISTER_UPDATE	2
#define INTE_SCU_IPC_FW_UPDATE		0xA2
struct scu_ipc_data ;
static int scu_reg_access(u32 cmd, struct scu_ipc_data  *data)
static long scu_ipc_ioctl(struct file *fp, unsigned int cmd,
unsigned long arg)
static const struct file_operations scu_ipc_fops = ;
static int __init ipc_module_init(void)
static void __exit ipc_module_exit(void)
module_init(ipc_module_init);
module_exit(ipc_module_exit);
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("Utility driver for intel scu ipc");
MODULE_AUTHOR("Sreedhara <sreedhara.ds@intel.com>");
