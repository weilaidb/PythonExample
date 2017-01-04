#define _ASM_SH_MACHVEC_H
struct sh_machine_vector ;
extern struct sh_machine_vector sh_mv;
#define get_system_type()	sh_mv.mv_name
#define __initmv \
__used __section(.machvec.init)
