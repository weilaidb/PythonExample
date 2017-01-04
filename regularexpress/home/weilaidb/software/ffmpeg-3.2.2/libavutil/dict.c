struct AVDictionary ;
int av_dict_count(const AVDictionary *m)
AVDictionaryEntry *av_dict_get(const AVDictionary *m, const char *key,
const AVDictionaryEntry *prev, int flags)
int av_dict_set(AVDictionary **pm, const char *key, const char *value,
int flags)
int av_dict_set_int(AVDictionary **pm, const char *key, int64_t value,
int flags)
static int parse_key_value_pair(AVDictionary **pm, const char **buf,
const char *key_val_sep, const char *pairs_sep,
int flags)
int av_dict_parse_string(AVDictionary **pm, const char *str,
const char *key_val_sep, const char *pairs_sep,
int flags)
void av_dict_free(AVDictionary **pm)
int av_dict_copy(AVDictionary **dst, const AVDictionary *src, int flags)
int av_dict_get_string(const AVDictionary *m, char **buffer,
const char key_val_sep, const char pairs_sep)
int avpriv_dict_set_timestamp(AVDictionary **dict, const char *key, int64_t timestamp)
