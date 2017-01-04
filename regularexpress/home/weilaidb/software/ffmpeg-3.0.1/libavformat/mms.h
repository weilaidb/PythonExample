#define AVFORMAT_MMS_H
typedef struct MMSStream MMSStream;
typedef struct MMSContext  MMSContext;
int ff_mms_asf_header_parser(MMSContext * mms);
int ff_mms_read_data(MMSContext *mms, uint8_t *buf, const int size);
int ff_mms_read_header(MMSContext * mms, uint8_t * buf, const int size);
