#define __CS46XX_DSP_SCB_TYPES_H__
#if   defined(__LITTLE_ENDIAN)
#define ___DSP_DUAL_16BIT_ALLOC(a,b) u16 a; u16 b;
#elif defined(__BIG_ENDIAN)
#define ___DSP_DUAL_16BIT_ALLOC(a,b) u16 b; u16 a;
#error Not __LITTLE_ENDIAN and not __BIG_ENDIAN, then what ???
struct dsp_basic_dma_req ;
struct dsp_scatter_gather_ext ;
struct dsp_volume_control ;
struct dsp_generic_scb ;
struct dsp_spos_control_block ;
struct dsp_mix2_ostream_spb
;
struct dsp_timing_master_scb ;
struct dsp_codec_output_scb ;
struct dsp_codec_input_scb ;
struct dsp_pcm_serial_input_scb ;
struct dsp_src_task_scb ;
struct dsp_decimate_by_pow2_scb ;
struct dsp_vari_decimate_scb ;
struct dsp_mix2_ostream_scb ;
struct dsp_mix_only_scb ;
struct dsp_async_codec_input_scb ;
struct dsp_spdifiscb ;
struct dsp_spdifoscb ;
struct dsp_asynch_fg_rx_scb ;
struct dsp_asynch_fg_tx_scb ;
struct dsp_output_snoop_scb ;
struct dsp_spio_write_scb ;
struct dsp_magic_snoop_task ;
struct dsp_filter_scb ;
