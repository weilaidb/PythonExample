LIST_HEAD(pnp_cards);
static LIST_HEAD(pnp_card_drivers);
static const struct pnp_card_device_id *match_card(struct pnp_card_driver *drv,
struct pnp_card *card)
static void card_remove(struct pnp_dev *dev)
static void card_remove_first(struct pnp_dev *dev)
static int card_probe(struct pnp_card *card, struct pnp_card_driver *drv)
static struct pnp_id *pnp_add_card_id(struct pnp_card *card, char *id)
static void pnp_free_card_ids(struct pnp_card *card)
static void pnp_release_card(struct device *dmdev)
struct pnp_card *pnp_alloc_card(struct pnp_protocol *protocol, int id, char *pnpid)
static ssize_t pnp_show_card_name(struct device *dmdev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(name, S_IRUGO, pnp_show_card_name, NULL);
static ssize_t pnp_show_card_ids(struct device *dmdev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(card_id, S_IRUGO, pnp_show_card_ids, NULL);
static int pnp_interface_attach_card(struct pnp_card *card)
int pnp_add_card(struct pnp_card *card)
void pnp_remove_card(struct pnp_card *card)
int pnp_add_card_device(struct pnp_card *card, struct pnp_dev *dev)
void pnp_remove_card_device(struct pnp_dev *dev)
struct pnp_dev *pnp_request_card_device(struct pnp_card_link *clink,
const char *id, struct pnp_dev *from)
void pnp_release_card_device(struct pnp_dev *dev)
static int card_suspend(struct pnp_dev *dev, pm_message_t state)
static int card_resume(struct pnp_dev *dev)
int pnp_register_card_driver(struct pnp_card_driver *drv)
void pnp_unregister_card_driver(struct pnp_card_driver *drv)
EXPORT_SYMBOL(pnp_request_card_device);
EXPORT_SYMBOL(pnp_release_card_device);
EXPORT_SYMBOL(pnp_register_card_driver);
EXPORT_SYMBOL(pnp_unregister_card_driver);
