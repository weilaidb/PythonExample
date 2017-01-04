#define _ASM_MICROBLAZE_ENTRY_H
#define PER_CPU(var) var
# ifndef __ASSEMBLY__
DECLARE_PER_CPU(unsigned int, KSP);
DECLARE_PER_CPU(unsigned int, KM);
DECLARE_PER_CPU(unsigned int, ENTRY_SP);
DECLARE_PER_CPU(unsigned int, R11_SAVE);
DECLARE_PER_CPU(unsigned int, CURRENT_SAVE);
# endif
