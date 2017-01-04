static struct edac_pci_ctl_info *amd64_ctl_pci;
static int report_gart_errors;
module_param(report_gart_errors, int, 0644);
static int ecc_enable_override;
module_param(ecc_enable_override, int, 0644);
static struct msr __percpu *msrs;
static atomic_t drv_instances = ATOMIC_INIT(0);
static struct mem_ctl_info **mcis;
static struct ecc_settings **ecc_stngs;
struct scrubrate  scrubrates[] = ;
static int __amd64_read_pci_cfg_dword(struct pci_dev *pdev, int offset,
u32 *val, const char *func)
int __amd64_write_pci_cfg_dword(struct pci_dev *pdev, int offset,
u32 val, const char *func)
static int k8_read_dct_pci_cfg(struct amd64_pvt *pvt, int addr, u32 *val,
const char *func)
static int f10_read_dct_pci_cfg(struct amd64_pvt *pvt, int addr, u32 *val,
const char *func)
static int f15_read_dct_pci_cfg(struct amd64_pvt *pvt, int addr, u32 *val,
const char *func)
static int __amd64_set_scrub_rate(struct pci_dev *ctl, u32 new_bw, u32 min_rate)
static int amd64_set_scrub_rate(struct mem_ctl_info *mci, u32 bw)
static int amd64_get_scrub_rate(struct mem_ctl_info *mci)
static bool amd64_base_limit_match(struct amd64_pvt *pvt, u64 sys_addr,
unsigned nid)
static struct mem_ctl_info *find_mc_by_sys_addr(struct mem_ctl_info *mci,
u64 sys_addr)
static void get_cs_base_and_mask(struct amd64_pvt *pvt, int csrow, u8 dct,
u64 *base, u64 *mask)
#define for_each_chip_select(i, dct, pvt) \
for (i = 0; i < pvt->csels[dct].b_cnt; i++)
#define chip_select_base(i, dct, pvt) \
pvt->csels[dct].csbases[i]
#define for_each_chip_select_mask(i, dct, pvt) \
for (i = 0; i < pvt->csels[dct].m_cnt; i++)
static int input_addr_to_csrow(struct mem_ctl_info *mci, u64 input_addr)
int amd64_get_dram_hole_info(struct mem_ctl_info *mci, u64 *hole_base,
u64 *hole_offset, u64 *hole_size)
EXPORT_SYMBOL_GPL(amd64_get_dram_hole_info);
static u64 sys_addr_to_dram_addr(struct mem_ctl_info *mci, u64 sys_addr)
static int num_node_interleave_bits(unsigned intlv_en)
static u64 dram_addr_to_input_addr(struct mem_ctl_info *mci, u64 dram_addr)
static u64 sys_addr_to_input_addr(struct mem_ctl_info *mci, u64 sys_addr)
static u64 input_addr_to_dram_addr(struct mem_ctl_info *mci, u64 input_addr)
static u64 dram_addr_to_sys_addr(struct mem_ctl_info *mci, u64 dram_addr)
static inline u64 input_addr_to_sys_addr(struct mem_ctl_info *mci,
u64 input_addr)
static void find_csrow_limits(struct mem_ctl_info *mci, int csrow,
u64 *input_addr_min, u64 *input_addr_max)
static inline void error_address_to_page_and_offset(u64 error_address,
u32 *page, u32 *offset)
static int sys_addr_to_csrow(struct mem_ctl_info *mci, u64 sys_addr)
static int get_channel_from_ecc_syndrome(struct mem_ctl_info *, u16);
static enum edac_type amd64_determine_edac_cap(struct amd64_pvt *pvt)
static void amd64_debug_display_dimm_sizes(struct amd64_pvt *, u8);
static void amd64_dump_dramcfg_low(u32 dclr, int chan)
static void dump_misc_regs(struct amd64_pvt *pvt)
static void prep_chip_selects(struct amd64_pvt *pvt)
static void read_dct_base_mask(struct amd64_pvt *pvt)
static enum mem_type amd64_determine_memory_type(struct amd64_pvt *pvt, int cs)
static int k8_early_channel_count(struct amd64_pvt *pvt)
static u64 get_error_address(struct mce *m)
static void read_dram_base_limit_regs(struct amd64_pvt *pvt, unsigned range)
static void k8_map_sysaddr_to_csrow(struct mem_ctl_info *mci, u64 sys_addr,
u16 syndrome)
static int ddr2_cs_size(unsigned i, bool dct_width)
static int k8_dbam_to_chip_select(struct amd64_pvt *pvt, u8 dct,
unsigned cs_mode)
static int f1x_early_channel_count(struct amd64_pvt *pvt)
static int ddr3_cs_size(unsigned i, bool dct_width)
static int f10_dbam_to_chip_select(struct amd64_pvt *pvt, u8 dct,
unsigned cs_mode)
static int f15_dbam_to_chip_select(struct amd64_pvt *pvt, u8 dct,
unsigned cs_mode)
static void read_dram_ctl_register(struct amd64_pvt *pvt)
static u8 f1x_determine_channel(struct amd64_pvt *pvt, u64 sys_addr,
bool hi_range_sel, u8 intlv_en)
static u64 f1x_get_norm_dct_addr(struct amd64_pvt *pvt, unsigned range,
u64 sys_addr, bool hi_rng,
u32 dct_sel_base_addr)
static int f10_process_possible_spare(struct amd64_pvt *pvt, u8 dct, int csrow)
static int f1x_lookup_addr_in_dct(u64 in_addr, u32 nid, u8 dct)
static u64 f1x_swap_interleaved_region(struct amd64_pvt *pvt, u64 sys_addr)
static int f1x_match_to_this_node(struct amd64_pvt *pvt, unsigned range,
u64 sys_addr, int *nid, int *chan_sel)
static int f1x_translate_sysaddr_to_cs(struct amd64_pvt *pvt, u64 sys_addr,
int *node, int *chan_sel)
static void f1x_map_sysaddr_to_csrow(struct mem_ctl_info *mci, u64 sys_addr,
u16 syndrome)
static void amd64_debug_display_dimm_sizes(struct amd64_pvt *pvt, u8 ctrl)
static struct amd64_family_type amd64_family_types[] = ;
static struct pci_dev *pci_get_related_function(unsigned int vendor,
unsigned int device,
struct pci_dev *related)
static u16 x4_vectors[] = ;
static u16 x8_vectors[] = ;
static int decode_syndrome(u16 syndrome, u16 *vectors, unsigned num_vecs,
unsigned v_dim)
static int map_err_sym_to_channel(int err_sym, int sym_size)
static int get_channel_from_ecc_syndrome(struct mem_ctl_info *mci, u16 syndrome)
static void amd64_handle_ce(struct mem_ctl_info *mci, struct mce *m)
static void amd64_handle_ue(struct mem_ctl_info *mci, struct mce *m)
static inline void __amd64_decode_bus_error(struct mem_ctl_info *mci,
struct mce *m)
void amd64_decode_bus_error(int node_id, struct mce *m, u32 nbcfg)
static int reserve_mc_sibling_devs(struct amd64_pvt *pvt, u16 f1_id, u16 f3_id)
static void free_mc_sibling_devs(struct amd64_pvt *pvt)
static void read_mc_regs(struct amd64_pvt *pvt)
static u32 amd64_csrow_nr_pages(struct amd64_pvt *pvt, u8 dct, int csrow_nr)
static int init_csrows(struct mem_ctl_info *mci)
static void get_cpus_on_this_dct_cpumask(struct cpumask *mask, unsigned nid)
static bool amd64_nb_mce_bank_enabled_on_node(unsigned nid)
static int toggle_ecc_err_reporting(struct ecc_settings *s, u8 nid, bool on)
static bool enable_ecc_error_reporting(struct ecc_settings *s, u8 nid,
struct pci_dev *F3)
static void restore_ecc_error_reporting(struct ecc_settings *s, u8 nid,
struct pci_dev *F3)
static const char *ecc_msg =
"ECC disabled in the BIOS or no ECC capability, module will not load.\n"
" Either enable ECC checking or force module loading by setting "
"'ecc_enable_override'.\n"
" (Note that use of the override may cause unknown side effects.)\n";
static bool ecc_enabled(struct pci_dev *F3, u8 nid)
struct mcidev_sysfs_attribute sysfs_attrs[ARRAY_SIZE(amd64_dbg_attrs) +
ARRAY_SIZE(amd64_inj_attrs) +
1];
struct mcidev_sysfs_attribute terminator = ;
static void set_mc_sysfs_attrs(struct mem_ctl_info *mci)
static void setup_mci_misc_attrs(struct mem_ctl_info *mci,
struct amd64_family_type *fam)
static struct amd64_family_type *amd64_per_family_init(struct amd64_pvt *pvt)
static int amd64_init_one_instance(struct pci_dev *F2)
static int __devinit amd64_probe_one_instance(struct pci_dev *pdev,
const struct pci_device_id *mc_type)
static void __devexit amd64_remove_one_instance(struct pci_dev *pdev)
static const struct pci_device_id amd64_pci_table[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, amd64_pci_table);
static struct pci_driver amd64_pci_driver = ;
static void setup_pci_device(void)
static int __init amd64_edac_init(void)
static void __exit amd64_edac_exit(void)
module_init(amd64_edac_init);
module_exit(amd64_edac_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("SoftwareBitMaker: Doug Thompson, "
"Dave Peterson, Thayne Harbaugh");
MODULE_DESCRIPTION("MC support for AMD64 memory controllers - "
EDAC_AMD64_VERSION);
module_param(edac_op_state, int, 0444);
MODULE_PARM_DESC(edac_op_state, "EDAC Error Reporting state: 0=Poll,1=NMI");
