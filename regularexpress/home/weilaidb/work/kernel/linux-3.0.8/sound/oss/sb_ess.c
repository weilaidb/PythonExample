#undef FKS_LOGGING
#undef FKS_TEST
#define ESSTYPE_LIKE20	-1
#define ESSTYPE_DETECT	0
#define SUBMDL_ES1788	0x10
#define SUBMDL_ES1868	0x11
#define SUBMDL_ES1869	0x12
#define SUBMDL_ES1878	0x13
#define SUBMDL_ES1879	0x16
#define SUBMDL_ES1887	0x14
#define SUBMDL_ES1888	0x15
#define SB_CAP_ES18XX_RATE 0x100
#define ES1688_CLOCK1 795444
#define ES1688_CLOCK2 397722
#define ES18XX_CLOCK1 793800
#define ES18XX_CLOCK2 768000
static void ess_show_mixerregs (sb_devc *devc);
static int ess_read (sb_devc * devc, unsigned char reg);
static int ess_write (sb_devc * devc, unsigned char reg, unsigned char data);
static void ess_chgmixer
(sb_devc * devc, unsigned int reg, unsigned int mask, unsigned int val);
struct ess_command ;
static struct ess_command ess_i08m[] =
;
static struct ess_command ess_i16m[] =
;
static struct ess_command ess_i08s[] =
;
static struct ess_command ess_i16s[] =
;
static struct ess_command *ess_inp_cmds[] =
;
static struct ess_command ess_o08m[] =
;
static struct ess_command ess_o16m[] =
;
static struct ess_command ess_o08s[] =
;
static struct ess_command ess_o16s[] =
;
static struct ess_command *ess_out_cmds[] =
;
static void ess_exec_commands
(sb_devc *devc, struct ess_command *cmdtab[])
static void ess_change
(sb_devc *devc, unsigned int reg, unsigned int mask, unsigned int val)
static void ess_set_output_parms
(int dev, unsigned long buf, int nr_bytes, int intrflag)
static void ess_set_input_parms
(int dev, unsigned long buf, int count, int intrflag)
static int ess_calc_div (int clock, int revert, int *speedp, int *diffp)
static int ess_calc_best_speed
(int clock1, int rev1, int clock2, int rev2, int *divp, int *speedp)
static void ess_common_speed (sb_devc *devc, int *speedp, int *divp)
static void ess_speed (sb_devc *devc, int audionum)
static int ess_audio_prepare_for_input(int dev, int bsize, int bcount)
static int ess_audio_prepare_for_output_audio1 (int dev, int bsize, int bcount)
static int ess_audio_prepare_for_output_audio2 (int dev, int bsize, int bcount)
static int ess_audio_prepare_for_output(int dev, int bsize, int bcount)
static void ess_audio_halt_xfer(int dev)
static void ess_audio_start_input
(int dev, unsigned long buf, int nr_bytes, int intrflag)
static void ess_audio_output_block_audio1
(int dev, unsigned long buf, int nr_bytes, int intrflag)
static void ess_audio_output_block_audio2
(int dev, unsigned long buf, int nr_bytes, int intrflag)
static void ess_audio_output_block
(int dev, unsigned long buf, int nr_bytes, int intrflag)
static void ess_audio_trigger(int dev, int bits)
static int ess_audio_set_speed(int dev, int speed)
static unsigned int ess_audio_set_bits(int dev, unsigned int bits)
static short ess_audio_set_channels(int dev, short channels)
static struct audio_driver ess_audio_driver =
;
struct audio_driver *ess_audio_init
(sb_devc *devc, int *audio_flags, int *format_mask)
static void ess_handle_channel
(char *channel, int dev, int intr_active, unsigned char flag, int irq_mode)
void ess_intr (sb_devc *devc)
static void ess_extended (sb_devc * devc)
static int ess_write (sb_devc * devc, unsigned char reg, unsigned char data)
static int ess_read (sb_devc * devc, unsigned char reg)
int ess_dsp_reset(sb_devc * devc)
static int ess_irq_bits (int irq)
static int ess_common_set_irq_hw (sb_devc * devc)
static void ess_es1887_set_irq_hw (sb_devc * devc)
static int ess_set_irq_hw (sb_devc * devc)
static void FKS_test (sb_devc * devc)
;
static unsigned int ess_identify (sb_devc * devc)
static int ess_probe (sb_devc * devc, int reg, int xorval)
int ess_init(sb_devc * devc, struct address_info *hw_config)
static int ess_set_dma_hw(sb_devc * devc)
int ess_dsp_init (sb_devc *devc, struct address_info *hw_config)
#define ES688_RECORDING_DEVICES	\
( SOUND_MASK_LINE	| SOUND_MASK_MIC	| SOUND_MASK_CD		)
#define ES688_MIXER_DEVICES		\
( SOUND_MASK_SYNTH	| SOUND_MASK_PCM	| SOUND_MASK_LINE	\
| SOUND_MASK_MIC	| SOUND_MASK_CD		| SOUND_MASK_VOLUME	\
| SOUND_MASK_LINE2	| SOUND_MASK_SPEAKER					)
#define ES1688_RECORDING_DEVICES	\
( ES688_RECORDING_DEVICES					)
#define ES1688_MIXER_DEVICES		\
( ES688_MIXER_DEVICES | SOUND_MASK_RECLEV	)
#define ES1887_RECORDING_DEVICES	\
( ES1688_RECORDING_DEVICES | SOUND_MASK_LINE2 | SOUND_MASK_SYNTH)
#define ES1887_MIXER_DEVICES		\
( ES1688_MIXER_DEVICES											)
#define ES_REC_MIXER_RECBASE	(SOUND_MIXER_LINE3 + 1)
#define ES_REC_MIXER_RECDIFF	(ES_REC_MIXER_RECBASE - SOUND_MIXER_SYNTH)
#define ES_REC_MIXER_RECSYNTH	(SOUND_MIXER_SYNTH	 + ES_REC_MIXER_RECDIFF)
#define ES_REC_MIXER_RECPCM		(SOUND_MIXER_PCM	 + ES_REC_MIXER_RECDIFF)
#define ES_REC_MIXER_RECSPEAKER	(SOUND_MIXER_SPEAKER + ES_REC_MIXER_RECDIFF)
#define ES_REC_MIXER_RECLINE	(SOUND_MIXER_LINE	 + ES_REC_MIXER_RECDIFF)
#define ES_REC_MIXER_RECMIC		(SOUND_MIXER_MIC	 + ES_REC_MIXER_RECDIFF)
#define ES_REC_MIXER_RECCD		(SOUND_MIXER_CD		 + ES_REC_MIXER_RECDIFF)
#define ES_REC_MIXER_RECIMIX	(SOUND_MIXER_IMIX	 + ES_REC_MIXER_RECDIFF)
#define ES_REC_MIXER_RECALTPCM	(SOUND_MIXER_ALTPCM	 + ES_REC_MIXER_RECDIFF)
#define ES_REC_MIXER_RECRECLEV	(SOUND_MIXER_RECLEV	 + ES_REC_MIXER_RECDIFF)
#define ES_REC_MIXER_RECIGAIN	(SOUND_MIXER_IGAIN	 + ES_REC_MIXER_RECDIFF)
#define ES_REC_MIXER_RECOGAIN	(SOUND_MIXER_OGAIN	 + ES_REC_MIXER_RECDIFF)
#define ES_REC_MIXER_RECLINE1	(SOUND_MIXER_LINE1	 + ES_REC_MIXER_RECDIFF)
#define ES_REC_MIXER_RECLINE2	(SOUND_MIXER_LINE2	 + ES_REC_MIXER_RECDIFF)
#define ES_REC_MIXER_RECLINE3	(SOUND_MIXER_LINE3	 + ES_REC_MIXER_RECDIFF)
static mixer_tab es688_mix = ;
static mixer_tab es1688_mix = ;
static mixer_tab es1688later_mix = ;
static mixer_tab es_rec_mix = ;
static mixer_tab es1887_mix = ;
static int ess_has_rec_mixer (int submodel)
;
static int ess_mixer_mon_regs[]
= ;
static void ess_show_mixerregs (sb_devc *devc)
void ess_setmixer (sb_devc * devc, unsigned int port, unsigned int value)
unsigned int ess_getmixer (sb_devc * devc, unsigned int port)
static void ess_chgmixer
(sb_devc * devc, unsigned int reg, unsigned int mask, unsigned int val)
void ess_mixer_init (sb_devc * devc)
int ess_mixer_set(sb_devc *devc, int dev, int left, int right)
void ess_mixer_reload (sb_devc *devc, int dev)
static int es_rec_set_recmask(sb_devc * devc, int mask)
int ess_set_recmask(sb_devc * devc, int *mask)
int ess_mixer_reset (sb_devc * devc)
int ess_midi_init(sb_devc * devc, struct address_info *hw_config)
