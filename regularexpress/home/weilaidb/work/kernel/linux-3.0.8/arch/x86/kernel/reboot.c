# include <linux/ctype.h>
# include <linux/mc146818rtc.h>
# include <asm/x86_init.h>
void (*pm_power_off)(void);
EXPORT_SYMBOL(pm_power_off);
static const struct desc_ptr no_idt = ;
static int reboot_mode;
enum reboot_type reboot_type = BOOT_ACPI;
int reboot_force;
#if defined(CONFIG_X86_32) && defined(CONFIG_SMP)
static int reboot_cpu = -1;
static int reboot_emergency;
bool port_cf9_safe = false;
static int __init reboot_setup(char *str)
__setup("reboot=", reboot_setup);
static int __init set_bios_reboot(const struct dmi_system_id *d)
static struct dmi_system_id __initdata reboot_dmi_table[] = ;
static int __init reboot_init(void)
core_initcall(reboot_init);
extern const unsigned char machine_real_restart_asm[];
extern const u64 machine_real_restart_gdt[3];
void machine_real_restart(unsigned int type)
EXPORT_SYMBOL(machine_real_restart);
static int __init set_pci_reboot(const struct dmi_system_id *d)
static struct dmi_system_id __initdata pci_reboot_dmi_table[] = ;
static int __init pci_reboot_init(void)
core_initcall(pci_reboot_init);
static inline void kb_wait(void)
static void vmxoff_nmi(int cpu, struct die_args *args)
static void emergency_vmx_disable_all(void)
void __attribute__((weak)) mach_reboot_fixups(void)
static void native_machine_emergency_restart(void)
void native_machine_shutdown(void)
static void __machine_emergency_restart(int emergency)
static void native_machine_restart(char *__unused)
static void native_machine_halt(void)
static void native_machine_power_off(void)
struct machine_ops machine_ops = ;
void machine_power_off(void)
void machine_shutdown(void)
void machine_emergency_restart(void)
void machine_restart(char *cmd)
void machine_halt(void)
void machine_crash_shutdown(struct pt_regs *regs)
#if defined(CONFIG_SMP)
static int crashing_cpu;
static nmi_shootdown_cb shootdown_callback;
static atomic_t waiting_for_crash_ipi;
static int crash_nmi_callback(struct notifier_block *self,
unsigned long val, void *data)
static void smp_send_nmi_allbutself(void)
static struct notifier_block crash_nmi_nb = ;
void nmi_shootdown_cpus(nmi_shootdown_cb callback)
void nmi_shootdown_cpus(nmi_shootdown_cb callback)
