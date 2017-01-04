#define DATA_S sample_silence
#define SIZE_S (&sizeof_silence)
#define DATA_GA sample_german_all
#define SIZE_GA (&sizeof_german_all)
#define DATA_GO sample_german_old
#define SIZE_GO (&sizeof_german_old)
#define DATA_DT sample_american_dialtone
#define SIZE_DT (&sizeof_american_dialtone)
#define DATA_RI sample_american_ringing
#define SIZE_RI (&sizeof_american_ringing)
#define DATA_BU sample_american_busy
#define SIZE_BU (&sizeof_american_busy)
#define DATA_S1 sample_special1
#define SIZE_S1 (&sizeof_special1)
#define DATA_S2 sample_special2
#define SIZE_S2 (&sizeof_special2)
#define DATA_S3 sample_special3
#define SIZE_S3 (&sizeof_special3)
static u8 sample_german_all[] = ;
static u32 sizeof_german_all = sizeof(sample_german_all);
static u8 sample_german_old[] = ;
static u32 sizeof_german_old = sizeof(sample_german_old);
static u8 sample_american_dialtone[] = ;
static u32 sizeof_american_dialtone = sizeof(sample_american_dialtone);
static u8 sample_american_ringing[] = ;
static u32 sizeof_american_ringing = sizeof(sample_american_ringing);
static u8 sample_american_busy[] = ;
static u32 sizeof_american_busy = sizeof(sample_american_busy);
static u8 sample_special1[] = ;
static u32 sizeof_special1 = sizeof(sample_special1);
static u8 sample_special2[] = ;
static u32 sizeof_special2 = sizeof(sample_special2);
static u8 sample_special3[] = ;
static u32 sizeof_special3 = sizeof(sample_special3);
static u8 sample_silence[] = ;
static u32 sizeof_silence = sizeof(sample_silence);
struct tones_samples ;
static struct
tones_samples samples[] = ;
void
dsp_audio_generate_ulaw_samples(void)
static struct pattern  pattern[] = ;
void dsp_tone_copy(struct dsp *dsp, u8 *data, int len)
static void
dsp_tone_hw_message(struct dsp *dsp, u8 *sample, int len)
void
dsp_tone_timeout(void *arg)
int
dsp_tone(struct dsp *dsp, int tone)
