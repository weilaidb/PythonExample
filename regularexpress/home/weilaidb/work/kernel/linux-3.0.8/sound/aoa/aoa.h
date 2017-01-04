#define __AOA_H
#define MAX_CODEC_NAME_LEN	32
struct aoa_codec ;
extern int
aoa_codec_register(struct aoa_codec *codec);
extern void
aoa_codec_unregister(struct aoa_codec *codec);
#define MAX_LAYOUT_NAME_LEN	32
struct aoa_fabric ;
extern int
aoa_fabric_register(struct aoa_fabric *fabric, struct device *dev);
extern void
aoa_fabric_unregister(struct aoa_fabric *fabric);
extern void
aoa_fabric_unlink_codec(struct aoa_codec *codec);
struct aoa_card ;
extern int aoa_snd_device_new(snd_device_type_t type,
void * device_data, struct snd_device_ops * ops);
extern struct snd_card *aoa_get_card(void);
extern int aoa_snd_ctl_add(struct snd_kcontrol* control);
extern struct gpio_methods *pmf_gpio_methods;
extern struct gpio_methods *ftr_gpio_methods;
