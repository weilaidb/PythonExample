#define AVFILTER_TINTERLACE_H
enum TInterlaceMode ;
typedef struct  TInterlaceContext;
void ff_tinterlace_init_x86(TInterlaceContext *interlace);
