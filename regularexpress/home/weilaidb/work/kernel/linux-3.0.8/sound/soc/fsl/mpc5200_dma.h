#define __SOUND_SOC_FSL_MPC5200_DMA_H__
#define PSC_STREAM_NAME_LEN 32
struct psc_dma_stream ;
struct psc_dma ;
static inline struct psc_dma_stream *
to_psc_dma_stream(struct snd_pcm_substream *substream, struct psc_dma *psc_dma)
