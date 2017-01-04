#define AVCODEC_AVDCT_H
typedef struct AVDCT  AVDCT;
AVDCT *avcodec_dct_alloc(void);
int avcodec_dct_init(AVDCT *);
const AVClass *avcodec_dct_get_class(void);
