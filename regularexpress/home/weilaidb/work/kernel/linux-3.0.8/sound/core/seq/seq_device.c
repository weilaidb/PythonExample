MODULE_AUTHOR("Takashi Iwai <tiwai@suse.de>");
MODULE_DESCRIPTION("ALSA sequencer device management");
MODULE_LICENSE("GPL");
#define DRIVER_EMPTY		0
#define DRIVER_LOADED		(1<<0)
#define DRIVER_REQUESTED	(1<<1)
#define DRIVER_LOCKED		(1<<2)
struct ops_list ;
static LIST_HEAD(opslist);
static int num_ops;
static DEFINE_MUTEX(ops_mutex);
static struct snd_info_entry *info_entry;
static int snd_seq_device_free(struct snd_seq_device *dev);
static int snd_seq_device_dev_free(struct snd_device *device);
static int snd_seq_device_dev_register(struct snd_device *device);
static int snd_seq_device_dev_disconnect(struct snd_device *device);
static int init_device(struct snd_seq_device *dev, struct ops_list *ops);
static int free_device(struct snd_seq_device *dev, struct ops_list *ops);
static struct ops_list *find_driver(char *id, int create_if_empty);
static struct ops_list *create_driver(char *id);
static void unlock_driver(struct ops_list *ops);
static void remove_drivers(void);
static void snd_seq_device_info(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static int snd_seq_in_init;
void snd_seq_autoload_lock(void)
void snd_seq_autoload_unlock(void)
void snd_seq_device_load_drivers(void)
int snd_seq_device_new(struct snd_card *card, int device, char *id, int argsize,
struct snd_seq_device **result)
static int snd_seq_device_free(struct snd_seq_device *dev)
static int snd_seq_device_dev_free(struct snd_device *device)
static int snd_seq_device_dev_register(struct snd_device *device)
static int snd_seq_device_dev_disconnect(struct snd_device *device)
int snd_seq_device_register_driver(char *id, struct snd_seq_dev_ops *entry,
int argsize)
static struct ops_list * create_driver(char *id)
int snd_seq_device_unregister_driver(char *id)
static void remove_drivers(void)
static int init_device(struct snd_seq_device *dev, struct ops_list *ops)
static int free_device(struct snd_seq_device *dev, struct ops_list *ops)
static struct ops_list * find_driver(char *id, int create_if_empty)
static void unlock_driver(struct ops_list *ops)
static int __init alsa_seq_device_init(void)
static void __exit alsa_seq_device_exit(void)
module_init(alsa_seq_device_init)
module_exit(alsa_seq_device_exit)
EXPORT_SYMBOL(snd_seq_device_load_drivers);
EXPORT_SYMBOL(snd_seq_device_new);
EXPORT_SYMBOL(snd_seq_device_register_driver);
EXPORT_SYMBOL(snd_seq_device_unregister_driver);
EXPORT_SYMBOL(snd_seq_autoload_lock);
EXPORT_SYMBOL(snd_seq_autoload_unlock);
