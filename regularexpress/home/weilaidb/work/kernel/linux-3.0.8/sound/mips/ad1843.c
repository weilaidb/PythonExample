struct ad1843_bitfield ;
static const struct ad1843_bitfield
ad1843_PDNO   = ,
ad1843_INIT   = ,
ad1843_RIG    = ,
ad1843_RMGE   = ,
ad1843_RSS    = ,
ad1843_LIG    = ,
ad1843_LMGE   = ,
ad1843_LSS    = ,
ad1843_RD2M   = ,
ad1843_RD2MM  = ,
ad1843_LD2M   = ,
ad1843_LD2MM  = ,
ad1843_RX1M   = ,
ad1843_RX1MM  = ,
ad1843_LX1M   = ,
ad1843_LX1MM  = ,
ad1843_RX2M   = ,
ad1843_RX2MM  = ,
ad1843_LX2M   = ,
ad1843_LX2MM  = ,
ad1843_RMCM   = ,
ad1843_RMCMM  = ,
ad1843_LMCM   = ,
ad1843_LMCMM  = ,
ad1843_HPOS   = ,
ad1843_HPOM   = ,
ad1843_MPOM   = ,
ad1843_RDA1G  = ,
ad1843_RDA1GM = ,
ad1843_LDA1G  = ,
ad1843_LDA1GM = ,
ad1843_RDA2G  = ,
ad1843_RDA2GM = ,
ad1843_LDA2G  = ,
ad1843_LDA2GM = ,
ad1843_RDA1AM = ,
ad1843_LDA1AM = ,
ad1843_RDA2AM = ,
ad1843_LDA2AM = ,
ad1843_ADLC   = ,
ad1843_ADRC   = ,
ad1843_DA1C   = ,
ad1843_DA2C   = ,
ad1843_C1C    = ,
ad1843_C2C    = ,
ad1843_C3C    = ,
ad1843_DAADL  = ,
ad1843_DAADR  = ,
ad1843_DAMIX  = ,
ad1843_DRSFLT = ,
ad1843_ADLF   = ,
ad1843_ADRF   = ,
ad1843_ADTLK  = ,
ad1843_SCF    = ,
ad1843_DA1F   = ,
ad1843_DA2F   = ,
ad1843_DA1SM  = ,
ad1843_DA2SM  = ,
ad1843_ADLEN  = ,
ad1843_ADREN  = ,
ad1843_AAMEN  = ,
ad1843_ANAEN  = ,
ad1843_DA1EN  = ,
ad1843_DA2EN  = ,
ad1843_DDMEN  = ,
ad1843_C1EN   = ,
ad1843_C2EN   = ,
ad1843_C3EN   = ,
ad1843_PDNI   = ;
struct ad1843_gain ;
static const struct ad1843_gain ad1843_gain_RECLEV = ;
static const struct ad1843_gain ad1843_gain_LINE = ;
static const struct ad1843_gain ad1843_gain_LINE_2 = ;
static const struct ad1843_gain ad1843_gain_MIC = ;
static const struct ad1843_gain ad1843_gain_PCM_0 = ;
static const struct ad1843_gain ad1843_gain_PCM_1 = ;
static const struct ad1843_gain *ad1843_gain[AD1843_GAIN_SIZE] =
;
static int ad1843_read_bits(struct snd_ad1843 *ad1843,
const struct ad1843_bitfield *field)
static int ad1843_write_bits(struct snd_ad1843 *ad1843,
const struct ad1843_bitfield *field,
int newval)
static void ad1843_read_multi(struct snd_ad1843 *ad1843, int argcount, ...)
static void ad1843_write_multi(struct snd_ad1843 *ad1843, int argcount, ...)
int ad1843_get_gain_max(struct snd_ad1843 *ad1843, int id)
int ad1843_get_gain(struct snd_ad1843 *ad1843, int id)
int ad1843_set_gain(struct snd_ad1843 *ad1843, int id, int newval)
int ad1843_get_recsrc(struct snd_ad1843 *ad1843)
int ad1843_set_recsrc(struct snd_ad1843 *ad1843, int newsrc)
void ad1843_setup_dac(struct snd_ad1843 *ad1843,
unsigned int id,
unsigned int framerate,
snd_pcm_format_t fmt,
unsigned int channels)
void ad1843_shutdown_dac(struct snd_ad1843 *ad1843, unsigned int id)
void ad1843_setup_adc(struct snd_ad1843 *ad1843,
unsigned int framerate,
snd_pcm_format_t fmt,
unsigned int channels)
void ad1843_shutdown_adc(struct snd_ad1843 *ad1843)
int ad1843_init(struct snd_ad1843 *ad1843)
