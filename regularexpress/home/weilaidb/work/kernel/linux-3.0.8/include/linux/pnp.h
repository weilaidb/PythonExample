#define _LINUX_PNP_H
#define PNP_NAME_LEN		50
struct pnp_protocol;
struct pnp_dev;
struct resource *pnp_get_resource(struct pnp_dev *dev, unsigned long type,
unsigned int num);
static inline struct resource *pnp_get_resource(struct pnp_dev *dev,
unsigned long type, unsigned int num)
static inline int pnp_resource_valid(struct resource *res)
static inline int pnp_resource_enabled(struct resource *res)
static inline resource_size_t pnp_resource_len(struct resource *res)
static inline resource_size_t pnp_port_start(struct pnp_dev *dev,
unsigned int bar)
static inline resource_size_t pnp_port_end(struct pnp_dev *dev,
unsigned int bar)
static inline unsigned long pnp_port_flags(struct pnp_dev *dev,
unsigned int bar)
static inline int pnp_port_valid(struct pnp_dev *dev, unsigned int bar)
static inline resource_size_t pnp_port_len(struct pnp_dev *dev,
unsigned int bar)
static inline resource_size_t pnp_mem_start(struct pnp_dev *dev,
unsigned int bar)
static inline resource_size_t pnp_mem_end(struct pnp_dev *dev,
unsigned int bar)
static inline unsigned long pnp_mem_flags(struct pnp_dev *dev, unsigned int bar)
static inline int pnp_mem_valid(struct pnp_dev *dev, unsigned int bar)
static inline resource_size_t pnp_mem_len(struct pnp_dev *dev,
unsigned int bar)
static inline resource_size_t pnp_irq(struct pnp_dev *dev, unsigned int bar)
static inline unsigned long pnp_irq_flags(struct pnp_dev *dev, unsigned int bar)
static inline int pnp_irq_valid(struct pnp_dev *dev, unsigned int bar)
static inline resource_size_t pnp_dma(struct pnp_dev *dev, unsigned int bar)
static inline unsigned long pnp_dma_flags(struct pnp_dev *dev, unsigned int bar)
static inline int pnp_dma_valid(struct pnp_dev *dev, unsigned int bar)
struct pnp_card ;
#define global_to_pnp_card(n) list_entry(n, struct pnp_card, global_list)
#define protocol_to_pnp_card(n) list_entry(n, struct pnp_card, protocol_list)
#define to_pnp_card(n) container_of(n, struct pnp_card, dev)
#define pnp_for_each_card(card) \
for((card) = global_to_pnp_card(pnp_cards.next); \
(card) != global_to_pnp_card(&pnp_cards); \
(card) = global_to_pnp_card((card)->global_list.next))
struct pnp_card_link ;
static inline void *pnp_get_card_drvdata(struct pnp_card_link *pcard)
static inline void pnp_set_card_drvdata(struct pnp_card_link *pcard, void *data)
struct pnp_dev ;
#define global_to_pnp_dev(n) list_entry(n, struct pnp_dev, global_list)
#define card_to_pnp_dev(n) list_entry(n, struct pnp_dev, card_list)
#define protocol_to_pnp_dev(n) list_entry(n, struct pnp_dev, protocol_list)
#define	to_pnp_dev(n) container_of(n, struct pnp_dev, dev)
#define pnp_for_each_dev(dev) \
for((dev) = global_to_pnp_dev(pnp_global.next); \
(dev) != global_to_pnp_dev(&pnp_global); \
(dev) = global_to_pnp_dev((dev)->global_list.next))
#define card_for_each_dev(card,dev) \
for((dev) = card_to_pnp_dev((card)->devices.next); \
(dev) != card_to_pnp_dev(&(card)->devices); \
(dev) = card_to_pnp_dev((dev)->card_list.next))
#define pnp_dev_name(dev) (dev)->name
static inline void *pnp_get_drvdata(struct pnp_dev *pdev)
static inline void pnp_set_drvdata(struct pnp_dev *pdev, void *data)
struct pnp_fixup ;
#define PNP_CONFIG_NORMAL	0x0001
#define PNP_CONFIG_FORCE	0x0002
#define PNP_READ		0x0001
#define PNP_WRITE		0x0002
#define PNP_DISABLE		0x0004
#define PNP_CONFIGURABLE	0x0008
#define PNP_REMOVABLE		0x0010
#define pnp_can_read(dev)	(((dev)->protocol->get) && \
((dev)->capabilities & PNP_READ))
#define pnp_can_write(dev)	(((dev)->protocol->set) && \
((dev)->capabilities & PNP_WRITE))
#define pnp_can_disable(dev)	(((dev)->protocol->disable) && \
((dev)->capabilities & PNP_DISABLE))
#define pnp_can_configure(dev)	((!(dev)->active) && \
((dev)->capabilities & PNP_CONFIGURABLE))
extern struct pnp_protocol isapnp_protocol;
#define pnp_device_is_isapnp(dev) ((dev)->protocol == (&isapnp_protocol))
#define pnp_device_is_isapnp(dev) 0
extern struct mutex pnp_res_mutex;
extern struct pnp_protocol pnpbios_protocol;
#define pnp_device_is_pnpbios(dev) ((dev)->protocol == (&pnpbios_protocol))
#define pnp_device_is_pnpbios(dev) 0
extern struct pnp_protocol pnpacpi_protocol;
static inline struct acpi_device *pnp_acpi_device(struct pnp_dev *dev)
#define pnp_acpi_device(dev) 0
#define PNP_READY		0x0000
#define PNP_ATTACHED		0x0001
#define PNP_BUSY		0x0002
#define PNP_FAULTY		0x0004
#define isapnp_card_number(dev)	((dev)->card ? (dev)->card->number : -1)
#define isapnp_csn_number(dev)  ((dev)->number)
struct pnp_id ;
struct pnp_driver ;
#define	to_pnp_driver(drv) container_of(drv, struct pnp_driver, driver)
struct pnp_card_driver ;
#define	to_pnp_card_driver(drv) container_of(drv, struct pnp_card_driver, link)
#define PNP_DRIVER_RES_DO_NOT_CHANGE	0x0001
#define PNP_DRIVER_RES_DISABLE		0x0003
struct pnp_protocol ;
#define to_pnp_protocol(n) list_entry(n, struct pnp_protocol, protocol_list)
#define protocol_for_each_card(protocol,card) \
for((card) = protocol_to_pnp_card((protocol)->cards.next); \
(card) != protocol_to_pnp_card(&(protocol)->cards); \
(card) = protocol_to_pnp_card((card)->protocol_list.next))
#define protocol_for_each_dev(protocol,dev) \
for((dev) = protocol_to_pnp_dev((protocol)->devices.next); \
(dev) != protocol_to_pnp_dev(&(protocol)->devices); \
(dev) = protocol_to_pnp_dev((dev)->protocol_list.next))
extern struct bus_type pnp_bus_type;
#if defined(CONFIG_PNP)
int pnp_device_attach(struct pnp_dev *pnp_dev);
void pnp_device_detach(struct pnp_dev *pnp_dev);
extern struct list_head pnp_global;
extern int pnp_platform_devices;
struct pnp_dev *pnp_request_card_device(struct pnp_card_link *clink,
const char *id, struct pnp_dev *from);
void pnp_release_card_device(struct pnp_dev *dev);
int pnp_register_card_driver(struct pnp_card_driver *drv);
void pnp_unregister_card_driver(struct pnp_card_driver *drv);
extern struct list_head pnp_cards;
int pnp_possible_config(struct pnp_dev *dev, int type, resource_size_t base,
resource_size_t size);
int pnp_auto_config_dev(struct pnp_dev *dev);
int pnp_start_dev(struct pnp_dev *dev);
int pnp_stop_dev(struct pnp_dev *dev);
int pnp_activate_dev(struct pnp_dev *dev);
int pnp_disable_dev(struct pnp_dev *dev);
int pnp_range_reserved(resource_size_t start, resource_size_t end);
int pnp_is_active(struct pnp_dev *dev);
int compare_pnp_id(struct pnp_id *pos, const char *id);
int pnp_register_driver(struct pnp_driver *drv);
void pnp_unregister_driver(struct pnp_driver *drv);
static inline int pnp_device_attach(struct pnp_dev *pnp_dev)
static inline void pnp_device_detach(struct pnp_dev *pnp_dev)
#define pnp_platform_devices 0
static inline struct pnp_dev *pnp_request_card_device(struct pnp_card_link *clink, const char *id, struct pnp_dev *from)
static inline void pnp_release_card_device(struct pnp_dev *dev)
static inline int pnp_register_card_driver(struct pnp_card_driver *drv)
static inline void pnp_unregister_card_driver(struct pnp_card_driver *drv)
static inline int pnp_possible_config(struct pnp_dev *dev, int type,
resource_size_t base,
resource_size_t size)
static inline int pnp_auto_config_dev(struct pnp_dev *dev)
static inline int pnp_start_dev(struct pnp_dev *dev)
static inline int pnp_stop_dev(struct pnp_dev *dev)
static inline int pnp_activate_dev(struct pnp_dev *dev)
static inline int pnp_disable_dev(struct pnp_dev *dev)
static inline int pnp_range_reserved(resource_size_t start, resource_size_t end)
static inline int pnp_is_active(struct pnp_dev *dev)
static inline int compare_pnp_id(struct pnp_id *pos, const char *id)
static inline int pnp_register_driver(struct pnp_driver *drv)
static inline void pnp_unregister_driver(struct pnp_driver *drv)
