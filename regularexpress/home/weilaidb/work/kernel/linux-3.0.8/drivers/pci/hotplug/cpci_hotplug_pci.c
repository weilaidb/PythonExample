#define MY_NAME	"cpci_hotplug"
extern int cpci_debug;
#define dbg(format, arg...)					\
do  while (0)
#define err(format, arg...) printk(KERN_ERR "%s: " format "\n", MY_NAME , ## arg)
#define info(format, arg...) printk(KERN_INFO "%s: " format "\n", MY_NAME , ## arg)
#define warn(format, arg...) printk(KERN_WARNING "%s: " format "\n", MY_NAME , ## arg)
u8 cpci_get_attention_status(struct slot* slot)
int cpci_set_attention_status(struct slot* slot, int status)
u16 cpci_get_hs_csr(struct slot* slot)
int cpci_check_and_clear_ins(struct slot* slot)
int cpci_check_ext(struct slot* slot)
int cpci_clear_ext(struct slot* slot)
int cpci_led_on(struct slot* slot)
int cpci_led_off(struct slot* slot)
int __ref cpci_configure_slot(struct slot *slot)
int cpci_unconfigure_slot(struct slot* slot)
