static int mixart_wait_nice_for_register_value(struct mixart_mgr *mgr,
u32 offset, int is_egal,
u32 value, unsigned long timeout)
struct snd_mixart_elf32_ehdr ;
struct snd_mixart_elf32_phdr ;
static int mixart_load_elf(struct mixart_mgr *mgr, const struct firmware *dsp )
#define MIXART_FIRST_ANA_AUDIO_ID       0
#define MIXART_FIRST_DIG_AUDIO_ID       8
static int mixart_enum_connectors(struct mixart_mgr *mgr)
static int mixart_enum_physio(struct mixart_mgr *mgr)
static int mixart_first_init(struct mixart_mgr *mgr)
#define MIXART_MOTHERBOARD_XLX_BASE_ADDRESS   0x00600000
static int mixart_dsp_load(struct mixart_mgr* mgr, int index, const struct firmware *dsp)
#if defined(CONFIG_FW_LOADER) || defined(CONFIG_FW_LOADER_MODULE)
#if !defined(CONFIG_USE_MIXARTLOADER) && !defined(CONFIG_SND_MIXART)
#define SND_MIXART_FW_LOADER
int snd_mixart_setup_firmware(struct mixart_mgr *mgr)
MODULE_FIRMWARE("mixart/miXart8.xlx");
MODULE_FIRMWARE("mixart/miXart8.elf");
MODULE_FIRMWARE("mixart/miXart8AES.xlx");
#define SND_MIXART_HWDEP_ID       "miXart Loader"
static int mixart_hwdep_dsp_status(struct snd_hwdep *hw,
struct snd_hwdep_dsp_status *info)
static int mixart_hwdep_dsp_load(struct snd_hwdep *hw,
struct snd_hwdep_dsp_image *dsp)
int snd_mixart_setup_firmware(struct mixart_mgr *mgr)
