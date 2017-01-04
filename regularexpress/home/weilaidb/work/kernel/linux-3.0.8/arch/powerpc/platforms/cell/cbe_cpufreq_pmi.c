static u8 pmi_slow_mode_limit[MAX_CBE];
bool cbe_cpufreq_has_pmi = false;
EXPORT_SYMBOL_GPL(cbe_cpufreq_has_pmi);
int cbe_cpufreq_set_pmode_pmi(int cpu, unsigned int pmode)
EXPORT_SYMBOL_GPL(cbe_cpufreq_set_pmode_pmi);
static void cbe_cpufreq_handle_pmi(pmi_message_t pmi_msg)
static int pmi_notifier(struct notifier_block *nb,
unsigned long event, void *data)
static struct notifier_block pmi_notifier_block = ;
static struct pmi_handler cbe_pmi_handler = ;
static int __init cbe_cpufreq_pmi_init(void)
static void __exit cbe_cpufreq_pmi_exit(void)
module_init(cbe_cpufreq_pmi_init);
module_exit(cbe_cpufreq_pmi_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Christian Krafft <krafft@de.ibm.com>");
