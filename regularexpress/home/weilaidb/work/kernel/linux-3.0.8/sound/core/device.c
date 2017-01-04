int snd_device_new(struct snd_card *card, snd_device_type_t type,
void *device_data, struct snd_device_ops *ops)
EXPORT_SYMBOL(snd_device_new);
int snd_device_free(struct snd_card *card, void *device_data)
EXPORT_SYMBOL(snd_device_free);
int snd_device_disconnect(struct snd_card *card, void *device_data)
int snd_device_register(struct snd_card *card, void *device_data)
EXPORT_SYMBOL(snd_device_register);
int snd_device_register_all(struct snd_card *card)
int snd_device_disconnect_all(struct snd_card *card)
int snd_device_free_all(struct snd_card *card, snd_device_cmd_t cmd)
