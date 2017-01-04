static int __initdata acpi_force = 0;
u32 acpi_rsdt_forced;
int acpi_disabled;
EXPORT_SYMBOL(acpi_disabled);
# include <asm/proto.h>
# include <asm/numa_64.h>
#define BAD_MADT_ENTRY(entry, end) (					    \
(!entry) || (unsigned long)entry + sizeof(*entry) > end ||  \
((struct acpi_subtable_header *)entry)->length < sizeof(*entry))
#define PREFIX			"ACPI: "
int acpi_noirq;
int acpi_pci_disabled;
EXPORT_SYMBOL(acpi_pci_disabled);
int acpi_lapic;
int acpi_ioapic;
int acpi_strict;
u8 acpi_sci_flags __initdata;
int acpi_sci_override_gsi __initdata;
int acpi_skip_timer_override __initdata;
int acpi_use_timer_override __initdata;
int acpi_fix_pin2_polarity __initdata;
static u64 acpi_lapic_addr __initdata = APIC_DEFAULT_PHYS_BASE;
#warning ACPI uses CMPXCHG, i486 and later hardware
enum acpi_irq_model_id acpi_irq_model = ACPI_IRQ_MODEL_PIC;
static u32 isa_irq_to_gsi[NR_IRQS_LEGACY] __read_mostly = ;
static unsigned int gsi_to_irq(unsigned int gsi)
static u32 irq_to_gsi(int irq)
char *__init __acpi_map_table(unsigned long phys, unsigned long size)
void __init __acpi_unmap_table(char *map, unsigned long size)
static int __init acpi_parse_madt(struct acpi_table_header *table)
static void __cpuinit acpi_register_lapic(int id, u8 enabled)
static int __init
acpi_parse_x2apic(struct acpi_subtable_header *header, const unsigned long end)
static int __init
acpi_parse_lapic(struct acpi_subtable_header * header, const unsigned long end)
static int __init
acpi_parse_sapic(struct acpi_subtable_header *header, const unsigned long end)
static int __init
acpi_parse_lapic_addr_ovr(struct acpi_subtable_header * header,
const unsigned long end)
static int __init
acpi_parse_x2apic_nmi(struct acpi_subtable_header *header,
const unsigned long end)
static int __init
acpi_parse_lapic_nmi(struct acpi_subtable_header * header, const unsigned long end)
static int __init
acpi_parse_ioapic(struct acpi_subtable_header * header, const unsigned long end)
static void __init acpi_sci_ioapic_setup(u8 bus_irq, u16 polarity, u16 trigger, u32 gsi)
static int __init
acpi_parse_int_src_ovr(struct acpi_subtable_header * header,
const unsigned long end)
static int __init
acpi_parse_nmi_src(struct acpi_subtable_header * header, const unsigned long end)
void __init acpi_pic_sci_set_trigger(unsigned int irq, u16 trigger)
int acpi_gsi_to_irq(u32 gsi, unsigned int *irq)
EXPORT_SYMBOL_GPL(acpi_gsi_to_irq);
int acpi_isa_irq_to_gsi(unsigned isa_irq, u32 *gsi)
static int acpi_register_gsi_pic(struct device *dev, u32 gsi,
int trigger, int polarity)
static int acpi_register_gsi_ioapic(struct device *dev, u32 gsi,
int trigger, int polarity)
int (*__acpi_register_gsi)(struct device *dev, u32 gsi,
int trigger, int polarity) = acpi_register_gsi_pic;
int acpi_register_gsi(struct device *dev, u32 gsi, int trigger, int polarity)
void __init acpi_set_irq_model_pic(void)
void __init acpi_set_irq_model_ioapic(void)
static void acpi_map_cpu2node(acpi_handle handle, int cpu, int physid)
static int __cpuinit _acpi_map_lsapic(acpi_handle handle, int *pcpu)
int __ref acpi_map_lsapic(acpi_handle handle, int *pcpu)
EXPORT_SYMBOL(acpi_map_lsapic);
int acpi_unmap_lsapic(int cpu)
EXPORT_SYMBOL(acpi_unmap_lsapic);
int acpi_register_ioapic(acpi_handle handle, u64 phys_addr, u32 gsi_base)
EXPORT_SYMBOL(acpi_register_ioapic);
int acpi_unregister_ioapic(acpi_handle handle, u32 gsi_base)
EXPORT_SYMBOL(acpi_unregister_ioapic);
static int __init acpi_parse_sbf(struct acpi_table_header *table)
static struct __initdata resource *hpet_res;
static int __init acpi_parse_hpet(struct acpi_table_header *table)
static __init int hpet_insert_resource(void)
late_initcall(hpet_insert_resource);
#define	acpi_parse_hpet	NULL
static int __init acpi_parse_fadt(struct acpi_table_header *table)
static int __init early_acpi_parse_madt_lapic_addr_ovr(void)
static int __init acpi_parse_madt_lapic_entries(void)
#define MP_ISA_BUS		0
extern int es7000_plat;
void __init mp_override_legacy_irq(u8 bus_irq, u8 polarity, u8 trigger, u32 gsi)
void __init mp_config_acpi_legacy_irqs(void)
static int mp_config_acpi_gsi(struct device *dev, u32 gsi, int trigger,
int polarity)
int mp_register_gsi(struct device *dev, u32 gsi, int trigger, int polarity)
static int __init acpi_parse_madt_ioapic_entries(void)
static inline int acpi_parse_madt_ioapic_entries(void)
static void __init early_acpi_process_madt(void)
static void __init acpi_process_madt(void)
static int __init disable_acpi_irq(const struct dmi_system_id *d)
static int __init disable_acpi_pci(const struct dmi_system_id *d)
static int __init dmi_disable_acpi(const struct dmi_system_id *d)
static int __init dmi_ignore_irq0_timer_override(const struct dmi_system_id *d)
static struct dmi_system_id __initdata acpi_dmi_table[] = ;
static struct dmi_system_id __initdata acpi_dmi_table_late[] = ;
void __init acpi_boot_table_init(void)
int __init early_acpi_boot_init(void)
int __init acpi_boot_init(void)
static int __init parse_acpi(char *arg)
early_param("acpi", parse_acpi);
static int __init parse_pci(char *arg)
early_param("pci", parse_pci);
int __init acpi_mps_check(void)
static int __init parse_acpi_skip_timer_override(char *arg)
early_param("acpi_skip_timer_override", parse_acpi_skip_timer_override);
static int __init parse_acpi_use_timer_override(char *arg)
early_param("acpi_use_timer_override", parse_acpi_use_timer_override);
static int __init setup_acpi_sci(char *s)
early_param("acpi_sci", setup_acpi_sci);
int __acpi_acquire_global_lock(unsigned int *lock)
int __acpi_release_global_lock(unsigned int *lock)
