BSS_STACK(8192);
#define HW_REG(x)		((void *)(x))
#define EXI_CTRL		HW_REG(0x0d800070)
#define EXI_CTRL_ENABLE		(1<<0)
#define MEM2_TOP		(0x10000000 + 64*1024*1024)
#define FIRMWARE_DEFAULT_SIZE	(12*1024*1024)
struct mipc_infohdr ;
static int mipc_check_address(u32 pa)
static struct mipc_infohdr *mipc_get_infohdr(void)
static int mipc_get_mem2_boundary(u32 *mem2_boundary)
static void platform_fixups(void)
void platform_init(unsigned long r3, unsigned long r4, unsigned long r5)
