# include <linux/pci.h>
#define MB	(1024*1024UL)
#define SIMPLE_MEMMAP	1
#if SIMPLE_MEMMAP
# define NUM_MEM_DESCS	4
# define NUM_MEM_DESCS	16
static char fw_mem[(  sizeof(struct ia64_boot_param)
+ sizeof(efi_system_table_t)
+ sizeof(efi_runtime_services_t)
+ 1*sizeof(efi_config_table_t)
+ sizeof(struct ia64_sal_systab)
+ sizeof(struct ia64_sal_desc_entry_point)
+ NUM_MEM_DESCS*(sizeof(efi_memory_desc_t))
+ 1024)] __attribute__ ((aligned (8)));
#define SECS_PER_HOUR   (60 * 60)
#define SECS_PER_DAY    (SECS_PER_HOUR * 24)
int
offtime (unsigned long t, efi_time_t *tp)
extern void pal_emulator_static (void);
#define BUILD_CMD(addr)		((0x80000000 | (addr)) & ~3)
#define REG_OFFSET(addr)	(0x00000000000000FF & (addr))
#define DEVICE_FUNCTION(addr)	(0x000000000000FF00 & (addr))
#define BUS_NUMBER(addr)	(0x0000000000FF0000 & (addr))
static efi_status_t
fw_efi_get_time (efi_time_t *tm, efi_time_cap_t *tc)
static void
efi_reset_system (int reset_type, efi_status_t status, unsigned long data_size, efi_char16_t *data)
static efi_status_t
efi_unimplemented (void)
static struct sal_ret_values
sal_emulator (long index, unsigned long in1, unsigned long in2,
unsigned long in3, unsigned long in4, unsigned long in5,
unsigned long in6, unsigned long in7)
struct ia64_boot_param *
sys_fw_init (const char *args, int arglen)
