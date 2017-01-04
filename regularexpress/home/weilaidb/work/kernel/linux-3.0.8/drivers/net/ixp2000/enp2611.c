static struct ixp2400_msf_parameters enp2611_msf_parameters =
;
static struct net_device *nds[3];
static struct timer_list link_check_timer;
static void enp2611_check_link_status(unsigned long __dummy)
static void enp2611_set_port_admin_status(int port, int up)
static int __init enp2611_init_module(void)
static void __exit enp2611_cleanup_module(void)
module_init(enp2611_init_module);
module_exit(enp2611_cleanup_module);
MODULE_LICENSE("GPL");
