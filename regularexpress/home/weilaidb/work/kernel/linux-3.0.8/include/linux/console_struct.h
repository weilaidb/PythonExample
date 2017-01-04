#define _LINUX_CONSOLE_STRUCT_H
struct vt_struct;
#define NPAR 16
struct vc_data ;
struct vc ;
extern struct vc vc_cons [MAX_NR_CONSOLES];
extern void vc_SAK(struct work_struct *work);
#define CUR_DEF		0
#define CUR_NONE	1
#define CUR_UNDERLINE	2
#define CUR_LOWER_THIRD	3
#define CUR_LOWER_HALF	4
#define CUR_TWO_THIRDS	5
#define CUR_BLOCK	6
#define CUR_HWMASK	0x0f
#define CUR_SWMASK	0xfff0
#define CUR_DEFAULT CUR_UNDERLINE
#define CON_IS_VISIBLE(conp) (*conp->vc_display_fg == conp)
