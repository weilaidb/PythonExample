static int snd_gus_dram_poke(struct snd_gus_card *gus, char __user *_buffer,
unsigned int address, unsigned int size)
int snd_gus_dram_write(struct snd_gus_card *gus, char __user *buffer,
unsigned int address, unsigned int size)
static int snd_gus_dram_peek(struct snd_gus_card *gus, char __user *_buffer,
unsigned int address, unsigned int size,
int rom)
int snd_gus_dram_read(struct snd_gus_card *gus, char __user *buffer,
unsigned int address, unsigned int size,
int rom)
