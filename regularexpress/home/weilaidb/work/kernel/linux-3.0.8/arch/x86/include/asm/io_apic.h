#define _ASM_X86_IO_APIC_H
#define IO_APIC_REDIR_VECTOR_MASK	0x000FF
#define IO_APIC_REDIR_DEST_LOGICAL	0x00800
#define IO_APIC_REDIR_DEST_PHYSICAL	0x00000
#define IO_APIC_REDIR_SEND_PENDING	(1 << 12)
#define IO_APIC_REDIR_REMOTE_IRR	(1 << 14)
#define IO_APIC_REDIR_LEVEL_TRIGGER	(1 << 15)
#define IO_APIC_REDIR_MASKED		(1 << 16)
union IO_APIC_reg_00 ;
union IO_APIC_reg_01 ;
union IO_APIC_reg_02 ;
union IO_APIC_reg_03 ;
struct IO_APIC_route_entry  __attribute__ ((packed));
struct IR_IO_APIC_route_entry  __attribute__ ((packed));
#define IOAPIC_AUTO     -1
#define IOAPIC_EDGE     0
#define IOAPIC_LEVEL    1
extern int nr_ioapics;
extern int mpc_ioapic_id(int ioapic);
extern unsigned int mpc_ioapic_addr(int ioapic);
extern struct mp_ioapic_gsi *mp_ioapic_gsi_routing(int ioapic);
#define MP_MAX_IOAPIC_PIN 127
extern int mp_irq_entries;
extern struct mpc_intsrc mp_irqs[MAX_IRQ_SOURCES];
extern int mpc_default_type;
extern int sis_apic_bug;
extern int skip_ioapic_setup;
extern int noioapicquirk;
extern int noioapicreroute;
extern int timer_through_8259;
#define io_apic_assign_pci_irqs \
(mp_irq_entries && !skip_ioapic_setup && io_apic_irqs)
struct io_apic_irq_attr;
extern int io_apic_set_pci_routing(struct device *dev, int irq,
struct io_apic_irq_attr *irq_attr);
void setup_IO_APIC_irq_extra(u32 gsi);
extern void ioapic_and_gsi_init(void);
extern void ioapic_insert_resources(void);
int io_apic_setup_irq_pin_once(unsigned int irq, int node, struct io_apic_irq_attr *attr);
extern int save_ioapic_entries(void);
extern void mask_ioapic_entries(void);
extern int restore_ioapic_entries(void);
extern int get_nr_irqs_gsi(void);
extern void setup_ioapic_ids_from_mpc(void);
extern void setup_ioapic_ids_from_mpc_nocheck(void);
struct mp_ioapic_gsi;
extern struct mp_ioapic_gsi  mp_gsi_routing[];
extern u32 gsi_top;
int mp_find_ioapic(u32 gsi);
int mp_find_ioapic_pin(int ioapic, u32 gsi);
void __init mp_register_ioapic(int id, u32 address, u32 gsi_base);
extern void __init pre_init_apic_IRQ0(void);
extern void mp_save_irq(struct mpc_intsrc *m);
extern void disable_ioapic_support(void);
#define io_apic_assign_pci_irqs 0
#define setup_ioapic_ids_from_mpc x86_init_noop
static const int timer_through_8259 = 0;
static inline void ioapic_and_gsi_init(void)
static inline void ioapic_insert_resources(void)
#define gsi_top (NR_IRQS_LEGACY)
static inline int mp_find_ioapic(u32 gsi)
struct io_apic_irq_attr;
static inline int io_apic_set_pci_routing(struct device *dev, int irq,
struct io_apic_irq_attr *irq_attr)
static inline int save_ioapic_entries(void)
static inline void mask_ioapic_entries(void)
static inline int restore_ioapic_entries(void)
static inline void mp_save_irq(struct mpc_intsrc *m) ;
static inline void disable_ioapic_support(void)
