#define PCI_DEVFN(slot,func)	((((slot) & 0x1f) << 3) | ((func) & 0x07))
#define MV64x60_CPU2MEM_WINDOWS			4
#define MV64x60_CPU2MEM_0_BASE			0x0008
#define MV64x60_CPU2MEM_0_SIZE			0x0010
#define MV64x60_CPU2MEM_1_BASE			0x0208
#define MV64x60_CPU2MEM_1_SIZE			0x0210
#define MV64x60_CPU2MEM_2_BASE			0x0018
#define MV64x60_CPU2MEM_2_SIZE			0x0020
#define MV64x60_CPU2MEM_3_BASE			0x0218
#define MV64x60_CPU2MEM_3_SIZE			0x0220
#define MV64x60_ENET2MEM_BAR_ENABLE		0x2290
#define MV64x60_ENET2MEM_0_BASE			0x2200
#define MV64x60_ENET2MEM_0_SIZE			0x2204
#define MV64x60_ENET2MEM_1_BASE			0x2208
#define MV64x60_ENET2MEM_1_SIZE			0x220c
#define MV64x60_ENET2MEM_2_BASE			0x2210
#define MV64x60_ENET2MEM_2_SIZE			0x2214
#define MV64x60_ENET2MEM_3_BASE			0x2218
#define MV64x60_ENET2MEM_3_SIZE			0x221c
#define MV64x60_ENET2MEM_4_BASE			0x2220
#define MV64x60_ENET2MEM_4_SIZE			0x2224
#define MV64x60_ENET2MEM_5_BASE			0x2228
#define MV64x60_ENET2MEM_5_SIZE			0x222c
#define MV64x60_ENET2MEM_ACC_PROT_0		0x2294
#define MV64x60_ENET2MEM_ACC_PROT_1		0x2298
#define MV64x60_ENET2MEM_ACC_PROT_2		0x229c
#define MV64x60_MPSC2MEM_BAR_ENABLE		0xf250
#define MV64x60_MPSC2MEM_0_BASE			0xf200
#define MV64x60_MPSC2MEM_0_SIZE			0xf204
#define MV64x60_MPSC2MEM_1_BASE			0xf208
#define MV64x60_MPSC2MEM_1_SIZE			0xf20c
#define MV64x60_MPSC2MEM_2_BASE			0xf210
#define MV64x60_MPSC2MEM_2_SIZE			0xf214
#define MV64x60_MPSC2MEM_3_BASE			0xf218
#define MV64x60_MPSC2MEM_3_SIZE			0xf21c
#define MV64x60_MPSC_0_REMAP			0xf240
#define MV64x60_MPSC_1_REMAP			0xf244
#define MV64x60_MPSC2MEM_ACC_PROT_0		0xf254
#define MV64x60_MPSC2MEM_ACC_PROT_1		0xf258
#define MV64x60_MPSC2REGS_BASE			0xf25c
#define MV64x60_IDMA2MEM_BAR_ENABLE		0x0a80
#define MV64x60_IDMA2MEM_0_BASE			0x0a00
#define MV64x60_IDMA2MEM_0_SIZE			0x0a04
#define MV64x60_IDMA2MEM_1_BASE			0x0a08
#define MV64x60_IDMA2MEM_1_SIZE			0x0a0c
#define MV64x60_IDMA2MEM_2_BASE			0x0a10
#define MV64x60_IDMA2MEM_2_SIZE			0x0a14
#define MV64x60_IDMA2MEM_3_BASE			0x0a18
#define MV64x60_IDMA2MEM_3_SIZE			0x0a1c
#define MV64x60_IDMA2MEM_4_BASE			0x0a20
#define MV64x60_IDMA2MEM_4_SIZE			0x0a24
#define MV64x60_IDMA2MEM_5_BASE			0x0a28
#define MV64x60_IDMA2MEM_5_SIZE			0x0a2c
#define MV64x60_IDMA2MEM_6_BASE			0x0a30
#define MV64x60_IDMA2MEM_6_SIZE			0x0a34
#define MV64x60_IDMA2MEM_7_BASE			0x0a38
#define MV64x60_IDMA2MEM_7_SIZE			0x0a3c
#define MV64x60_IDMA2MEM_ACC_PROT_0		0x0a70
#define MV64x60_IDMA2MEM_ACC_PROT_1		0x0a74
#define MV64x60_IDMA2MEM_ACC_PROT_2		0x0a78
#define MV64x60_IDMA2MEM_ACC_PROT_3		0x0a7c
#define MV64x60_PCI_ACC_CNTL_WINDOWS		6
#define MV64x60_PCI0_PCI_DECODE_CNTL		0x0d3c
#define MV64x60_PCI1_PCI_DECODE_CNTL		0x0dbc
#define MV64x60_PCI0_BAR_ENABLE			0x0c3c
#define MV64x60_PCI02MEM_0_SIZE			0x0c08
#define MV64x60_PCI0_ACC_CNTL_0_BASE_LO		0x1e00
#define MV64x60_PCI0_ACC_CNTL_0_BASE_HI		0x1e04
#define MV64x60_PCI0_ACC_CNTL_0_SIZE		0x1e08
#define MV64x60_PCI0_ACC_CNTL_1_BASE_LO		0x1e10
#define MV64x60_PCI0_ACC_CNTL_1_BASE_HI		0x1e14
#define MV64x60_PCI0_ACC_CNTL_1_SIZE		0x1e18
#define MV64x60_PCI0_ACC_CNTL_2_BASE_LO		0x1e20
#define MV64x60_PCI0_ACC_CNTL_2_BASE_HI		0x1e24
#define MV64x60_PCI0_ACC_CNTL_2_SIZE		0x1e28
#define MV64x60_PCI0_ACC_CNTL_3_BASE_LO		0x1e30
#define MV64x60_PCI0_ACC_CNTL_3_BASE_HI		0x1e34
#define MV64x60_PCI0_ACC_CNTL_3_SIZE		0x1e38
#define MV64x60_PCI0_ACC_CNTL_4_BASE_LO		0x1e40
#define MV64x60_PCI0_ACC_CNTL_4_BASE_HI		0x1e44
#define MV64x60_PCI0_ACC_CNTL_4_SIZE		0x1e48
#define MV64x60_PCI0_ACC_CNTL_5_BASE_LO		0x1e50
#define MV64x60_PCI0_ACC_CNTL_5_BASE_HI		0x1e54
#define MV64x60_PCI0_ACC_CNTL_5_SIZE		0x1e58
#define MV64x60_PCI1_BAR_ENABLE			0x0cbc
#define MV64x60_PCI12MEM_0_SIZE			0x0c88
#define MV64x60_PCI1_ACC_CNTL_0_BASE_LO		0x1e80
#define MV64x60_PCI1_ACC_CNTL_0_BASE_HI		0x1e84
#define MV64x60_PCI1_ACC_CNTL_0_SIZE		0x1e88
#define MV64x60_PCI1_ACC_CNTL_1_BASE_LO		0x1e90
#define MV64x60_PCI1_ACC_CNTL_1_BASE_HI		0x1e94
#define MV64x60_PCI1_ACC_CNTL_1_SIZE		0x1e98
#define MV64x60_PCI1_ACC_CNTL_2_BASE_LO		0x1ea0
#define MV64x60_PCI1_ACC_CNTL_2_BASE_HI		0x1ea4
#define MV64x60_PCI1_ACC_CNTL_2_SIZE		0x1ea8
#define MV64x60_PCI1_ACC_CNTL_3_BASE_LO		0x1eb0
#define MV64x60_PCI1_ACC_CNTL_3_BASE_HI		0x1eb4
#define MV64x60_PCI1_ACC_CNTL_3_SIZE		0x1eb8
#define MV64x60_PCI1_ACC_CNTL_4_BASE_LO		0x1ec0
#define MV64x60_PCI1_ACC_CNTL_4_BASE_HI		0x1ec4
#define MV64x60_PCI1_ACC_CNTL_4_SIZE		0x1ec8
#define MV64x60_PCI1_ACC_CNTL_5_BASE_LO		0x1ed0
#define MV64x60_PCI1_ACC_CNTL_5_BASE_HI		0x1ed4
#define MV64x60_PCI1_ACC_CNTL_5_SIZE		0x1ed8
#define MV64x60_CPU2PCI_SWAP_NONE		0x01000000
#define MV64x60_CPU2PCI0_IO_BASE		0x0048
#define MV64x60_CPU2PCI0_IO_SIZE		0x0050
#define MV64x60_CPU2PCI0_IO_REMAP		0x00f0
#define MV64x60_CPU2PCI0_MEM_0_BASE		0x0058
#define MV64x60_CPU2PCI0_MEM_0_SIZE		0x0060
#define MV64x60_CPU2PCI0_MEM_0_REMAP_LO		0x00f8
#define MV64x60_CPU2PCI0_MEM_0_REMAP_HI		0x0320
#define MV64x60_CPU2PCI1_IO_BASE		0x0090
#define MV64x60_CPU2PCI1_IO_SIZE		0x0098
#define MV64x60_CPU2PCI1_IO_REMAP		0x0108
#define MV64x60_CPU2PCI1_MEM_0_BASE		0x00a0
#define MV64x60_CPU2PCI1_MEM_0_SIZE		0x00a8
#define MV64x60_CPU2PCI1_MEM_0_REMAP_LO		0x0110
#define MV64x60_CPU2PCI1_MEM_0_REMAP_HI		0x0340
struct mv64x60_mem_win ;
struct mv64x60_pci_win ;
struct  static mv64x60_pci_cfgio[2] = ;
u32 mv64x60_cfg_read(u8 *bridge_base, u8 hose, u8 bus, u8 devfn, u8 offset)
void mv64x60_cfg_write(u8 *bridge_base, u8 hose, u8 bus, u8 devfn, u8 offset,
u32 val)
static struct mv64x60_mem_win mv64x60_cpu2mem[MV64x60_CPU2MEM_WINDOWS] = ;
static struct mv64x60_mem_win mv64x60_enet2mem[MV64x60_CPU2MEM_WINDOWS] = ;
static struct mv64x60_mem_win mv64x60_mpsc2mem[MV64x60_CPU2MEM_WINDOWS] = ;
static struct mv64x60_mem_win mv64x60_idma2mem[MV64x60_CPU2MEM_WINDOWS] = ;
static u32 mv64x60_dram_selects[MV64x60_CPU2MEM_WINDOWS] = ;
void mv64x60_config_ctlr_windows(u8 *bridge_base, u8 *bridge_pbase,
u8 is_coherent)
static struct mv64x60_pci_win mv64x60_pci2mem[2] = ;
static struct
mv64x60_mem_win mv64x60_pci_acc[2][MV64x60_PCI_ACC_CNTL_WINDOWS] = ;
static struct mv64x60_mem_win mv64x60_pci2reg[2] = ;
void mv64x60_config_pci_windows(u8 *bridge_base, u8 *bridge_pbase, u8 hose,
u8 bus, u32 mem_size, u32 acc_bits)
struct mv64x60_cpu2pci_win mv64x60_cpu2pci_io[2] = ;
struct mv64x60_cpu2pci_win mv64x60_cpu2pci_mem[2] = ;
void mv64x60_config_cpu2pci_window(u8 *bridge_base, u8 hose, u32 pci_base_hi,
u32 pci_base_lo, u32 cpu_base, u32 size,
struct mv64x60_cpu2pci_win *offset_tbl)
u32 mv64x60_get_mem_size(u8 *bridge_base)
u8 *mv64x60_get_bridge_pbase(void)
u8 *mv64x60_get_bridge_base(void)
u8 mv64x60_is_coherent(void)
