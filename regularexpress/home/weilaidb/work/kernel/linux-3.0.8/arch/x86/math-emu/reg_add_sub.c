static
int add_sub_specials(FPU_REG const *a, u_char taga, u_char signa,
FPU_REG const *b, u_char tagb, u_char signb,
FPU_REG * dest, int deststnr, int control_w);
int FPU_add(FPU_REG const *b, u_char tagb, int deststnr, int control_w)
int FPU_sub(int flags, int rm, int control_w)
static
int add_sub_specials(FPU_REG const *a, u_char taga, u_char signa,
FPU_REG const *b, u_char tagb, u_char signb,
FPU_REG * dest, int deststnr, int control_w)
