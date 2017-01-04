#define _SPARC_BTFIXUP_H
extern unsigned int ___illegal_use_of_BTFIXUP_SIMM13_in_module(void);
extern unsigned int ___illegal_use_of_BTFIXUP_SETHI_in_module(void);
extern unsigned int ___illegal_use_of_BTFIXUP_HALF_in_module(void);
extern unsigned int ___illegal_use_of_BTFIXUP_INT_in_module(void);
#define BTFIXUP_SIMM13(__name) ___illegal_use_of_BTFIXUP_SIMM13_in_module()
#define BTFIXUP_HALF(__name) ___illegal_use_of_BTFIXUP_HALF_in_module()
#define BTFIXUP_SETHI(__name) ___illegal_use_of_BTFIXUP_SETHI_in_module()
#define BTFIXUP_INT(__name) ___illegal_use_of_BTFIXUP_INT_in_module()
#define BTFIXUP_BLACKBOX(__name) ___illegal_use_of_BTFIXUP_BLACKBOX_in_module
#define BTFIXUP_SIMM13(__name) ___sf_##__name()
#define BTFIXUP_HALF(__name) ___af_##__name()
#define BTFIXUP_SETHI(__name) ___hf_##__name()
#define BTFIXUP_INT(__name) ((unsigned int)&___i_##__name)
#define BTFIXUP_BLACKBOX(__name) ___b_##__name
#define BTFIXUPDEF_CALL(__type, __name, __args...) 					\
extern __type ___f_##__name(__args);						\
extern unsigned ___fs_##__name[3];
#define BTFIXUPDEF_CALL_CONST(__type, __name, __args...) 				\
extern __type ___f_##__name(__args) __attribute_const__;			\
extern unsigned ___fs_##__name[3];
#define BTFIXUP_CALL(__name) ___f_##__name
#define BTFIXUPDEF_BLACKBOX(__name)							\
extern unsigned ___bs_##__name[2];
#define BTFIXUPDEF_SIMM13(__name)							\
static inline unsigned int ___sf_##__name(void) __attribute_const__;		\
extern unsigned ___ss_##__name[2];						\
static inline unsigned int ___sf_##__name(void)
#define BTFIXUPDEF_SIMM13_INIT(__name,__val)						\
static inline unsigned int ___sf_##__name(void) __attribute_const__;		\
extern unsigned ___ss_##__name[2];						\
static inline unsigned int ___sf_##__name(void)
#define BTFIXUPDEF_HALF(__name)								\
static inline unsigned int ___af_##__name(void) __attribute_const__;		\
extern unsigned ___as_##__name[2];						\
static inline unsigned int ___af_##__name(void)
#define BTFIXUPDEF_HALF_INIT(__name,__val)						\
static inline unsigned int ___af_##__name(void) __attribute_const__;		\
extern unsigned ___as_##__name[2];						\
static inline unsigned int ___af_##__name(void)
#define BTFIXUPDEF_SETHI(__name)							\
static inline unsigned int ___hf_##__name(void) __attribute_const__;		\
extern unsigned ___hs_##__name[2];						\
static inline unsigned int ___hf_##__name(void)
#define BTFIXUPDEF_SETHI_INIT(__name,__val)						\
static inline unsigned int ___hf_##__name(void) __attribute_const__;		\
extern unsigned ___hs_##__name[2];						\
static inline unsigned int ___hf_##__name(void)
#define BTFIXUPDEF_INT(__name)								\
extern unsigned char ___i_##__name;						\
extern unsigned ___is_##__name[2];
#define BTFIXUPCALL_NORM	0x00000000
#define BTFIXUPCALL_NOP		0x01000000
#define BTFIXUPCALL_RETINT(i)	(0x90102000|((i) & 0x1fff))
#define BTFIXUPCALL_ORINT(i)	(0x90122000|((i) & 0x1fff))
#define BTFIXUPCALL_RETO0	0x01000000
#define BTFIXUPCALL_ANDNINT(i)	(0x902a2000|((i) & 0x1fff))
#define BTFIXUPCALL_SWAPO0O1	0xd27a0000
#define BTFIXUPCALL_SWAPO0G0	0xc07a0000
#define BTFIXUPCALL_SWAPG1G2	0xc4784000
#define BTFIXUPCALL_STG0O0	0xc0220000
#define BTFIXUPCALL_STO1O0	0xd2220000
#define BTFIXUPSET_CALL(__name, __addr, __insn)						\
do  while (0)
#define BTFIXUPSET_BLACKBOX(__name, __func)						\
do  while (0)
#define BTFIXUPCOPY_CALL(__name, __from)						\
do  while (0)
#define BTFIXUPSET_SIMM13(__name, __val)						\
do  while (0)
#define BTFIXUPCOPY_SIMM13(__name, __from)						\
do  while (0)
#define BTFIXUPSET_HALF(__name, __val)							\
do  while (0)
#define BTFIXUPCOPY_HALF(__name, __from)						\
do  while (0)
#define BTFIXUPSET_SETHI(__name, __val)							\
do  while (0)
#define BTFIXUPCOPY_SETHI(__name, __from)						\
do  while (0)
#define BTFIXUPSET_INT(__name, __val)							\
do  while (0)
#define BTFIXUPCOPY_INT(__name, __from)							\
do  while (0)
#define BTFIXUPVAL_CALL(__name)								\
((unsigned long)___fs_##__name[1])
extern void btfixup(void);
#define BTFIXUP_SETHI(__name)			%hi(___h_ ## __name)
#define BTFIXUP_SETHI_INIT(__name,__val)	%hi(___h_ ## __name ## __btset_ ## __val)
