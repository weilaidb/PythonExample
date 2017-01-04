static DEFINE_SPINLOCK(pdc_lock);
extern unsigned long pdc_result[NUM_PDC_RESULT];
extern unsigned long pdc_result2[NUM_PDC_RESULT];
#define WIDE_FIRMWARE 0x1
#define NARROW_FIRMWARE 0x2
int parisc_narrow_firmware __read_mostly = 1;
long real64_call(unsigned long function, ...);
long real32_call(unsigned long function, ...);
#   define MEM_PDC (unsigned long)(PAGE0->mem_pdc_hi) << 32 | PAGE0->mem_pdc
#   define mem_pdc_call(args...) unlikely(parisc_narrow_firmware) ? real32_call(MEM_PDC, args) : real64_call(MEM_PDC, args)
#   define MEM_PDC (unsigned long)PAGE0->mem_pdc
#   define mem_pdc_call(args...) real32_call(MEM_PDC, args)
static unsigned long f_extend(unsigned long address)
static void convert_to_wide(unsigned long *addr)
void __cpuinit set_firmware_width_unlocked(void)
void __cpuinit set_firmware_width(void)
void __cpuinit set_firmware_width_unlocked(void)
void __cpuinit set_firmware_width(void)
void pdc_emergency_unlock(void)
int pdc_add_valid(unsigned long address)
EXPORT_SYMBOL(pdc_add_valid);
int __init pdc_chassis_info(struct pdc_chassis_info *chassis_info, void *led_info, unsigned long len)
int pdc_pat_chassis_send_log(unsigned long state, unsigned long data)
int pdc_chassis_disp(unsigned long disp)
int pdc_chassis_warn(unsigned long *warn)
int __cpuinit pdc_coproc_cfg_unlocked(struct pdc_coproc_cfg *pdc_coproc_info)
int __cpuinit pdc_coproc_cfg(struct pdc_coproc_cfg *pdc_coproc_info)
int pdc_iodc_read(unsigned long *actcnt, unsigned long hpa, unsigned int index,
void *iodc_data, unsigned int iodc_data_size)
EXPORT_SYMBOL(pdc_iodc_read);
int pdc_system_map_find_mods(struct pdc_system_map_mod_info *pdc_mod_info,
struct pdc_module_path *mod_path, long mod_index)
int pdc_system_map_find_addrs(struct pdc_system_map_addr_info *pdc_addr_info,
long mod_index, long addr_index)
int pdc_model_info(struct pdc_model *model)
int pdc_model_sysmodel(char *name)
int pdc_model_versions(unsigned long *versions, int id)
int pdc_model_cpuid(unsigned long *cpu_id)
int pdc_model_capabilities(unsigned long *capabilities)
int pdc_cache_info(struct pdc_cache_info *cache_info)
int pdc_spaceid_bits(unsigned long *space_bits)
int pdc_btlb_info(struct pdc_btlb_info *btlb)
int pdc_mem_map_hpa(struct pdc_memory_map *address,
struct pdc_module_path *mod_path)
int pdc_lan_station_id(char *lan_addr, unsigned long hpa)
EXPORT_SYMBOL(pdc_lan_station_id);
int pdc_stable_read(unsigned long staddr, void *memaddr, unsigned long count)
EXPORT_SYMBOL(pdc_stable_read);
int pdc_stable_write(unsigned long staddr, void *memaddr, unsigned long count)
EXPORT_SYMBOL(pdc_stable_write);
int pdc_stable_get_size(unsigned long *size)
EXPORT_SYMBOL(pdc_stable_get_size);
int pdc_stable_verify_contents(void)
EXPORT_SYMBOL(pdc_stable_verify_contents);
int pdc_stable_initialize(void)
EXPORT_SYMBOL(pdc_stable_initialize);
int pdc_get_initiator(struct hardware_path *hwpath, struct pdc_initiator *initiator)
EXPORT_SYMBOL(pdc_get_initiator);
int pdc_pci_irt_size(unsigned long *num_entries, unsigned long hpa)
int pdc_pci_irt(unsigned long num_entries, unsigned long hpa, void *tbl)
int pdc_tod_read(struct pdc_tod *tod)
EXPORT_SYMBOL(pdc_tod_read);
int pdc_tod_set(unsigned long sec, unsigned long usec)
EXPORT_SYMBOL(pdc_tod_set);
int pdc_mem_mem_table(struct pdc_memory_table_raddr *r_addr,
struct pdc_memory_table *tbl, unsigned long entries)
int pdc_do_firm_test_reset(unsigned long ftc_bitmap)
int pdc_do_reset(void)
int __init pdc_soft_power_info(unsigned long *power_reg)
int pdc_soft_power_button(int sw_control)
void pdc_io_reset(void)
void pdc_io_reset_devices(void)
static int __attribute__((aligned(8)))   iodc_retbuf[32];
static char __attribute__((aligned(64))) iodc_dbuf[4096];
int pdc_iodc_print(const unsigned char *str, unsigned count)
int pdc_iodc_getc(void)
int pdc_sti_call(unsigned long func, unsigned long flags,
unsigned long inptr, unsigned long outputr,
unsigned long glob_cfg)
EXPORT_SYMBOL(pdc_sti_call);
int pdc_pat_cell_get_number(struct pdc_pat_cell_num *cell_info)
int pdc_pat_cell_module(unsigned long *actcnt, unsigned long ploc, unsigned long mod,
unsigned long view_type, void *mem_addr)
int pdc_pat_cpu_get_number(struct pdc_pat_cpu_num *cpu_info, void *hpa)
int pdc_pat_get_irt_size(unsigned long *num_entries, unsigned long cell_num)
int pdc_pat_get_irt(void *r_addr, unsigned long cell_num)
int pdc_pat_pd_get_addr_map(unsigned long *actual_len, void *mem_addr,
unsigned long count, unsigned long offset)
int pdc_pat_io_pci_cfg_read(unsigned long pci_addr, int pci_size, u32 *mem_addr)
int pdc_pat_io_pci_cfg_write(unsigned long pci_addr, int pci_size, u32 val)
struct narrow_stack ;
long real32_call(unsigned long fn, ...)
struct wide_stack ;
long real64_call(unsigned long fn, ...)
