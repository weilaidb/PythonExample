#define AVCODEC_LIBUTVIDEO_H
#if !defined(UTVF_NFCC_BGR_BU)
#define UTVF_NFCC_BGR_BU UTVF_RGB24_WIN
#if !defined(UTVF_NFCC_BGRA_BU)
#define UTVF_NFCC_BGRA_BU UTVF_RGB32_WIN
#if defined(UTVF_HDYC)
#define UTV_BT709
typedef struct  UtVideoExtra;
typedef struct  UtVideoContext;
