static const u32 divil_msr_reg[6] = ;
static const u32 soft_bar_flag[6] = ;
static const u32 sb_msr_reg[6] = ;
static const u32 bar_space_range[6] = ;
static const int bar_space_len[6] = ;
static void divil_lbar_enable(void)
static void divil_lbar_disable(void)
void pci_isa_write_bar(int n, u32 value)
u32 pci_isa_read_bar(int n)
void pci_isa_write_reg(int reg, u32 value)
u32 pci_isa_read_reg(int reg)
