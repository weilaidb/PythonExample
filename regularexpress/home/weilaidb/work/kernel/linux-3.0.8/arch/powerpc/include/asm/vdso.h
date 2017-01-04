#define __PPC64_VDSO_H__
#define VDSO32_LBASE	0x100000
#define VDSO64_LBASE	0x100000
#define VDSO32_MBASE	VDSO32_LBASE
#define VDSO_VERSION_STRING	LINUX_2.6.15
#undef VDS64_HAS_DESCRIPTORS
extern unsigned long vdso64_rt_sigtramp;
extern unsigned long vdso32_sigtramp;
extern unsigned long vdso32_rt_sigtramp;
#define V_FUNCTION_BEGIN(name)		\
.globl name;			\
.section ".opd","a";		\
.align 3;			\
name:				\
.quad .name,.TOC.@tocbase,0;	\
.previous;			\
.globl .name;			\
.type .name,@function; 		\
.name:				\
#define V_FUNCTION_END(name)		\
.size .name,.-.name;
#define V_LOCAL_FUNC(name) (.name)
#define V_FUNCTION_BEGIN(name)		\
.globl name;			\
name:				\
#define V_FUNCTION_END(name)		\
.size name,.-name;
#define V_LOCAL_FUNC(name) (name)
#define V_FUNCTION_BEGIN(name)		\
.globl name;			\
.type name,@function; 		\
name:				\
#define V_FUNCTION_END(name)		\
.size name,.-name;
#define V_LOCAL_FUNC(name) (name)
