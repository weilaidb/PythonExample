#define _LINUX_SFI_H
#define SFI_SIG_SYST		"SYST"
#define SFI_SIG_FREQ		"FREQ"
#define SFI_SIG_IDLE		"IDLE"
#define SFI_SIG_CPUS		"CPUS"
#define SFI_SIG_MTMR		"MTMR"
#define SFI_SIG_MRTC		"MRTC"
#define SFI_SIG_MMAP		"MMAP"
#define SFI_SIG_APIC		"APIC"
#define SFI_SIG_XSDT		"XSDT"
#define SFI_SIG_WAKE		"WAKE"
#define SFI_SIG_DEVS		"DEVS"
#define SFI_SIG_GPIO		"GPIO"
#define SFI_SIGNATURE_SIZE	4
#define SFI_OEM_ID_SIZE		6
#define SFI_OEM_TABLE_ID_SIZE	8
#define SFI_NAME_LEN		16
#define SFI_SYST_SEARCH_BEGIN		0x000E0000
#define SFI_SYST_SEARCH_END		0x000FFFFF
#define SFI_GET_NUM_ENTRIES(ptable, entry_type) \
((ptable->header.len - sizeof(struct sfi_table_header)) / \
(sizeof(entry_type)))
struct sfi_table_header  __packed;
struct sfi_table_simple  __packed;
struct sfi_mem_entry  __packed;
struct sfi_cpu_table_entry  __packed;
struct sfi_cstate_table_entry  __packed;
struct sfi_apic_table_entry  __packed;
struct sfi_freq_table_entry  __packed;
struct sfi_wake_table_entry  __packed;
struct sfi_timer_table_entry  __packed;
struct sfi_rtc_table_entry  __packed;
struct sfi_device_table_entry  __packed;
struct sfi_gpio_table_entry  __packed;
typedef int (*sfi_table_handler) (struct sfi_table_header *table);
extern void __init sfi_init(void);
extern int __init sfi_platform_init(void);
extern void __init sfi_init_late(void);
extern int sfi_table_parse(char *signature, char *oem_id, char *oem_table_id,
sfi_table_handler handler);
extern int sfi_disabled;
static inline void disable_sfi(void)
static inline void sfi_init(void)
static inline void sfi_init_late(void)
#define sfi_disabled	0
static inline int sfi_table_parse(char *signature, char *oem_id,
char *oem_table_id,
sfi_table_handler handler)
