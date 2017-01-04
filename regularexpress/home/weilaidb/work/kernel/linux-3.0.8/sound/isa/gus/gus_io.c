void snd_gf1_delay(struct snd_gus_card * gus)
static inline void __snd_gf1_ctrl_stop(struct snd_gus_card * gus, unsigned char reg)
static inline void __snd_gf1_write8(struct snd_gus_card * gus,
unsigned char reg,
unsigned char data)
static inline unsigned char __snd_gf1_look8(struct snd_gus_card * gus,
unsigned char reg)
static inline void __snd_gf1_write16(struct snd_gus_card * gus,
unsigned char reg, unsigned int data)
static inline unsigned short __snd_gf1_look16(struct snd_gus_card * gus,
unsigned char reg)
static inline void __snd_gf1_adlib_write(struct snd_gus_card * gus,
unsigned char reg, unsigned char data)
static inline void __snd_gf1_write_addr(struct snd_gus_card * gus, unsigned char reg,
unsigned int addr, int w_16bit)
static inline unsigned int __snd_gf1_read_addr(struct snd_gus_card * gus,
unsigned char reg, short w_16bit)
void snd_gf1_ctrl_stop(struct snd_gus_card * gus, unsigned char reg)
void snd_gf1_write8(struct snd_gus_card * gus,
unsigned char reg,
unsigned char data)
unsigned char snd_gf1_look8(struct snd_gus_card * gus, unsigned char reg)
void snd_gf1_write16(struct snd_gus_card * gus,
unsigned char reg,
unsigned int data)
unsigned short snd_gf1_look16(struct snd_gus_card * gus, unsigned char reg)
void snd_gf1_adlib_write(struct snd_gus_card * gus,
unsigned char reg,
unsigned char data)
void snd_gf1_write_addr(struct snd_gus_card * gus, unsigned char reg,
unsigned int addr, short w_16bit)
unsigned int snd_gf1_read_addr(struct snd_gus_card * gus,
unsigned char reg,
short w_16bit)
void snd_gf1_i_ctrl_stop(struct snd_gus_card * gus, unsigned char reg)
void snd_gf1_i_write8(struct snd_gus_card * gus,
unsigned char reg,
unsigned char data)
unsigned char snd_gf1_i_look8(struct snd_gus_card * gus, unsigned char reg)
void snd_gf1_i_write16(struct snd_gus_card * gus,
unsigned char reg,
unsigned int data)
unsigned short snd_gf1_i_look16(struct snd_gus_card * gus, unsigned char reg)
static unsigned int snd_gf1_i_read_addr(struct snd_gus_card * gus,
unsigned char reg, short w_16bit)
void snd_gf1_dram_addr(struct snd_gus_card * gus, unsigned int addr)
void snd_gf1_poke(struct snd_gus_card * gus, unsigned int addr, unsigned char data)
unsigned char snd_gf1_peek(struct snd_gus_card * gus, unsigned int addr)
spin_lock_irqsave(&gus->reg_lock, flags);
outb(SNDRV_GF1_GW_DRAM_IO_LOW, gus->gf1.reg_regsel);
mb();
outw((unsigned short) addr, gus->gf1.reg_data16);
mb();
outb(SNDRV_GF1_GB_DRAM_IO_HIGH, gus->gf1.reg_regsel);
mb();
outb((unsigned char) (addr >> 16), gus->gf1.reg_data8);
mb();
outb(SNDRV_GF1_GW_DRAM_IO16, gus->gf1.reg_regsel);
mb();
outw(data, gus->gf1.reg_data16);
spin_unlock_irqrestore(&gus->reg_lock, flags);
}
unsigned short snd_gf1_peekw(struct snd_gus_card * gus, unsigned int addr)
void snd_gf1_dram_setmem(struct snd_gus_card * gus, unsigned int addr,
unsigned short value, unsigned int count)
void snd_gf1_select_active_voices(struct snd_gus_card * gus)
void snd_gf1_print_voice_registers(struct snd_gus_card * gus)
