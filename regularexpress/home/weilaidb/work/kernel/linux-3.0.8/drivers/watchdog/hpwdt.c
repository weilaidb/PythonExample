#define HPWDT_VERSION			"1.2.0"
#define SECS_TO_TICKS(secs)		((secs) * 1000 / 128)
#define TICKS_TO_SECS(ticks)		((ticks) * 128 / 1000)
#define HPWDT_MAX_TIMER			TICKS_TO_SECS(65535)
#define DEFAULT_MARGIN			30
static unsigned int soft_margin = DEFAULT_MARGIN;
static unsigned int reload;
static int nowayout = WATCHDOG_NOWAYOUT;
static char expect_release;
static unsigned long hpwdt_is_open;
static void __iomem *pci_mem_addr;
static unsigned long __iomem *hpwdt_timer_reg;
static unsigned long __iomem *hpwdt_timer_con;
static DEFINE_PCI_DEVICE_TABLE(hpwdt_devices) = ;
MODULE_DEVICE_TABLE(pci, hpwdt_devices);
#define PCI_BIOS32_SD_VALUE		0x5F32335F
#define CRU_BIOS_SIGNATURE_VALUE	0x55524324
#define PCI_BIOS32_PARAGRAPH_LEN	16
#define PCI_ROM_BASE1			0x000F0000
#define ROM_SIZE			0x10000
struct bios32_service_dir ;
struct smbios_cru64_info ;
#define SMBIOS_CRU64_INFORMATION	212
struct cmn_registers   __attribute__((packed));
static unsigned int hpwdt_nmi_decoding;
static unsigned int allow_kdump;
static unsigned int priority;
static DEFINE_SPINLOCK(rom_lock);
static void *cru_rom_addr;
static struct cmn_registers cmn_regs;
extern asmlinkage void asminline_call(struct cmn_registers *pi86Regs,
unsigned long *pRomEntry);
#define HPWDT_ARCH	32
asm(".text                          \n\t"
".align 4                       \n"
"asminline_call:                \n\t"
"pushl       %ebp               \n\t"
"movl        %esp, %ebp         \n\t"
"pusha                          \n\t"
"pushf                          \n\t"
"push        %es                \n\t"
"push        %ds                \n\t"
"pop         %es                \n\t"
"movl        8(%ebp),%eax       \n\t"
"movl        4(%eax),%ebx       \n\t"
"movl        8(%eax),%ecx       \n\t"
"movl        12(%eax),%edx      \n\t"
"movl        16(%eax),%esi      \n\t"
"movl        20(%eax),%edi      \n\t"
"movl        (%eax),%eax        \n\t"
"push        %cs                \n\t"
"call        *12(%ebp)          \n\t"
"pushf                          \n\t"
"pushl       %eax               \n\t"
"movl        8(%ebp),%eax       \n\t"
"movl        %ebx,4(%eax)       \n\t"
"movl        %ecx,8(%eax)       \n\t"
"movl        %edx,12(%eax)      \n\t"
"movl        %esi,16(%eax)      \n\t"
"movl        %edi,20(%eax)      \n\t"
"movw        %ds,24(%eax)       \n\t"
"movw        %es,26(%eax)       \n\t"
"popl        %ebx               \n\t"
"movl        %ebx,(%eax)        \n\t"
"popl        %ebx               \n\t"
"movl        %ebx,28(%eax)      \n\t"
"pop         %es                \n\t"
"popf                           \n\t"
"popa                           \n\t"
"leave                          \n\t"
"ret                            \n\t"
".previous");
static int __devinit cru_detect(unsigned long map_entry,
unsigned long map_offset)
static int __devinit bios_checksum(const char __iomem *ptr, int len)
static int __devinit bios32_present(const char __iomem *p)
static int __devinit detect_cru_service(void)
#define HPWDT_ARCH	64
asm(".text                      \n\t"
".align 4                   \n"
"asminline_call:            \n\t"
"pushq      %rbp            \n\t"
"movq       %rsp, %rbp      \n\t"
"pushq      %rax            \n\t"
"pushq      %rbx            \n\t"
"pushq      %rdx            \n\t"
"pushq      %r12            \n\t"
"pushq      %r9             \n\t"
"movq       %rsi, %r12      \n\t"
"movq       %rdi, %r9       \n\t"
"movl       4(%r9),%ebx     \n\t"
"movl       8(%r9),%ecx     \n\t"
"movl       12(%r9),%edx    \n\t"
"movl       16(%r9),%esi    \n\t"
"movl       20(%r9),%edi    \n\t"
"movl       (%r9),%eax      \n\t"
"call       *%r12           \n\t"
"pushfq                     \n\t"
"popq        %r12           \n\t"
"movl       %eax, (%r9)     \n\t"
"movl       %ebx, 4(%r9)    \n\t"
"movl       %ecx, 8(%r9)    \n\t"
"movl       %edx, 12(%r9)   \n\t"
"movl       %esi, 16(%r9)   \n\t"
"movl       %edi, 20(%r9)   \n\t"
"movq       %r12, %rax      \n\t"
"movl       %eax, 28(%r9)   \n\t"
"popq       %r9             \n\t"
"popq       %r12            \n\t"
"popq       %rdx            \n\t"
"popq       %rbx            \n\t"
"popq       %rax            \n\t"
"leave                      \n\t"
"ret                        \n\t"
".previous");
static void __devinit dmi_find_cru(const struct dmi_header *dm, void *dummy)
static int __devinit detect_cru_service(void)
static void hpwdt_start(void)
static void hpwdt_stop(void)
static void hpwdt_ping(void)
static int hpwdt_change_timer(int new_margin)
static int hpwdt_time_left(void)
static int hpwdt_pretimeout(struct notifier_block *nb, unsigned long ulReason,
void *data)
static int hpwdt_open(struct inode *inode, struct file *file)
static int hpwdt_release(struct inode *inode, struct file *file)
static ssize_t hpwdt_write(struct file *file, const char __user *data,
size_t len, loff_t *ppos)
static const struct watchdog_info ident = ;
static long hpwdt_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static const struct file_operations hpwdt_fops = ;
static struct miscdevice hpwdt_miscdev = ;
static struct notifier_block die_notifier = ;
static void __devinit hpwdt_check_nmi_decoding(struct pci_dev *dev)
static void __devinit hpwdt_check_nmi_decoding(struct pci_dev *dev)
static int __devinit hpwdt_init_nmi_decoding(struct pci_dev *dev)
static void hpwdt_exit_nmi_decoding(void)
static void __devinit hpwdt_check_nmi_decoding(struct pci_dev *dev)
static int __devinit hpwdt_init_nmi_decoding(struct pci_dev *dev)
static void hpwdt_exit_nmi_decoding(void)
static int __devinit hpwdt_init_one(struct pci_dev *dev,
const struct pci_device_id *ent)
static void __devexit hpwdt_exit(struct pci_dev *dev)
static struct pci_driver hpwdt_driver = ;
static void __exit hpwdt_cleanup(void)
static int __init hpwdt_init(void)
MODULE_AUTHOR("Tom Mingarelli");
MODULE_DESCRIPTION("hp watchdog driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(HPWDT_VERSION);
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
module_param(soft_margin, int, 0);
MODULE_PARM_DESC(soft_margin, "Watchdog timeout in seconds");
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout, "Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
module_param(allow_kdump, int, 0);
MODULE_PARM_DESC(allow_kdump, "Start a kernel dump after NMI occurs");
module_param(priority, int, 0);
MODULE_PARM_DESC(priority, "The hpwdt driver handles NMIs first or last"
" (default = 0/Last)\n");
module_init(hpwdt_init);
module_exit(hpwdt_cleanup);
