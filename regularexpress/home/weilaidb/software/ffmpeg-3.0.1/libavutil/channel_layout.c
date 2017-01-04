struct channel_name ;
static const struct channel_name channel_names[] = ;
static const char *get_channel_name(int channel_id)
static const struct  channel_layout_map[] = ;
static uint64_t get_channel_layout_single(const char *name, int name_len)
uint64_t av_get_channel_layout(const char *name)
void av_bprint_channel_layout(struct AVBPrint *bp,
int nb_channels, uint64_t channel_layout)
void av_get_channel_layout_string(char *buf, int buf_size,
int nb_channels, uint64_t channel_layout)
int av_get_channel_layout_nb_channels(uint64_t channel_layout)
int64_t av_get_default_channel_layout(int nb_channels)
int av_get_channel_layout_channel_index(uint64_t channel_layout,
uint64_t channel)
const char *av_get_channel_name(uint64_t channel)
const char *av_get_channel_description(uint64_t channel)
uint64_t av_channel_layout_extract_channel(uint64_t channel_layout, int index)
int av_get_standard_channel_layout(unsigned index, uint64_t *layout,
const char **name)
