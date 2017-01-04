static unsigned short translations[][256] = ;
#define MAX_GLYPH 512
static int inv_translate[MAX_NR_CONSOLES];
struct uni_pagedir ;
static struct uni_pagedir *dflt;
static void set_inverse_transl(struct vc_data *conp, struct uni_pagedir *p, int i)
static void set_inverse_trans_unicode(struct vc_data *conp,
struct uni_pagedir *p)
unsigned short *set_translate(int m, struct vc_data *vc)
u16 inverse_translate(struct vc_data *conp, int glyph, int use_unicode)
EXPORT_SYMBOL_GPL(inverse_translate);
static void update_user_maps(void)
int con_set_trans_old(unsigned char __user * arg)
int con_get_trans_old(unsigned char __user * arg)
int con_set_trans_new(ushort __user * arg)
int con_get_trans_new(ushort __user * arg)
extern u8 dfont_unicount[];
extern u16 dfont_unitable[];
static void con_release_unimap(struct uni_pagedir *p)
void con_free_unimap(struct vc_data *vc)
static int con_unify_unimap(struct vc_data *conp, struct uni_pagedir *p)
static int
con_insert_unipair(struct uni_pagedir *p, u_short unicode, u_short fontpos)
int con_clear_unimap(struct vc_data *vc, struct unimapinit *ui)
int con_set_unimap(struct vc_data *vc, ushort ct, struct unipair __user *list)
int con_set_default_unimap(struct vc_data *vc)
EXPORT_SYMBOL(con_set_default_unimap);
int con_copy_unimap(struct vc_data *dst_vc, struct vc_data *src_vc)
int con_get_unimap(struct vc_data *vc, ushort ct, ushort __user *uct, struct unipair __user *list)
void con_protect_unimap(struct vc_data *vc, int rdonly)
u32 conv_8bit_to_uni(unsigned char c)
int conv_uni_to_8bit(u32 uni)
int
conv_uni_to_pc(struct vc_data *conp, long ucs)
void __init
console_map_init(void)
EXPORT_SYMBOL(con_copy_unimap);
