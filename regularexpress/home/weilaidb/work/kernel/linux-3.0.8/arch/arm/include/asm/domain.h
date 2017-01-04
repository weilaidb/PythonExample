#define __ASM_PROC_DOMAIN_H
#define DOMAIN_KERNEL	0
#define DOMAIN_TABLE	0
#define DOMAIN_USER	1
#define DOMAIN_IO	2
#define DOMAIN_KERNEL	2
#define DOMAIN_TABLE	2
#define DOMAIN_USER	1
#define DOMAIN_IO	0
#define DOMAIN_NOACCESS	0
#define DOMAIN_CLIENT	1
#define DOMAIN_MANAGER	3
#define DOMAIN_MANAGER	1
#define domain_val(dom,type)	((type) << (2*(dom)))
#define set_domain(x)					\
do  while (0)
#define modify_domain(dom,type)					\
do  while (0)
#define set_domain(x)		do  while (0)
#define modify_domain(dom,type)	do  while (0)
#define T(instr)	#instr "t"
#define T(instr)	#instr
#define T(instr)	instr ## t
#define T(instr)	instr
