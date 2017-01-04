enum nmi_action ;
static unsigned long nmi_actions;
static int nmi_debug_notify(struct notifier_block *self,
unsigned long val, void *data)
static struct notifier_block nmi_debug_nb = ;
static int __init nmi_debug_setup(char *str)
__setup("nmi_debug", nmi_debug_setup);
