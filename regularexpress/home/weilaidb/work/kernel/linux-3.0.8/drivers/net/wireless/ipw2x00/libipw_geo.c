int libipw_is_valid_channel(struct libipw_device *ieee, u8 channel)
int libipw_channel_to_index(struct libipw_device *ieee, u8 channel)
u32 libipw_channel_to_freq(struct libipw_device * ieee, u8 channel)
u8 libipw_freq_to_channel(struct libipw_device * ieee, u32 freq)
int libipw_set_geo(struct libipw_device *ieee,
const struct libipw_geo *geo)
const struct libipw_geo *libipw_get_geo(struct libipw_device *ieee)
u8 libipw_get_channel_flags(struct libipw_device * ieee, u8 channel)
static const struct libipw_channel bad_channel = ;
const struct libipw_channel *libipw_get_channel(struct libipw_device
*ieee, u8 channel)
EXPORT_SYMBOL(libipw_get_channel);
EXPORT_SYMBOL(libipw_get_channel_flags);
EXPORT_SYMBOL(libipw_is_valid_channel);
EXPORT_SYMBOL(libipw_freq_to_channel);
EXPORT_SYMBOL(libipw_channel_to_freq);
EXPORT_SYMBOL(libipw_channel_to_index);
EXPORT_SYMBOL(libipw_set_geo);
EXPORT_SYMBOL(libipw_get_geo);
