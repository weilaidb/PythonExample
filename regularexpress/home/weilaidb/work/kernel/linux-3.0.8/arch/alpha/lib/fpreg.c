#if defined(CONFIG_ALPHA_EV6) || defined(CONFIG_ALPHA_EV67)
#define STT(reg,val)  asm volatile ("ftoit $f"#reg",%0" : "=r"(val));
#define STT(reg,val)  asm volatile ("stt $f"#reg",%0" : "=m"(val));
unsigned long
alpha_read_fp_reg (unsigned long reg)
#if defined(CONFIG_ALPHA_EV6) || defined(CONFIG_ALPHA_EV67)
#define LDT(reg,val)  asm volatile ("itoft %0,$f"#reg : : "r"(val));
#define LDT(reg,val)  asm volatile ("ldt $f"#reg",%0" : : "m"(val));
void
alpha_write_fp_reg (unsigned long reg, unsigned long val)
#if defined(CONFIG_ALPHA_EV6) || defined(CONFIG_ALPHA_EV67)
#define STS(reg,val)  asm volatile ("ftois $f"#reg",%0" : "=r"(val));
#define STS(reg,val)  asm volatile ("sts $f"#reg",%0" : "=m"(val));
unsigned long
alpha_read_fp_reg_s (unsigned long reg)
#if defined(CONFIG_ALPHA_EV6) || defined(CONFIG_ALPHA_EV67)
#define LDS(reg,val)  asm volatile ("itofs %0,$f"#reg : : "r"(val));
#define LDS(reg,val)  asm volatile ("lds $f"#reg",%0" : : "m"(val));
void
alpha_write_fp_reg_s (unsigned long reg, unsigned long val)
