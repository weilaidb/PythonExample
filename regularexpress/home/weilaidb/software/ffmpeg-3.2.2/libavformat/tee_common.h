#define AVFORMAT_TEE_COMMON_H
int ff_tee_parse_slave_options(void *log, char *slave,
AVDictionary **options, char **filename);
