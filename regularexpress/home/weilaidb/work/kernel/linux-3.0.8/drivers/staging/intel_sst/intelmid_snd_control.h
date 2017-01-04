#define __INTELMID_SND_CTRL_H__
#define MASK0 0x01
#define MASK1 0x02
#define MASK2 0x04
#define MASK3 0x08
#define MASK4 0x10
#define MASK5 0x20
#define MASK6 0x40
#define MASK7 0x80
#define VALUE0	0x01
#define VALUE1	0x02
#define VALUE2	0x04
#define VALUE3	0x08
#define VALUE4	0x10
#define VALUE5	0x20
#define VALUE6	0x40
#define VALUE7	0x80
#define MUTE 0
#define UNMUTE 1
#define MAX_VOL_PMIC_VENDOR0    0x3f
#define MIN_VOL_PMIC_VENDOR0    0
#define MAX_HP_VOL_PMIC_VENDOR1    6
#define MIN_HP_VOL_PMIC_VENDOR1    (-84)
#define MAX_HP_VOL_INDX_PMIC_VENDOR1 40
#define MAX_EP_VOL_PMIC_VENDOR1    0
#define MIN_EP_VOL_PMIC_VENDOR1    (-75)
#define MAX_EP_VOL_INDX_PMIC_VENDOR1 32
int sst_sc_reg_access(struct sc_reg_access *sc_access,
int type, int num_val);
extern struct snd_pmic_ops snd_pmic_ops_fs;
extern struct snd_pmic_ops snd_pmic_ops_mx;
extern struct snd_pmic_ops snd_pmic_ops_nc;
extern struct snd_pmic_ops snd_msic_ops;
enum SND_INPUT_DEVICE ;
enum SND_LINE_OUT_DEVICE ;
enum SND_OUTPUT_DEVICE ;
enum pmic_controls ;
