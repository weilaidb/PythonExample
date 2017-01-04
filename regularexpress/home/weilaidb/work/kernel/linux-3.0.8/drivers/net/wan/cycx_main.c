unsigned int cycx_debug;
MODULE_AUTHOR("Arnaldo Carvalho de Melo");
MODULE_DESCRIPTION("Cyclom 2X Sync Card Driver.");
MODULE_LICENSE("GPL");
module_param(cycx_debug, int, 0);
MODULE_PARM_DESC(cycx_debug, "cyclomx debug level");
#define	CYCX_DRV_VERSION	0
#define	CYCX_DRV_RELEASE	11
#define	CYCX_MAX_CARDS		1
#define	CONFIG_CYCX_CARDS 1
static int cycx_wan_setup(struct wan_device *wandev, wandev_conf_t *conf);
static int cycx_wan_shutdown(struct wan_device *wandev);
static irqreturn_t cycx_isr(int irq, void *dev_id);
static const char cycx_drvname[] = "cyclomx";
static const char cycx_fullname[] = "CYCLOM 2X(tm) Sync Card Driver";
static const char cycx_copyright[] = "(c) 1998-2003 Arnaldo Carvalho de Melo "
"<acme@conectiva.com.br>";
static int cycx_ncards = CONFIG_CYCX_CARDS;
static struct cycx_device *cycx_card_array;
static int __init cycx_init(void)
static void __exit cycx_exit(void)
static int cycx_wan_setup(struct wan_device *wandev, wandev_conf_t *conf)
static int cycx_wan_shutdown(struct wan_device *wandev)
static irqreturn_t cycx_isr(int irq, void *dev_id)
void cycx_set_state(struct cycx_device *card, int state)
module_init(cycx_init);
module_exit(cycx_exit);
