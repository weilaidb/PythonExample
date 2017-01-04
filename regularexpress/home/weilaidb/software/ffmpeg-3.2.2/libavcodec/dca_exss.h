#define AVCODEC_DCA_EXSS_H
typedef struct DCAExssAsset  DCAExssAsset;
typedef struct DCAExssParser  DCAExssParser;
int ff_dca_exss_parse(DCAExssParser *s, const uint8_t *data, int size);
