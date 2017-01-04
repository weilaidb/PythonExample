#define __SOUND_I2C_H
#define SND_I2C_DEVICE_ADDRTEN	(1<<0)
struct snd_i2c_device ;
#define snd_i2c_device(n) list_entry(n, struct snd_i2c_device, list)
struct snd_i2c_bit_ops ;
struct snd_i2c_ops ;
struct snd_i2c_bus ;
#define snd_i2c_slave_bus(n) list_entry(n, struct snd_i2c_bus, buses)
int snd_i2c_bus_create(struct snd_card *card, const char *name,
struct snd_i2c_bus *master, struct snd_i2c_bus **ri2c);
int snd_i2c_device_create(struct snd_i2c_bus *bus, const char *name,
unsigned char addr, struct snd_i2c_device **rdevice);
int snd_i2c_device_free(struct snd_i2c_device *device);
static inline void snd_i2c_lock(struct snd_i2c_bus *bus)
static inline void snd_i2c_unlock(struct snd_i2c_bus *bus)
int snd_i2c_sendbytes(struct snd_i2c_device *device, unsigned char *bytes, int count);
int snd_i2c_readbytes(struct snd_i2c_device *device, unsigned char *bytes, int count);
int snd_i2c_probeaddr(struct snd_i2c_bus *bus, unsigned short addr);
