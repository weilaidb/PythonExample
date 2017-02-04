#define AVUTIL_DICT_H
#define AV_DICT_MATCH_CASE      1
#define AV_DICT_IGNORE_SUFFIX   2
#define AV_DICT_DONT_STRDUP_KEY 4
#define AV_DICT_DONT_STRDUP_VAL 8
#define AV_DICT_DONT_OVERWRITE 16
#define AV_DICT_APPEND         32
#define AV_DICT_MULTIKEY       64
typedef struct AVDictionaryEntry  AVDictionaryEntry;
typedef struct AVDictionary AVDictionary;
*av_dict_get;
av_dict_count;
av_dict_set;
av_dict_set_int;
av_dict_parse_string;
av_dict_copy;
av_dict_free;
av_dict_get_string;
