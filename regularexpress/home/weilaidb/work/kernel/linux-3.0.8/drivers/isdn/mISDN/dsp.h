#define DEBUG_DSP_CTRL		0x0001
#define DEBUG_DSP_CORE		0x0002
#define DEBUG_DSP_DTMF		0x0004
#define DEBUG_DSP_CMX		0x0010
#define DEBUG_DSP_TONE		0x0020
#define DEBUG_DSP_BLOWFISH	0x0040
#define DEBUG_DSP_DELAY		0x0100
#define DEBUG_DSP_CLOCK		0x0200
#define DEBUG_DSP_DTMFCOEFF	0x8000
#define DSP_OPT_ULAW		(1<<0)
#define DSP_OPT_NOHARDWARE	(1<<1)
extern int dsp_options;
extern int dsp_debug;
extern int dsp_poll;
extern int dsp_tics;
extern spinlock_t dsp_lock;
extern struct work_struct dsp_workq;
extern u32 dsp_poll_diff;
extern s32 dsp_audio_alaw_to_s32[256];
extern s32 dsp_audio_ulaw_to_s32[256];
extern s32 *dsp_audio_law_to_s32;
extern u8 dsp_audio_s16_to_law[65536];
extern u8 dsp_audio_alaw_to_ulaw[256];
extern u8 dsp_audio_mix_law[65536];
extern u8 dsp_audio_seven2law[128];
extern u8 dsp_audio_law2seven[256];
extern void dsp_audio_generate_law_tables(void);
extern void dsp_audio_generate_s2law_table(void);
extern void dsp_audio_generate_seven(void);
extern void dsp_audio_generate_mix_table(void);
extern void dsp_audio_generate_ulaw_samples(void);
extern void dsp_audio_generate_volume_changes(void);
extern u8 dsp_silence;
#define MAX_POLL	256
#define CMX_BUFF_SIZE	0x8000
#define CMX_BUFF_HALF	0x4000
#define CMX_BUFF_MASK	0x7fff
#define MAX_SECONDS_JITTER_CHECK 5
extern struct timer_list dsp_spl_tl;
extern u32 dsp_spl_jiffies;
struct dsp;
struct dsp_conf_member ;
struct dsp_conf ;
#define DSP_DTMF_NPOINTS 102
#define ECHOCAN_BUFF_SIZE 0x400
#define ECHOCAN_BUFF_MASK 0x3ff
struct dsp_dtmf ;
struct dsp_pipeline ;
struct dsp_tone ;
struct dsp_echo ;
struct dsp ;
extern void dsp_change_volume(struct sk_buff *skb, int volume);
extern struct list_head dsp_ilist;
extern struct list_head conf_ilist;
extern void dsp_cmx_debug(struct dsp *dsp);
extern void dsp_cmx_hardware(struct dsp_conf *conf, struct dsp *dsp);
extern int dsp_cmx_conf(struct dsp *dsp, u32 conf_id);
extern void dsp_cmx_receive(struct dsp *dsp, struct sk_buff *skb);
extern void dsp_cmx_hdlc(struct dsp *dsp, struct sk_buff *skb);
extern void dsp_cmx_send(void *arg);
extern void dsp_cmx_transmit(struct dsp *dsp, struct sk_buff *skb);
extern int dsp_cmx_del_conf_member(struct dsp *dsp);
extern int dsp_cmx_del_conf(struct dsp_conf *conf);
extern void dsp_dtmf_goertzel_init(struct dsp *dsp);
extern void dsp_dtmf_hardware(struct dsp *dsp);
extern u8 *dsp_dtmf_goertzel_decode(struct dsp *dsp, u8 *data, int len,
int fmt);
extern int dsp_tone(struct dsp *dsp, int tone);
extern void dsp_tone_copy(struct dsp *dsp, u8 *data, int len);
extern void dsp_tone_timeout(void *arg);
extern void dsp_bf_encrypt(struct dsp *dsp, u8 *data, int len);
extern void dsp_bf_decrypt(struct dsp *dsp, u8 *data, int len);
extern int dsp_bf_init(struct dsp *dsp, const u8 *key, unsigned int keylen);
extern void dsp_bf_cleanup(struct dsp *dsp);
extern int  dsp_pipeline_module_init(void);
extern void dsp_pipeline_module_exit(void);
extern int  dsp_pipeline_init(struct dsp_pipeline *pipeline);
extern void dsp_pipeline_destroy(struct dsp_pipeline *pipeline);
extern int  dsp_pipeline_build(struct dsp_pipeline *pipeline, const char *cfg);
extern void dsp_pipeline_process_tx(struct dsp_pipeline *pipeline, u8 *data,
int len);
extern void dsp_pipeline_process_rx(struct dsp_pipeline *pipeline, u8 *data,
int len, unsigned int txlen);
