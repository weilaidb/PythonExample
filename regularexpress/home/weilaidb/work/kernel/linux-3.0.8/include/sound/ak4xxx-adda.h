#define __SOUND_AK4XXX_ADDA_H
#define AK4XXX_MAX_CHIPS	4
struct snd_akm4xxx;
struct snd_ak4xxx_ops ;
#define AK4XXX_IMAGE_SIZE	(AK4XXX_MAX_CHIPS * 16)
struct snd_akm4xxx_dac_channel ;
struct snd_akm4xxx_adc_channel ;
struct snd_akm4xxx ;
void snd_akm4xxx_write(struct snd_akm4xxx *ak, int chip, unsigned char reg,
unsigned char val);
void snd_akm4xxx_reset(struct snd_akm4xxx *ak, int state);
void snd_akm4xxx_init(struct snd_akm4xxx *ak);
int snd_akm4xxx_build_controls(struct snd_akm4xxx *ak);
#define snd_akm4xxx_get(ak,chip,reg) \
(ak)->images[(chip) * 16 + (reg)]
#define snd_akm4xxx_set(ak,chip,reg,val) \
((ak)->images[(chip) * 16 + (reg)] = (val))
#define snd_akm4xxx_get_vol(ak,chip,reg) \
(ak)->volumes[(chip) * 16 + (reg)]
#define snd_akm4xxx_set_vol(ak,chip,reg,val) \
((ak)->volumes[(chip) * 16 + (reg)] = (val))
