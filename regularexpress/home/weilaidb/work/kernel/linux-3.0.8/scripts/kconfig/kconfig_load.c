#define P(name,type,arg)	type (*name ## _p) arg
#undef P
void kconfig_load(void)
