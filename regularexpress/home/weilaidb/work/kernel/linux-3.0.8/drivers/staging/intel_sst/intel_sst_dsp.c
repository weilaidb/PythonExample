#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static int intel_sst_reset_dsp_mrst(void)
static int intel_sst_reset_dsp_medfield(void)
static int sst_start_mrst(void)
static int sst_start_medfield(void)
static int sst_parse_module(struct fw_module_header *module)
static int sst_parse_fw_image(const struct firmware *sst_fw)
int sst_load_fw(const struct firmware *fw, void *context)
static int sst_download_library(const struct firmware *fw_lib,
struct snd_sst_lib_download_info *lib)
static int sst_validate_library(const struct firmware *fw_lib,
struct lib_slot_info *slot,
u32 *entry_point)
int sst_load_library(struct snd_sst_lib_download *lib, u8 ops)
