#undef Fpustatus_register
#define Fpustatus_register Fpu_register[0]
void
sgl_denormalize(unsigned int *sgl_opnd, boolean *inexactflag, int rmode)
void
dbl_denormalize(unsigned int *dbl_opndp1,
unsigned int * dbl_opndp2,
boolean *inexactflag,
int rmode)
