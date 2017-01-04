# ifndef __tilegx__
#  error Can only build TILE-Gx configurations with tilegx compiler
# endif
# ifndef __LP64__
#  error Must not specify -m32 when building the TILE-Gx kernel
# endif
# ifdef __tilegx__
#  error Can not build TILEPro/TILE64 configurations with tilegx compiler
# endif
void foo(void)
