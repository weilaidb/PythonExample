static struct platform_device *arcom_pcmcia_dev;
static struct pcmcia_irqs irqs[] = ;
static inline struct arcom_pcmcia_pdata *viper_get_pdata(void)
static int viper_pcmcia_hw_init(struct soc_pcmcia_socket *skt)
static void viper_pcmcia_hw_shutdown(struct soc_pcmcia_socket *skt)
static void viper_pcmcia_socket_state(struct soc_pcmcia_socket *skt,
struct pcmcia_state *state)
static int viper_pcmcia_configure_socket(struct soc_pcmcia_socket *skt,
const socket_state_t *state)
static void viper_pcmcia_socket_init(struct soc_pcmcia_socket *skt)
static void viper_pcmcia_socket_suspend(struct soc_pcmcia_socket *skt)
static struct pcmcia_low_level viper_pcmcia_ops = ;
static struct platform_device *viper_pcmcia_device;
static int viper_pcmcia_probe(struct platform_device *pdev)
static int viper_pcmcia_remove(struct platform_device *pdev)
static struct platform_device_id viper_pcmcia_id_table[] = ;
static struct platform_driver viper_pcmcia_driver = ;
static int __init viper_pcmcia_init(void)
static void __exit viper_pcmcia_exit(void)
module_init(viper_pcmcia_init);
module_exit(viper_pcmcia_exit);
MODULE_DEVICE_TABLE(platform, viper_pcmcia_id_table);
MODULE_LICENSE("GPL");
