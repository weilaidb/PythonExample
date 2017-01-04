#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
int vid_from_reg(int val, u8 vrm)
struct vrm_model ;
#define ANY 0xFF
static struct vrm_model vrm_models[] = ;
static u8 find_vrm(u8 eff_family, u8 eff_model, u8 eff_stepping, u8 vendor)
u8 vid_which_vrm(void)
u8 vid_which_vrm(void)
EXPORT_SYMBOL(vid_from_reg);
EXPORT_SYMBOL(vid_which_vrm);
MODULE_AUTHOR("Rudolf Marek <r.marek@assembler.cz>");
MODULE_DESCRIPTION("hwmon-vid driver");
MODULE_LICENSE("GPL");
