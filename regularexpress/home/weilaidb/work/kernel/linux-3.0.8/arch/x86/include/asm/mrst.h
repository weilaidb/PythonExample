#define _ASM_X86_MRST_H
extern int pci_mrst_init(void);
extern int __init sfi_parse_mrtc(struct sfi_table_header *table);
extern int sfi_mrtc_num;
extern struct sfi_rtc_table_entry sfi_mrtc_array[];
enum mrst_cpu_type ;
extern enum mrst_cpu_type __mrst_cpu_chip;
static inline enum mrst_cpu_type mrst_identify_cpu(void)
enum mrst_timer_options ;
extern enum mrst_timer_options mrst_timer_options;
#define SFI_MTMR_MAX_NUM 8
#define SFI_MRTC_MAX	8
extern struct console early_mrst_console;
extern void mrst_early_console_init(void);
extern struct console early_hsu_console;
extern void hsu_early_console_init(void);
extern void intel_scu_devices_create(void);
extern void intel_scu_devices_destroy(void);
#define MRST_VRTC_MAP_SZ	(1024)
extern void mrst_rtc_init(void);
