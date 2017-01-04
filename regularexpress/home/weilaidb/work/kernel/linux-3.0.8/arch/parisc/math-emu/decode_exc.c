#undef Fpustatus_register
#define Fpustatus_register Fpu_register[0]
#define DOESTRAP 1
#define NOTRAP 0
#define SIGNALCODE(signal, code) ((signal) << 24 | (code));
#define copropbit	1<<31-2
#define opclass		9
#define fmt		11
#define df		13
#define twobits		3
#define fivebits	31
#define MAX_EXCP_REG	7
#define Excp_type(index) Exceptiontype(Fpu_register[index])
#define Excp_instr(index) Instructionfield(Fpu_register[index])
#define Clear_excp_register(index) Allexception(Fpu_register[index]) = 0
#define Excp_format() \
(current_ir >> ((current_ir>>opclass & twobits)==1 ? df : fmt) & twobits)
#define Fpu_sgl(index) Fpu_register[index*2]
#define Fpu_dblp1(index) Fpu_register[index*2]
#define Fpu_dblp2(index) Fpu_register[(index*2)+1]
#define Fpu_quadp1(index) Fpu_register[index*2]
#define Fpu_quadp2(index) Fpu_register[(index*2)+1]
#define Fpu_quadp3(index) Fpu_register[(index*2)+2]
#define Fpu_quadp4(index) Fpu_register[(index*2)+3]
# define Sgl_decrement(sgl_value) Sall(sgl_value)--
# define Dbl_decrement(dbl_valuep1,dbl_valuep2) \
if ((Dallp2(dbl_valuep2)--) == 0) Dallp1(dbl_valuep1)--
#define update_trap_counts(Fpu_register, aflags, bflags, trap_counts)
u_int
decode_fpu(unsigned int Fpu_register[], unsigned int trap_counts[])
