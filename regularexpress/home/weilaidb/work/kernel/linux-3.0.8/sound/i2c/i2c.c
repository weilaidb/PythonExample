MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>");
MODULE_DESCRIPTION("Generic i2c interface for ALSA");
MODULE_LICENSE("GPL");
static int snd_i2c_bit_sendbytes(struct snd_i2c_device *device,
unsigned char *bytes, int count);
static int snd_i2c_bit_readbytes(struct snd_i2c_device *device,
unsigned char *bytes, int count);
static int snd_i2c_bit_probeaddr(struct snd_i2c_bus *bus,
unsigned short addr);
static struct snd_i2c_ops snd_i2c_bit_ops = ;
static int snd_i2c_bus_free(struct snd_i2c_bus *bus)
static int snd_i2c_bus_dev_free(struct snd_device *device)
int snd_i2c_bus_create(struct snd_card *card, const char *name,
struct snd_i2c_bus *master, struct snd_i2c_bus **ri2c)
EXPORT_SYMBOL(snd_i2c_bus_create);
int snd_i2c_device_create(struct snd_i2c_bus *bus, const char *name,
unsigned char addr, struct snd_i2c_device **rdevice)
EXPORT_SYMBOL(snd_i2c_device_create);
int snd_i2c_device_free(struct snd_i2c_device *device)
EXPORT_SYMBOL(snd_i2c_device_free);
int snd_i2c_sendbytes(struct snd_i2c_device *device, unsigned char *bytes, int count)
EXPORT_SYMBOL(snd_i2c_sendbytes);
int snd_i2c_readbytes(struct snd_i2c_device *device, unsigned char *bytes, int count)
EXPORT_SYMBOL(snd_i2c_readbytes);
int snd_i2c_probeaddr(struct snd_i2c_bus *bus, unsigned short addr)
EXPORT_SYMBOL(snd_i2c_probeaddr);
static inline void snd_i2c_bit_hw_start(struct snd_i2c_bus *bus)
static inline void snd_i2c_bit_hw_stop(struct snd_i2c_bus *bus)
static void snd_i2c_bit_direction(struct snd_i2c_bus *bus, int clock, int data)
static void snd_i2c_bit_set(struct snd_i2c_bus *bus, int clock, int data)
static int snd_i2c_bit_data(struct snd_i2c_bus *bus, int ack)
static void snd_i2c_bit_start(struct snd_i2c_bus *bus)
static void snd_i2c_bit_stop(struct snd_i2c_bus *bus)
static void snd_i2c_bit_send(struct snd_i2c_bus *bus, int data)
static int snd_i2c_bit_ack(struct snd_i2c_bus *bus)
static int snd_i2c_bit_sendbyte(struct snd_i2c_bus *bus, unsigned char data)
static int snd_i2c_bit_readbyte(struct snd_i2c_bus *bus, int last)
static int snd_i2c_bit_sendbytes(struct snd_i2c_device *device,
unsigned char *bytes, int count)
static int snd_i2c_bit_readbytes(struct snd_i2c_device *device,
unsigned char *bytes, int count)
static int snd_i2c_bit_probeaddr(struct snd_i2c_bus *bus, unsigned short addr)
static int __init alsa_i2c_init(void)
static void __exit alsa_i2c_exit(void)
module_init(alsa_i2c_init)
module_exit(alsa_i2c_exit)
