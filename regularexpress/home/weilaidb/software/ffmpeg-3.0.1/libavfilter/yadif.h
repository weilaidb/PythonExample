#define AVFILTER_YADIF_H
enum YADIFMode ;
enum YADIFParity ;
enum YADIFDeint ;
typedef struct YADIFContext  YADIFContext;
void ff_yadif_init_x86(YADIFContext *yadif);
