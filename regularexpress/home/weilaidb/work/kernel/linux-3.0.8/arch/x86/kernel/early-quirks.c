static void __init fix_hypertransport_config(int num, int slot, int func)
static void __init via_bugs(int  num, int slot, int func)
static int __init nvidia_hpet_check(struct acpi_table_header *header)
static void __init nvidia_bugs(int num, int slot, int func)
#if defined(CONFIG_ACPI) && defined(CONFIG_X86_IO_APIC)
static u32 __init ati_ixp4x0_rev(int num, int slot, int func)
static void __init ati_bugs(int num, int slot, int func)
static u32 __init ati_sbx00_rev(int num, int slot, int func)
static void __init ati_bugs_contd(int num, int slot, int func)
static void __init ati_bugs(int num, int slot, int func)
static void __init ati_bugs_contd(int num, int slot, int func)
#define QFLAG_APPLY_ONCE 	0x1
#define QFLAG_APPLIED		0x2
#define QFLAG_DONE		(QFLAG_APPLY_ONCE|QFLAG_APPLIED)
struct chipset ;
static struct chipset early_qrk[] __initdata = ;
static int __init check_dev_quirk(int num, int slot, int func)
void __init early_quirks(void)
