unsigned int snd_emu10k1_ptr_read(struct snd_emu10k1 * emu, unsigned int reg, unsigned int chn)
EXPORT_SYMBOL(snd_emu10k1_ptr_read);
void snd_emu10k1_ptr_write(struct snd_emu10k1 *emu, unsigned int reg, unsigned int chn, unsigned int data)
EXPORT_SYMBOL(snd_emu10k1_ptr_write);
unsigned int snd_emu10k1_ptr20_read(struct snd_emu10k1 * emu,
unsigned int reg,
unsigned int chn)
void snd_emu10k1_ptr20_write(struct snd_emu10k1 *emu,
unsigned int reg,
unsigned int chn,
unsigned int data)
int snd_emu10k1_spi_write(struct snd_emu10k1 * emu,
unsigned int data)
int snd_emu10k1_i2c_write(struct snd_emu10k1 *emu,
u32 reg,
u32 value)
int snd_emu1010_fpga_write(struct snd_emu10k1 * emu, u32 reg, u32 value)
int snd_emu1010_fpga_read(struct snd_emu10k1 * emu, u32 reg, u32 *value)
int snd_emu1010_fpga_link_dst_src_write(struct snd_emu10k1 * emu, u32 dst, u32 src)
void snd_emu10k1_intr_enable(struct snd_emu10k1 *emu, unsigned int intrenb)
void snd_emu10k1_intr_disable(struct snd_emu10k1 *emu, unsigned int intrenb)
void snd_emu10k1_voice_intr_enable(struct snd_emu10k1 *emu, unsigned int voicenum)
void snd_emu10k1_voice_intr_disable(struct snd_emu10k1 *emu, unsigned int voicenum)
void snd_emu10k1_voice_intr_ack(struct snd_emu10k1 *emu, unsigned int voicenum)
void snd_emu10k1_voice_half_loop_intr_enable(struct snd_emu10k1 *emu, unsigned int voicenum)
void snd_emu10k1_voice_half_loop_intr_disable(struct snd_emu10k1 *emu, unsigned int voicenum)
void snd_emu10k1_voice_half_loop_intr_ack(struct snd_emu10k1 *emu, unsigned int voicenum)
void snd_emu10k1_voice_set_loop_stop(struct snd_emu10k1 *emu, unsigned int voicenum)
void snd_emu10k1_voice_clear_loop_stop(struct snd_emu10k1 *emu, unsigned int voicenum)
void snd_emu10k1_wait(struct snd_emu10k1 *emu, unsigned int wait)
unsigned short snd_emu10k1_ac97_read(struct snd_ac97 *ac97, unsigned short reg)
void snd_emu10k1_ac97_write(struct snd_ac97 *ac97, unsigned short reg, unsigned short data)
unsigned int snd_emu10k1_rate_to_pitch(unsigned int rate)
