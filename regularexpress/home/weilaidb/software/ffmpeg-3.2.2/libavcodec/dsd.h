#define AVCODEC_DSD_H
#define HTAPS   48
#define FIFOSIZE 16
#define FIFOMASK (FIFOSIZE - 1)
#if FIFOSIZE * 8 < HTAPS * 2
#error
typedef struct DSDContext  DSDContext;
ff_init_dsd_data;
ff_dsd2pcm_translate;
