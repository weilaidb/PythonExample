#define AVCODEC_HAP_H
enum HapTextureFormat ;
enum HapCompressor ;
enum HapSectionType ;
typedef struct HapChunk  HapChunk;
typedef struct HapContext  HapContext;
int ff_hap_set_chunk_count(HapContext *ctx, int count, int first_in_frame);
av_cold void ff_hap_free_context(HapContext *ctx);
