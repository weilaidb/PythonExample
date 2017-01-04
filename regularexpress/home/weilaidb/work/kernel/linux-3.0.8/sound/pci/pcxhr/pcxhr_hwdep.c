#if defined(CONFIG_FW_LOADER) || defined(CONFIG_FW_LOADER_MODULE)
#if !defined(CONFIG_USE_PCXHRLOADER) && !defined(CONFIG_SND_PCXHR)
#define SND_PCXHR_FW_LOADER
static int pcxhr_sub_init(struct pcxhr_mgr *mgr);
static int pcxhr_init_board(struct pcxhr_mgr *mgr)
static int pcxhr_sub_init(struct pcxhr_mgr *mgr)
void pcxhr_reset_board(struct pcxhr_mgr *mgr)
static int pcxhr_dsp_allocate_pipe(struct pcxhr_mgr *mgr,
struct pcxhr_pipe *pipe,
int is_capture, int pin)
static int pcxhr_config_pipes(struct pcxhr_mgr *mgr)
static int pcxhr_start_pipes(struct pcxhr_mgr *mgr)
static int pcxhr_dsp_load(struct pcxhr_mgr *mgr, int index,
const struct firmware *dsp)
int pcxhr_setup_firmware(struct pcxhr_mgr *mgr)
MODULE_FIRMWARE("pcxhr/xlxint.dat");
MODULE_FIRMWARE("pcxhr/xlxc882hr.dat");
MODULE_FIRMWARE("pcxhr/xlxc882e.dat");
MODULE_FIRMWARE("pcxhr/dspe882.e56");
MODULE_FIRMWARE("pcxhr/dspb882hr.b56");
MODULE_FIRMWARE("pcxhr/dspb882e.b56");
MODULE_FIRMWARE("pcxhr/dspd882.d56");
MODULE_FIRMWARE("pcxhr/xlxc1222hr.dat");
MODULE_FIRMWARE("pcxhr/xlxc1222e.dat");
MODULE_FIRMWARE("pcxhr/dspb1222hr.b56");
MODULE_FIRMWARE("pcxhr/dspb1222e.b56");
MODULE_FIRMWARE("pcxhr/dspd1222.d56");
MODULE_FIRMWARE("pcxhr/xlxc222.dat");
MODULE_FIRMWARE("pcxhr/xlxc924.dat");
MODULE_FIRMWARE("pcxhr/dspe924.e56");
MODULE_FIRMWARE("pcxhr/dspb924.b56");
MODULE_FIRMWARE("pcxhr/dspd222.d56");
#define PCXHR_HWDEP_ID       "pcxhr loader"
static int pcxhr_hwdep_dsp_status(struct snd_hwdep *hw,
struct snd_hwdep_dsp_status *info)
static int pcxhr_hwdep_dsp_load(struct snd_hwdep *hw,
struct snd_hwdep_dsp_image *dsp)
int pcxhr_setup_firmware(struct pcxhr_mgr *mgr)
