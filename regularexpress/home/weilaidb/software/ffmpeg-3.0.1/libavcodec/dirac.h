#define AVCODEC_DIRAC_H
#define MAX_DWT_LEVELS 5
enum DiracParseCodes ;
typedef struct DiracVersionInfo  DiracVersionInfo;
typedef struct AVDiracSeqHeader  AVDiracSeqHeader;
int av_dirac_parse_sequence_header(AVDiracSeqHeader **dsh,
const uint8_t *buf, size_t buf_size,
void *log_ctx);
