#define _F(r,f,a,b)							\
r __platform_##f a b;                                   	\
r platform_##f a __attribute__((weak, alias("__platform_"#f)))
_F(void, setup, (char** cmd), );
_F(void, init_irq, (void), );
_F(void, restart, (void), );
_F(void, halt, (void), );
_F(void, power_off, (void), );
_F(void, idle, (void), );
_F(void, heartbeat, (void), );
_F(int,  pcibios_fixup, (void), );
_F(void, calibrate_ccount, (void),
);
