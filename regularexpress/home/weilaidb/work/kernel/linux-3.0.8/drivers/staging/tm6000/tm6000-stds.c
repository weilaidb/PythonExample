static unsigned int tm6010_a_mode = 0;
module_param(tm6010_a_mode, int, 0644);
MODULE_PARM_DESC(tm6010_a_mode, "set tm6010 sif audio mode");
struct tm6000_reg_settings ;
struct tm6000_std_settings ;
static struct tm6000_std_settings composite_stds[] = ;
static struct tm6000_std_settings svideo_stds[] = ;
static int tm6000_set_audio_std(struct tm6000_core *dev)
void tm6000_get_std_res(struct tm6000_core *dev)
static int tm6000_load_std(struct tm6000_core *dev,
struct tm6000_reg_settings *set, int max_size)
int tm6000_set_standard(struct tm6000_core *dev)
