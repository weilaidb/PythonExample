#define AVFORMAT_REPLAYGAIN_H
int ff_replaygain_export(AVStream *st, AVDictionary *metadata);
int ff_replaygain_export_raw(AVStream *st, int32_t tg, uint32_t tp,
int32_t ag, uint32_t ap);
