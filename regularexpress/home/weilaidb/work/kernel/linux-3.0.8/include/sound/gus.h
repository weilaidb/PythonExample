#define __SOUND_GUS_H
#define GUSP(gus, x)			((gus)->gf1.port + SNDRV_g_u_s_##x)
#define SNDRV_g_u_s_MIDICTRL		(0x320-0x220)
#define SNDRV_g_u_s_MIDISTAT		(0x320-0x220)
#define SNDRV_g_u_s_MIDIDATA		(0x321-0x220)
#define SNDRV_g_u_s_GF1PAGE		(0x322-0x220)
#define SNDRV_g_u_s_GF1REGSEL		(0x323-0x220)
#define SNDRV_g_u_s_GF1DATALOW		(0x324-0x220)
#define SNDRV_g_u_s_GF1DATAHIGH		(0x325-0x220)
#define SNDRV_g_u_s_IRQSTAT		(0x226-0x220)
#define SNDRV_g_u_s_TIMERCNTRL		(0x228-0x220)
#define SNDRV_g_u_s_TIMERDATA		(0x229-0x220)
#define SNDRV_g_u_s_DRAM		(0x327-0x220)
#define SNDRV_g_u_s_MIXCNTRLREG		(0x220-0x220)
#define SNDRV_g_u_s_IRQDMACNTRLREG	(0x22b-0x220)
#define SNDRV_g_u_s_REGCNTRLS		(0x22f-0x220)
#define SNDRV_g_u_s_BOARDVERSION	(0x726-0x220)
#define SNDRV_g_u_s_MIXCNTRLPORT	(0x726-0x220)
#define SNDRV_g_u_s_IVER		(0x325-0x220)
#define SNDRV_g_u_s_MIXDATAPORT		(0x326-0x220)
#define SNDRV_g_u_s_MAXCNTRLPORT	(0x326-0x220)
#define SNDRV_GF1_GB_ACTIVE_VOICES		0x0e
#define SNDRV_GF1_GB_VOICES_IRQ			0x0f
#define SNDRV_GF1_GB_GLOBAL_MODE		0x19
#define SNDRV_GF1_GW_LFO_BASE			0x1a
#define SNDRV_GF1_GB_VOICES_IRQ_READ		0x1f
#define SNDRV_GF1_GB_DRAM_DMA_CONTROL		0x41
#define SNDRV_GF1_GW_DRAM_DMA_LOW		0x42
#define SNDRV_GF1_GW_DRAM_IO_LOW		0x43
#define SNDRV_GF1_GB_DRAM_IO_HIGH		0x44
#define SNDRV_GF1_GB_SOUND_BLASTER_CONTROL	0x45
#define SNDRV_GF1_GB_ADLIB_TIMER_1		0x46
#define SNDRV_GF1_GB_ADLIB_TIMER_2		0x47
#define SNDRV_GF1_GB_RECORD_RATE		0x48
#define SNDRV_GF1_GB_REC_DMA_CONTROL		0x49
#define SNDRV_GF1_GB_JOYSTICK_DAC_LEVEL		0x4b
#define SNDRV_GF1_GB_RESET			0x4c
#define SNDRV_GF1_GB_DRAM_DMA_HIGH		0x50
#define SNDRV_GF1_GW_DRAM_IO16			0x51
#define SNDRV_GF1_GW_MEMORY_CONFIG		0x52
#define SNDRV_GF1_GB_MEMORY_CONTROL		0x53
#define SNDRV_GF1_GW_FIFO_RECORD_BASE_ADDR	0x54
#define SNDRV_GF1_GW_FIFO_PLAY_BASE_ADDR	0x55
#define SNDRV_GF1_GW_FIFO_SIZE			0x56
#define SNDRV_GF1_GW_INTERLEAVE			0x57
#define SNDRV_GF1_GB_COMPATIBILITY		0x59
#define SNDRV_GF1_GB_DECODE_CONTROL		0x5a
#define SNDRV_GF1_GB_VERSION_NUMBER		0x5b
#define SNDRV_GF1_GB_MPU401_CONTROL_A		0x5c
#define SNDRV_GF1_GB_MPU401_CONTROL_B		0x5d
#define SNDRV_GF1_GB_EMULATION_IRQ		0x60
#define SNDRV_GF1_VB_ADDRESS_CONTROL		0x00
#define SNDRV_GF1_VW_FREQUENCY			0x01
#define SNDRV_GF1_VW_START_HIGH			0x02
#define SNDRV_GF1_VW_START_LOW			0x03
#define SNDRV_GF1_VA_START			SNDRV_GF1_VW_START_HIGH
#define SNDRV_GF1_VW_END_HIGH			0x04
#define SNDRV_GF1_VW_END_LOW			0x05
#define SNDRV_GF1_VA_END			SNDRV_GF1_VW_END_HIGH
#define SNDRV_GF1_VB_VOLUME_RATE		0x06
#define SNDRV_GF1_VB_VOLUME_START		0x07
#define SNDRV_GF1_VB_VOLUME_END			0x08
#define SNDRV_GF1_VW_VOLUME			0x09
#define SNDRV_GF1_VW_CURRENT_HIGH		0x0a
#define SNDRV_GF1_VW_CURRENT_LOW		0x0b
#define SNDRV_GF1_VA_CURRENT			SNDRV_GF1_VW_CURRENT_HIGH
#define SNDRV_GF1_VB_PAN			0x0c
#define SNDRV_GF1_VW_OFFSET_RIGHT		0x0c
#define SNDRV_GF1_VB_VOLUME_CONTROL		0x0d
#define SNDRV_GF1_VB_UPPER_ADDRESS		0x10
#define SNDRV_GF1_VW_EFFECT_HIGH		0x11
#define SNDRV_GF1_VW_EFFECT_LOW			0x12
#define SNDRV_GF1_VA_EFFECT			SNDRV_GF1_VW_EFFECT_HIGH
#define SNDRV_GF1_VW_OFFSET_LEFT		0x13
#define SNDRV_GF1_VB_ACCUMULATOR		0x14
#define SNDRV_GF1_VB_MODE			0x15
#define SNDRV_GF1_VW_EFFECT_VOLUME		0x16
#define SNDRV_GF1_VB_FREQUENCY_LFO		0x17
#define SNDRV_GF1_VB_VOLUME_LFO			0x18
#define SNDRV_GF1_VW_OFFSET_RIGHT_FINAL		0x1b
#define SNDRV_GF1_VW_OFFSET_LEFT_FINAL		0x1c
#define SNDRV_GF1_VW_EFFECT_VOLUME_FINAL	0x1d
#define SNDRV_ICS_MIC_DEV		0
#define SNDRV_ICS_LINE_DEV		1
#define SNDRV_ICS_CD_DEV		2
#define SNDRV_ICS_GF1_DEV		3
#define SNDRV_ICS_NONE_DEV		4
#define SNDRV_ICS_MASTER_DEV		5
#define SNDRV_LFO_TREMOLO		0
#define SNDRV_LFO_VIBRATO		1
#define SNDRV_GF1_DMA_UNSIGNED	0x80
#define SNDRV_GF1_DMA_16BIT	0x40
#define SNDRV_GF1_DMA_IRQ	0x20
#define SNDRV_GF1_DMA_WIDTH16	0x04
#define SNDRV_GF1_DMA_READ	0x02
#define SNDRV_GF1_DMA_ENABLE	0x01
#define SNDRV_GF1_ATTEN(x)	(snd_gf1_atten_table[x])
#define SNDRV_GF1_MIN_VOLUME	1800
#define SNDRV_GF1_MAX_VOLUME	4095
#define SNDRV_GF1_MIN_OFFSET	(SNDRV_GF1_MIN_VOLUME>>4)
#define SNDRV_GF1_MAX_OFFSET	255
#define SNDRV_GF1_MAX_TDEPTH	90
#define SNDRV_GF1_MEM_BLOCK_16BIT	0x0001
#define SNDRV_GF1_MEM_OWNER_DRIVER	0x0001
#define SNDRV_GF1_MEM_OWNER_WAVE_SIMPLE	0x0002
#define SNDRV_GF1_MEM_OWNER_WAVE_GF1	0x0003
#define SNDRV_GF1_MEM_OWNER_WAVE_IWFFFF	0x0004
#define SNDRV_GF1_HANDLER_MIDI_OUT	0x00010000
#define SNDRV_GF1_HANDLER_MIDI_IN	0x00020000
#define SNDRV_GF1_HANDLER_TIMER1	0x00040000
#define SNDRV_GF1_HANDLER_TIMER2	0x00080000
#define SNDRV_GF1_HANDLER_VOICE		0x00100000
#define SNDRV_GF1_HANDLER_DMA_WRITE	0x00200000
#define SNDRV_GF1_HANDLER_DMA_READ	0x00400000
#define SNDRV_GF1_HANDLER_ALL		(0xffff0000&~SNDRV_GF1_HANDLER_VOICE)
#define SNDRV_GF1_DMA_TRIGGER		1
struct snd_gus_card;
struct snd_gf1_bank_info ;
struct snd_gf1_mem_block ;
struct snd_gf1_mem ;
struct snd_gf1_dma_block ;
struct snd_gus_port ;
struct snd_gus_voice;
#define SNDRV_GF1_VOICE_TYPE_PCM	0
#define SNDRV_GF1_VOICE_TYPE_SYNTH 	1
#define SNDRV_GF1_VOICE_TYPE_MIDI	2
#define SNDRV_GF1_VFLG_RUNNING		(1<<0)
#define SNDRV_GF1_VFLG_EFFECT_TIMER1	(1<<1)
#define SNDRV_GF1_VFLG_PAN		(1<<2)
enum snd_gus_volume_state ;
struct snd_gus_voice ;
struct snd_gf1 ;
struct snd_gus_card ;
static inline void snd_gf1_select_voice(struct snd_gus_card * gus, int voice)
static inline void snd_gf1_uart_cmd(struct snd_gus_card * gus, unsigned char b)
static inline unsigned char snd_gf1_uart_stat(struct snd_gus_card * gus)
static inline void snd_gf1_uart_put(struct snd_gus_card * gus, unsigned char b)
static inline unsigned char snd_gf1_uart_get(struct snd_gus_card * gus)
extern void snd_gf1_delay(struct snd_gus_card * gus);
extern void snd_gf1_ctrl_stop(struct snd_gus_card * gus, unsigned char reg);
extern void snd_gf1_write8(struct snd_gus_card * gus, unsigned char reg, unsigned char data);
extern unsigned char snd_gf1_look8(struct snd_gus_card * gus, unsigned char reg);
static inline unsigned char snd_gf1_read8(struct snd_gus_card * gus, unsigned char reg)
extern void snd_gf1_write16(struct snd_gus_card * gus, unsigned char reg, unsigned int data);
extern unsigned short snd_gf1_look16(struct snd_gus_card * gus, unsigned char reg);
static inline unsigned short snd_gf1_read16(struct snd_gus_card * gus, unsigned char reg)
extern void snd_gf1_adlib_write(struct snd_gus_card * gus, unsigned char reg, unsigned char data);
extern void snd_gf1_dram_addr(struct snd_gus_card * gus, unsigned int addr);
extern void snd_gf1_poke(struct snd_gus_card * gus, unsigned int addr, unsigned char data);
extern unsigned char snd_gf1_peek(struct snd_gus_card * gus, unsigned int addr);
extern void snd_gf1_write_addr(struct snd_gus_card * gus, unsigned char reg, unsigned int addr, short w_16bit);
extern unsigned int snd_gf1_read_addr(struct snd_gus_card * gus, unsigned char reg, short w_16bit);
extern void snd_gf1_i_ctrl_stop(struct snd_gus_card * gus, unsigned char reg);
extern void snd_gf1_i_write8(struct snd_gus_card * gus, unsigned char reg, unsigned char data);
extern unsigned char snd_gf1_i_look8(struct snd_gus_card * gus, unsigned char reg);
extern void snd_gf1_i_write16(struct snd_gus_card * gus, unsigned char reg, unsigned int data);
static inline unsigned char snd_gf1_i_read8(struct snd_gus_card * gus, unsigned char reg)
extern unsigned short snd_gf1_i_look16(struct snd_gus_card * gus, unsigned char reg);
static inline unsigned short snd_gf1_i_read16(struct snd_gus_card * gus, unsigned char reg)
extern void snd_gf1_select_active_voices(struct snd_gus_card * gus);
struct _SND_IW_LFO_PROGRAM ;
extern void snd_gf1_lfo_init(struct snd_gus_card * gus);
extern void snd_gf1_lfo_done(struct snd_gus_card * gus);
extern void snd_gf1_lfo_program(struct snd_gus_card * gus, int voice, int lfo_type, struct _SND_IW_LFO_PROGRAM *program);
extern void snd_gf1_lfo_enable(struct snd_gus_card * gus, int voice, int lfo_type);
extern void snd_gf1_lfo_disable(struct snd_gus_card * gus, int voice, int lfo_type);
extern void snd_gf1_lfo_change_freq(struct snd_gus_card * gus, int voice, int lfo_type, int freq);
extern void snd_gf1_lfo_change_depth(struct snd_gus_card * gus, int voice, int lfo_type, int depth);
extern void snd_gf1_lfo_setup(struct snd_gus_card * gus, int voice, int lfo_type, int freq, int current_depth, int depth, int sweep, int shape);
extern void snd_gf1_lfo_shutdown(struct snd_gus_card * gus, int voice, int lfo_type);
void snd_gf1_mem_lock(struct snd_gf1_mem * alloc, int xup);
int snd_gf1_mem_xfree(struct snd_gf1_mem * alloc, struct snd_gf1_mem_block * block);
struct snd_gf1_mem_block *snd_gf1_mem_alloc(struct snd_gf1_mem * alloc, int owner,
char *name, int size, int w_16,
int align, unsigned int *share_id);
int snd_gf1_mem_free(struct snd_gf1_mem * alloc, unsigned int address);
int snd_gf1_mem_free_owner(struct snd_gf1_mem * alloc, int owner);
int snd_gf1_mem_init(struct snd_gus_card * gus);
int snd_gf1_mem_done(struct snd_gus_card * gus);
int snd_gf1_mem_proc_init(struct snd_gus_card * gus);
int snd_gf1_dma_init(struct snd_gus_card * gus);
int snd_gf1_dma_done(struct snd_gus_card * gus);
int snd_gf1_dma_transfer_block(struct snd_gus_card * gus,
struct snd_gf1_dma_block * block,
int atomic,
int synth);
unsigned short snd_gf1_lvol_to_gvol_raw(unsigned int vol);
unsigned short snd_gf1_translate_freq(struct snd_gus_card * gus, unsigned int freq2);
void snd_gf1_set_default_handlers(struct snd_gus_card * gus, unsigned int what);
void snd_gf1_smart_stop_voice(struct snd_gus_card * gus, unsigned short voice);
void snd_gf1_stop_voice(struct snd_gus_card * gus, unsigned short voice);
void snd_gf1_stop_voices(struct snd_gus_card * gus, unsigned short v_min, unsigned short v_max);
struct snd_gus_voice *snd_gf1_alloc_voice(struct snd_gus_card * gus, int type, int client, int port);
void snd_gf1_free_voice(struct snd_gus_card * gus, struct snd_gus_voice *voice);
int snd_gf1_start(struct snd_gus_card * gus);
int snd_gf1_stop(struct snd_gus_card * gus);
int snd_gf1_new_mixer(struct snd_gus_card * gus);
int snd_gf1_pcm_new(struct snd_gus_card * gus, int pcm_dev, int control_index, struct snd_pcm ** rpcm);
extern void snd_gf1_print_voice_registers(struct snd_gus_card * gus);
int snd_gus_use_inc(struct snd_gus_card * gus);
void snd_gus_use_dec(struct snd_gus_card * gus);
int snd_gus_create(struct snd_card *card,
unsigned long port,
int irq, int dma1, int dma2,
int timer_dev,
int voices,
int pcm_channels,
int effect,
struct snd_gus_card ** rgus);
int snd_gus_initialize(struct snd_gus_card * gus);
irqreturn_t snd_gus_interrupt(int irq, void *dev_id);
void snd_gus_irq_profile_init(struct snd_gus_card *gus);
int snd_gf1_rawmidi_new(struct snd_gus_card * gus, int device, struct snd_rawmidi **rrawmidi);
int snd_gus_dram_write(struct snd_gus_card *gus, char __user *ptr,
unsigned int addr, unsigned int size);
int snd_gus_dram_read(struct snd_gus_card *gus, char __user *ptr,
unsigned int addr, unsigned int size, int rom);
