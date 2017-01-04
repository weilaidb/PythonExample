#define _ASM_IA64_FCNTL_H
#define force_o_largefile()	\
(personality(current->personality) != PER_LINUX32)
