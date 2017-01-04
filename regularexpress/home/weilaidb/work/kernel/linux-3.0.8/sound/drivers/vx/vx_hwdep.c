MODULE_FIRMWARE("vx/bx_1_vxp.b56");
MODULE_FIRMWARE("vx/bx_1_vp4.b56");
MODULE_FIRMWARE("vx/x1_1_vx2.xlx");
MODULE_FIRMWARE("vx/x1_2_v22.xlx");
MODULE_FIRMWARE("vx/x1_1_vxp.xlx");
MODULE_FIRMWARE("vx/x1_1_vp4.xlx");
MODULE_FIRMWARE("vx/bd56002.boot");
MODULE_FIRMWARE("vx/bd563v2.boot");
MODULE_FIRMWARE("vx/bd563s3.boot");
MODULE_FIRMWARE("vx/l_1_vx2.d56");
MODULE_FIRMWARE("vx/l_1_v22.d56");
MODULE_FIRMWARE("vx/l_1_vxp.d56");
MODULE_FIRMWARE("vx/l_1_vp4.d56");
int snd_vx_setup_firmware(struct vx_core *chip)
void snd_vx_free_firmware(struct vx_core *chip)
static int vx_hwdep_dsp_status(struct snd_hwdep *hw,
struct snd_hwdep_dsp_status *info)
static void free_fw(const struct firmware *fw)
static int vx_hwdep_dsp_load(struct snd_hwdep *hw,
struct snd_hwdep_dsp_image *dsp)
int snd_vx_setup_firmware(struct vx_core *chip)
void snd_vx_free_firmware(struct vx_core *chip)
EXPORT_SYMBOL(snd_vx_setup_firmware);
EXPORT_SYMBOL(snd_vx_free_firmware);
