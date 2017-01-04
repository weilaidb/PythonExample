#define AVFILTER_BWDIF_H
enum BWDIFMode ;
enum BWDIFParity ;
enum BWDIFDeint ;
typedef struct BWDIFContext  BWDIFContext;
void ff_bwdif_init_x86(BWDIFContext *bwdif);
