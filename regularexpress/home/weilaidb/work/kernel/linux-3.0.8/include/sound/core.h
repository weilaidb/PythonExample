#define __SOUND_CORE_H
#define SNDRV_CARDS 32
#define SNDRV_CARDS 8
#define CONFIG_SND_MAJOR	116
struct pci_dev;
#define SNDRV_DEV_TYPE_RANGE_SIZE		0x1000
typedef int __bitwise snd_device_type_t;
#define	SNDRV_DEV_TOPLEVEL	((__force snd_device_type_t) 0)
#define	SNDRV_DEV_CONTROL	((__force snd_device_type_t) 1)
#define	SNDRV_DEV_LOWLEVEL_PRE	((__force snd_device_type_t) 2)
#define	SNDRV_DEV_LOWLEVEL_NORMAL ((__force snd_device_type_t) 0x1000)
#define	SNDRV_DEV_PCM		((__force snd_device_type_t) 0x1001)
#define	SNDRV_DEV_RAWMIDI	((__force snd_device_type_t) 0x1002)
#define	SNDRV_DEV_TIMER		((__force snd_device_type_t) 0x1003)
#define	SNDRV_DEV_SEQUENCER	((__force snd_device_type_t) 0x1004)
#define	SNDRV_DEV_HWDEP		((__force snd_device_type_t) 0x1005)
#define	SNDRV_DEV_INFO		((__force snd_device_type_t) 0x1006)
#define	SNDRV_DEV_BUS		((__force snd_device_type_t) 0x1007)
#define	SNDRV_DEV_CODEC		((__force snd_device_type_t) 0x1008)
#define	SNDRV_DEV_JACK          ((__force snd_device_type_t) 0x1009)
#define	SNDRV_DEV_LOWLEVEL	((__force snd_device_type_t) 0x2000)
typedef int __bitwise snd_device_state_t;
#define	SNDRV_DEV_BUILD		((__force snd_device_state_t) 0)
#define	SNDRV_DEV_REGISTERED	((__force snd_device_state_t) 1)
#define	SNDRV_DEV_DISCONNECTED	((__force snd_device_state_t) 2)
typedef int __bitwise snd_device_cmd_t;
#define	SNDRV_DEV_CMD_PRE	((__force snd_device_cmd_t) 0)
#define	SNDRV_DEV_CMD_NORMAL	((__force snd_device_cmd_t) 1)
#define	SNDRV_DEV_CMD_POST	((__force snd_device_cmd_t) 2)
struct snd_device;
struct snd_device_ops ;
struct snd_device ;
#define snd_device(n) list_entry(n, struct snd_device, list)
struct snd_card ;
static inline void snd_power_lock(struct snd_card *card)
static inline void snd_power_unlock(struct snd_card *card)
static inline unsigned int snd_power_get_state(struct snd_card *card)
static inline void snd_power_change_state(struct snd_card *card, unsigned int state)
int snd_power_wait(struct snd_card *card, unsigned int power_state);
#define snd_power_lock(card)		do  while (0)
#define snd_power_unlock(card)		do  while (0)
static inline int snd_power_wait(struct snd_card *card, unsigned int state)
#define snd_power_get_state(card)	()
#define snd_power_change_state(card, state)	do  while (0)
struct snd_minor ;
static inline struct device *snd_card_get_device_link(struct snd_card *card)
extern int snd_major;
extern int snd_ecards_limit;
extern struct class *sound_class;
void snd_request_card(int card);
int snd_register_device_for_dev(int type, struct snd_card *card,
int dev,
const struct file_operations *f_ops,
void *private_data,
const char *name,
struct device *device);
static inline int snd_register_device(int type, struct snd_card *card, int dev,
const struct file_operations *f_ops,
void *private_data,
const char *name)
int snd_unregister_device(int type, struct snd_card *card, int dev);
void *snd_lookup_minor_data(unsigned int minor, int type);
int snd_add_device_sysfs_file(int type, struct snd_card *card, int dev,
struct device_attribute *attr);
int snd_register_oss_device(int type, struct snd_card *card, int dev,
const struct file_operations *f_ops, void *private_data,
const char *name);
int snd_unregister_oss_device(int type, struct snd_card *card, int dev);
void *snd_lookup_oss_minor_data(unsigned int minor, int type);
int snd_minor_info_init(void);
int snd_minor_info_done(void);
int snd_minor_info_oss_init(void);
int snd_minor_info_oss_done(void);
static inline int snd_minor_info_oss_init(void)
static inline int snd_minor_info_oss_done(void)
int copy_to_user_fromio(void __user *dst, const volatile void __iomem *src, size_t count);
int copy_from_user_toio(volatile void __iomem *dst, const void __user *src, size_t count);
extern struct snd_card *snd_cards[SNDRV_CARDS];
int snd_card_locked(int card);
#if defined(CONFIG_SND_MIXER_OSS) || defined(CONFIG_SND_MIXER_OSS_MODULE)
#define SND_MIXER_OSS_NOTIFY_REGISTER	0
#define SND_MIXER_OSS_NOTIFY_DISCONNECT	1
#define SND_MIXER_OSS_NOTIFY_FREE	2
extern int (*snd_mixer_oss_notify_callback)(struct snd_card *card, int cmd);
int snd_card_create(int idx, const char *id,
struct module *module, int extra_size,
struct snd_card **card_ret);
int snd_card_disconnect(struct snd_card *card);
int snd_card_free(struct snd_card *card);
int snd_card_free_when_closed(struct snd_card *card);
void snd_card_set_id(struct snd_card *card, const char *id);
int snd_card_register(struct snd_card *card);
int snd_card_info_init(void);
int snd_card_info_done(void);
int snd_component_add(struct snd_card *card, const char *component);
int snd_card_file_add(struct snd_card *card, struct file *file);
int snd_card_file_remove(struct snd_card *card, struct file *file);
#define snd_card_set_dev(card, devptr) ((card)->dev = (devptr))
int snd_device_new(struct snd_card *card, snd_device_type_t type,
void *device_data, struct snd_device_ops *ops);
int snd_device_register(struct snd_card *card, void *device_data);
int snd_device_register_all(struct snd_card *card);
int snd_device_disconnect(struct snd_card *card, void *device_data);
int snd_device_disconnect_all(struct snd_card *card);
int snd_device_free(struct snd_card *card, void *device_data);
int snd_device_free_all(struct snd_card *card, snd_device_cmd_t cmd);
#define DMA_MODE_NO_ENABLE	0x0100
void snd_dma_program(unsigned long dma, unsigned long addr, unsigned int size, unsigned short mode);
void snd_dma_disable(unsigned long dma);
unsigned int snd_dma_pointer(unsigned long dma, unsigned int size);
struct resource;
void release_and_free_resource(struct resource *res);
#if defined(CONFIG_SND_DEBUG) || defined(CONFIG_SND_VERBOSE_PRINTK)
void __snd_printk(unsigned int level, const char *file, int line,
const char *format, ...)
__attribute__ ((format (printf, 4, 5)));
#define __snd_printk(level, file, line, format, args...) \
printk(format, ##args)
#define snd_printk(fmt, args...) \
__snd_printk(0, __FILE__, __LINE__, fmt, ##args)
#define snd_printd(fmt, args...) \
__snd_printk(1, __FILE__, __LINE__, fmt, ##args)
#define snd_BUG()		WARN(1, "BUG?\n")
#define snd_BUG_ON(cond)	WARN((cond), "BUG? (%s)\n", __stringify(cond))
#define snd_printd(fmt, args...)	do  while (0)
#define snd_BUG()			do  while (0)
static inline int __snd_bug_on(int cond)
#define snd_BUG_ON(cond)	__snd_bug_on(0 && (cond))
#define snd_printdd(format, args...) \
__snd_printk(2, __FILE__, __LINE__, format, ##args)
#define snd_printdd(format, args...)	do  while (0)
#define SNDRV_OSS_VERSION         ((3<<16)|(8<<8)|(1<<4)|(0))
#if defined(CONFIG_GAMEPORT) || defined(CONFIG_GAMEPORT_MODULE)
#define gameport_set_dev_parent(gp,xdev) ((gp)->dev.parent = (xdev))
#define gameport_set_port_data(gp,r) ((gp)->port_data = (r))
#define gameport_get_port_data(gp) (gp)->port_data
struct snd_pci_quirk ;
#define _SND_PCI_QUIRK_ID_MASK(vend, mask, dev)	\
.subvendor = (vend), .subdevice = (dev), .subdevice_mask = (mask)
#define _SND_PCI_QUIRK_ID(vend, dev) \
_SND_PCI_QUIRK_ID_MASK(vend, 0xffff, dev)
#define SND_PCI_QUIRK_ID(vend,dev)
#define SND_PCI_QUIRK(vend,dev,xname,val) \
#define SND_PCI_QUIRK_VENDOR(vend, xname, val)			\
#define SND_PCI_QUIRK_MASK(vend, mask, dev, xname, val)			\
#define SND_PCI_QUIRK(vend,dev,xname,val) \
#define SND_PCI_QUIRK_MASK(vend, mask, dev, xname, val)			\
#define SND_PCI_QUIRK_VENDOR(vend, xname, val)			\
const struct snd_pci_quirk *
snd_pci_quirk_lookup(struct pci_dev *pci, const struct snd_pci_quirk *list);
const struct snd_pci_quirk *
snd_pci_quirk_lookup_id(u16 vendor, u16 device,
const struct snd_pci_quirk *list);
