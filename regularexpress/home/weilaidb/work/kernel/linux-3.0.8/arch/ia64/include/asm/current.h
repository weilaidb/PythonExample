#define _ASM_IA64_CURRENT_H
#define current	((struct task_struct *) ia64_getreg(_IA64_REG_TP))
