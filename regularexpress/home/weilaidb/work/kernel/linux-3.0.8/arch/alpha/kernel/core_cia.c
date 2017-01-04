#define __EXTERN_INLINE inline
#undef __EXTERN_INLINE
#define DEBUG_CONFIG 0
#if DEBUG_CONFIG
# define DBGC(args)	printk args
# define DBGC(args)
#define vip	volatile int  *
static int
mk_conf_addr(struct pci_bus *bus_dev, unsigned int device_fn, int where,
unsigned long *pci_addr, unsigned char *type1)
static unsigned int
conf_read(unsigned long addr, unsigned char type1)
static void
conf_write(unsigned long addr, unsigned int value, unsigned char type1)
static int
cia_read_config(struct pci_bus *bus, unsigned int devfn, int where, int size,
u32 *value)
static int
cia_write_config(struct pci_bus *bus, unsigned int devfn, int where, int size,
u32 value)
struct pci_ops cia_pci_ops =
;
void
cia_pci_tbi(struct pci_controller *hose, dma_addr_t start, dma_addr_t end)
#define CIA_BROKEN_TBIA_BASE	0x30000000
#define CIA_BROKEN_TBIA_SIZE	1024
void
cia_pci_tbi_try2(struct pci_controller *hose,
dma_addr_t start, dma_addr_t end)
static inline void
cia_prepare_tbia_workaround(int window)
static void __init
verify_tb_operation(void)
#if defined(ALPHA_RESTORE_SRM_SETUP)
struct
saved_config __attribute((common));
void
cia_save_srm_settings(int is_pyxis)
void
cia_restore_srm_settings(void)
#define cia_save_srm_settings(p)	do  while (0)
#define cia_restore_srm_settings()	do  while (0)
static void __init
do_init_arch(int is_pyxis)
void __init
cia_init_arch(void)
void __init
pyxis_init_arch(void)
void
cia_kill_arch(int mode)
void __init
cia_init_pci(void)
static inline void
cia_pci_clr_err(void)
static void
cia_decode_pci_error(struct el_CIA_sysdata_mcheck *cia, const char *msg)
static void
cia_decode_mem_error(struct el_CIA_sysdata_mcheck *cia, const char *msg)
static void
cia_decode_ecc_error(struct el_CIA_sysdata_mcheck *cia, const char *msg)
static void
cia_decode_parity_error(struct el_CIA_sysdata_mcheck *cia)
static int
cia_decode_mchk(unsigned long la_ptr)
void
cia_machine_check(unsigned long vector, unsigned long la_ptr)
