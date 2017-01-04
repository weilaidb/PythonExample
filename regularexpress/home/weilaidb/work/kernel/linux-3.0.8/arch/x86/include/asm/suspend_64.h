#define _ASM_X86_SUSPEND_64_H
struct saved_context  __attribute__((packed));
#define loaddebug(thread,register) \
set_debugreg((thread)->debugreg##register, register)
extern int acpi_save_state_mem(void);
extern char core_restore_code;
extern char restore_registers;
