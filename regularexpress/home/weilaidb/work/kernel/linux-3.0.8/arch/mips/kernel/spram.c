#define SPRAM_TAG0_ENABLE	0x00000080
#define SPRAM_TAG0_PA_MASK	0xfffff000
#define SPRAM_TAG1_SIZE_MASK	0xfffff000
#define SPRAM_TAG_STRIDE	8
#define ERRCTL_SPRAM		(1 << 28)
#define read_c0_errctl(x) read_c0_ecc(x)
#define write_c0_errctl(x) write_c0_ecc(x)
static __cpuinit unsigned int bis_c0_errctl(unsigned int set)
static __cpuinit void ispram_store_tag(unsigned int offset, unsigned int data)
static __cpuinit unsigned int ispram_load_tag(unsigned int offset)
static __cpuinit void dspram_store_tag(unsigned int offset, unsigned int data)
static __cpuinit unsigned int dspram_load_tag(unsigned int offset)
static __cpuinit void probe_spram(char *type,
unsigned int base,
unsigned int (*read)(unsigned int),
void (*write)(unsigned int, unsigned int))
void __cpuinit spram_config(void)
