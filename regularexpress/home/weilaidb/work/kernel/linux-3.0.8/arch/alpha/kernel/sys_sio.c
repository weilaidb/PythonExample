#if defined(ALPHA_RESTORE_SRM_SETUP)
struct
saved_config __attribute((common));
static void __init
sio_init_irq(void)
static inline void __init
alphabook1_init_arch(void)
static void __init
sio_pci_route(void)
static unsigned int __init
sio_collect_irq_levels(void)
static void __init
sio_fixup_irq_levels(unsigned int level_bits)
static inline int __init
noname_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static inline int __init
p2k_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static inline void __init
noname_init_pci(void)
static inline void __init
alphabook1_init_pci(void)
void
sio_kill_arch(int mode)
#if defined(CONFIG_ALPHA_GENERIC) || defined(CONFIG_ALPHA_BOOK1)
struct alpha_machine_vector alphabook1_mv __initmv = ;
ALIAS_MV(alphabook1)
#if defined(CONFIG_ALPHA_GENERIC) || defined(CONFIG_ALPHA_AVANTI)
struct alpha_machine_vector avanti_mv __initmv = ;
ALIAS_MV(avanti)
#if defined(CONFIG_ALPHA_GENERIC) || defined(CONFIG_ALPHA_NONAME)
struct alpha_machine_vector noname_mv __initmv = ;
ALIAS_MV(noname)
#if defined(CONFIG_ALPHA_GENERIC) || defined(CONFIG_ALPHA_P2K)
struct alpha_machine_vector p2k_mv __initmv = ;
ALIAS_MV(p2k)
#if defined(CONFIG_ALPHA_GENERIC) || defined(CONFIG_ALPHA_XL)
struct alpha_machine_vector xl_mv __initmv = ;
ALIAS_MV(xl)
