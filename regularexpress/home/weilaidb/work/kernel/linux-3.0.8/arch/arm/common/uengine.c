#if defined(CONFIG_ARCH_IXP2000)
#define IXP_UENGINE_CSR_VIRT_BASE	IXP2000_UENGINE_CSR_VIRT_BASE
#define IXP_PRODUCT_ID			IXP2000_PRODUCT_ID
#define IXP_MISC_CONTROL		IXP2000_MISC_CONTROL
#define IXP_RESET1			IXP2000_RESET1
#if defined(CONFIG_ARCH_IXP23XX)
#define IXP_UENGINE_CSR_VIRT_BASE	IXP23XX_UENGINE_CSR_VIRT_BASE
#define IXP_PRODUCT_ID			IXP23XX_PRODUCT_ID
#define IXP_MISC_CONTROL		IXP23XX_MISC_CONTROL
#define IXP_RESET1			IXP23XX_RESET1
#error unknown platform
#define USTORE_ADDRESS			0x000
#define USTORE_DATA_LOWER		0x004
#define USTORE_DATA_UPPER		0x008
#define CTX_ENABLES			0x018
#define CC_ENABLE			0x01c
#define CSR_CTX_POINTER			0x020
#define INDIRECT_CTX_STS		0x040
#define ACTIVE_CTX_STS			0x044
#define INDIRECT_CTX_SIG_EVENTS		0x048
#define INDIRECT_CTX_WAKEUP_EVENTS	0x050
#define NN_PUT				0x080
#define NN_GET				0x084
#define TIMESTAMP_LOW			0x0c0
#define TIMESTAMP_HIGH			0x0c4
#define T_INDEX_BYTE_INDEX		0x0f4
#define LOCAL_CSR_STATUS		0x180
u32 ixp2000_uengine_mask;
static void *ixp2000_uengine_csr_area(int uengine)
u32 ixp2000_uengine_csr_read(int uengine, int offset)
EXPORT_SYMBOL(ixp2000_uengine_csr_read);
void ixp2000_uengine_csr_write(int uengine, int offset, u32 value)
EXPORT_SYMBOL(ixp2000_uengine_csr_write);
void ixp2000_uengine_reset(u32 uengine_mask)
EXPORT_SYMBOL(ixp2000_uengine_reset);
void ixp2000_uengine_set_mode(int uengine, u32 mode)
EXPORT_SYMBOL(ixp2000_uengine_set_mode);
static int make_even_parity(u32 x)
static void ustore_write(int uengine, u64 insn)
void ixp2000_uengine_load_microcode(int uengine, u8 *ucode, int insns)
EXPORT_SYMBOL(ixp2000_uengine_load_microcode);
void ixp2000_uengine_init_context(int uengine, int context, int pc)
EXPORT_SYMBOL(ixp2000_uengine_init_context);
void ixp2000_uengine_start_contexts(int uengine, u8 ctx_mask)
EXPORT_SYMBOL(ixp2000_uengine_start_contexts);
void ixp2000_uengine_stop_contexts(int uengine, u8 ctx_mask)
EXPORT_SYMBOL(ixp2000_uengine_stop_contexts);
static int check_ixp_type(struct ixp2000_uengine_code *c)
static void generate_ucode(u8 *ucode, u32 *gpr_a, u32 *gpr_b)
static int set_initial_registers(int uengine, struct ixp2000_uengine_code *c)
int ixp2000_uengine_load(int uengine, struct ixp2000_uengine_code *c)
EXPORT_SYMBOL(ixp2000_uengine_load);
static int __init ixp2000_uengine_init(void)
subsys_initcall(ixp2000_uengine_init);
