#define _UVESAFB_H
struct v86_regs ;
#define TF_VBEIB	0x01
#define TF_BUF_ESDI	0x02
#define TF_BUF_ESBX	0x04
#define TF_BUF_RET	0x08
#define TF_EXIT		0x10
struct uvesafb_task ;
#define VBE_CAP_CAN_SWITCH_DAC	0x01
#define VBE_CAP_VGACOMPAT	0x02
struct vbe_ib  __attribute__ ((packed));
struct vbe_crtc_ib  __attribute__ ((packed));
#define VBE_MODE_VGACOMPAT	0x20
#define VBE_MODE_COLOR		0x08
#define VBE_MODE_SUPPORTEDHW	0x01
#define VBE_MODE_GRAPHICS	0x10
#define VBE_MODE_LFB		0x80
#define VBE_MODE_MASK		(VBE_MODE_COLOR | VBE_MODE_SUPPORTEDHW | \
VBE_MODE_GRAPHICS | VBE_MODE_LFB)
struct vbe_mode_ib  __attribute__ ((packed));
#define UVESAFB_DEFAULT_MODE "640x480-16"
#define UVESAFB_TIMEOUT 5000
#define UVESAFB_TASKS_MAX 16
#define dac_reg	(0x3c8)
#define dac_val	(0x3c9)
struct uvesafb_pal_entry  __attribute__ ((packed));
struct uvesafb_ktask ;
static int uvesafb_exec(struct uvesafb_ktask *tsk);
#define UVESAFB_EXACT_RES	1
#define UVESAFB_EXACT_DEPTH	2
struct uvesafb_par ;
