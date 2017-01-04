static inline unsigned long ixp2000_reg_read(volatile void *reg)
static inline void ixp2000_reg_write(volatile void *reg, unsigned long val)
static inline void ixp2000_reg_wrb(volatile void *reg, unsigned long val)
struct slowport_cfg ;
void ixp2000_acquire_slowport(struct slowport_cfg *, struct slowport_cfg *);
void ixp2000_release_slowport(struct slowport_cfg *);
static inline unsigned ixp2000_has_broken_slowport(void)
static inline unsigned int ixp2000_has_flash(void)
static inline unsigned int ixp2000_is_pcimaster(void)
void ixp2000_map_io(void);
void ixp2000_uart_init(void);
void ixp2000_init_irq(void);
void ixp2000_init_time(unsigned long);
unsigned long ixp2000_gettimeoffset(void);
struct pci_sys_data;
u32 *ixp2000_pci_config_addr(unsigned int bus, unsigned int devfn, int where);
void ixp2000_pci_preinit(void);
int ixp2000_pci_setup(int, struct pci_sys_data*);
struct pci_bus* ixp2000_pci_scan_bus(int, struct pci_sys_data*);
int ixp2000_pci_read_config(struct pci_bus*, unsigned int, int, int, u32 *);
int ixp2000_pci_write_config(struct pci_bus*, unsigned int, int, int, u32);
struct ixp2000_flash_data ;
struct ixp2000_i2c_pins ;
