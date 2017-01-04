#define _PPC_BOOT_CUBOOT_H_
void cuboot_init(unsigned long r4, unsigned long r5,
unsigned long r6, unsigned long r7,
unsigned long end_of_ram);
#define CUBOOT_INIT() \
do  while (0)
