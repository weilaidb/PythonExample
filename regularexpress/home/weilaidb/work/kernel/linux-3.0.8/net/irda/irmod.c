unsigned int irda_debug = IRDA_DEBUG_LEVEL;
module_param_named(debug, irda_debug, uint, 0);
MODULE_PARM_DESC(debug, "IRDA debugging level");
EXPORT_SYMBOL(irda_debug);
static struct packet_type irda_packet_type __read_mostly = ;
void irda_notify_init(notify_t *notify)
EXPORT_SYMBOL(irda_notify_init);
static int __init irda_init(void)
static void __exit irda_cleanup(void)
subsys_initcall(irda_init);
module_exit(irda_cleanup);
MODULE_AUTHOR("Dag Brattli <dagb@cs.uit.no> & Jean Tourrilhes <jt@hpl.hp.com>");
MODULE_DESCRIPTION("The Linux IrDA Protocol Stack");
MODULE_LICENSE("GPL");
MODULE_ALIAS_NETPROTO(PF_IRDA);
