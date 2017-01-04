MODULE_AUTHOR("Alex Williamson <alex.williamson@hp.com>");
MODULE_DESCRIPTION("Extensible SAL Interface (ESI) support");
MODULE_LICENSE("GPL");
#define MODULE_NAME	"esi"
#define ESI_TABLE_GUID					\
EFI_GUID(0x43EA58DC, 0xCF28, 0x4b06, 0xB3,		\
0x91, 0xB7, 0x50, 0x59, 0x34, 0x2B, 0xD4)
enum esi_systab_entry_type ;
#define ESI_DESC_SIZE(type)	"\060"[(unsigned) (type)]
typedef struct ia64_esi_desc_entry_point  ia64_esi_desc_entry_point_t;
struct pdesc ;
static struct ia64_sal_systab *esi_systab;
static int __init esi_init (void)
int ia64_esi_call (efi_guid_t guid, struct ia64_sal_retval *isrvp,
enum esi_proc_type proc_type, u64 func,
u64 arg1, u64 arg2, u64 arg3, u64 arg4, u64 arg5, u64 arg6,
u64 arg7)
EXPORT_SYMBOL_GPL(ia64_esi_call);
int ia64_esi_call_phys (efi_guid_t guid, struct ia64_sal_retval *isrvp,
u64 func, u64 arg1, u64 arg2, u64 arg3, u64 arg4,
u64 arg5, u64 arg6, u64 arg7)
EXPORT_SYMBOL_GPL(ia64_esi_call_phys);
static void __exit esi_exit (void)
module_init(esi_init);
module_exit(esi_exit);
