struct mcck_struct ;
static DEFINE_PER_CPU(struct mcck_struct, cpu_mcck);
static NORET_TYPE void s390_handle_damage(char *msg)
void s390_handle_mcck(void)
EXPORT_SYMBOL_GPL(s390_handle_mcck);
static int notrace s390_revalidate_registers(struct mci *mci)
#define MAX_IPD_COUNT	29
#define MAX_IPD_TIME	(5 * 60 * USEC_PER_SEC)
#define ED_STP_ISLAND	6
#define ED_STP_SYNC	7
#define ED_ETR_SYNC	12
#define ED_ETR_SWITCH	13
void notrace s390_do_machine_check(struct pt_regs *regs)
static int __init machine_check_init(void)
arch_initcall(machine_check_init);
