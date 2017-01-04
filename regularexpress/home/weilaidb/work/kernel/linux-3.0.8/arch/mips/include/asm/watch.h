#define _ASM_WATCH_H
void mips_install_watch_registers(void);
void mips_read_watch_registers(void);
void mips_clear_watch_registers(void);
void mips_probe_watch_registers(struct cpuinfo_mips *c);
#define __restore_watch() do  while (0)
#define __restore_watch() do  while (0)
