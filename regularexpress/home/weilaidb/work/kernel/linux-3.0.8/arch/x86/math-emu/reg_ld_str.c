#define DOUBLE_Emax 1023
#define DOUBLE_Ebias 1023
#define DOUBLE_Emin (-1022)
#define SINGLE_Emax 127
#define SINGLE_Ebias 127
#define SINGLE_Emin (-126)
static u_char normalize_no_excep(FPU_REG *r, int exp, int sign)
int FPU_tagof(FPU_REG *ptr)
int FPU_load_extended(long double __user *s, int stnr)
int FPU_load_double(double __user *dfloat, FPU_REG *loaded_data)
int FPU_load_single(float __user *single, FPU_REG *loaded_data)
int FPU_load_int64(long long __user *_s)
int FPU_load_int32(long __user *_s, FPU_REG *loaded_data)
int FPU_load_int16(short __user *_s, FPU_REG *loaded_data)
int FPU_load_bcd(u_char __user *s)
int FPU_store_extended(FPU_REG *st0_ptr, u_char st0_tag,
long double __user * d)
int FPU_store_double(FPU_REG *st0_ptr, u_char st0_tag, double __user *dfloat)
int FPU_store_single(FPU_REG *st0_ptr, u_char st0_tag, float __user *single)
int FPU_store_int64(FPU_REG *st0_ptr, u_char st0_tag, long long __user *d)
int FPU_store_int32(FPU_REG *st0_ptr, u_char st0_tag, long __user *d)
int FPU_store_int16(FPU_REG *st0_ptr, u_char st0_tag, short __user *d)
int FPU_store_bcd(FPU_REG *st0_ptr, u_char st0_tag, u_char __user *d)
int FPU_round_to_int(FPU_REG *r, u_char tag)
u_char __user *fldenv(fpu_addr_modes addr_modes, u_char __user *s)
void frstor(fpu_addr_modes addr_modes, u_char __user *data_address)
u_char __user *fstenv(fpu_addr_modes addr_modes, u_char __user *d)
void fsave(fpu_addr_modes addr_modes, u_char __user *data_address)
