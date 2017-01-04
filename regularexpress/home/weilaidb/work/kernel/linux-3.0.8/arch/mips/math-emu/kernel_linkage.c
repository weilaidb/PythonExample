#define SIGNALLING_NAN 0x7ff800007ff80000LL
void fpu_emulator_init_fpu(void)
int fpu_emulator_save_context(struct sigcontext __user *sc)
int fpu_emulator_restore_context(struct sigcontext __user *sc)
int fpu_emulator_save_context32(struct sigcontext32 __user *sc)
int fpu_emulator_restore_context32(struct sigcontext32 __user *sc)
