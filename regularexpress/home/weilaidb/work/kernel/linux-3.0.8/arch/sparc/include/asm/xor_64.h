extern void xor_vis_2(unsigned long, unsigned long *, unsigned long *);
extern void xor_vis_3(unsigned long, unsigned long *, unsigned long *,
unsigned long *);
extern void xor_vis_4(unsigned long, unsigned long *, unsigned long *,
unsigned long *, unsigned long *);
extern void xor_vis_5(unsigned long, unsigned long *, unsigned long *,
unsigned long *, unsigned long *, unsigned long *);
static struct xor_block_template xor_block_VIS = ;
extern void xor_niagara_2(unsigned long, unsigned long *, unsigned long *);
extern void xor_niagara_3(unsigned long, unsigned long *, unsigned long *,
unsigned long *);
extern void xor_niagara_4(unsigned long, unsigned long *, unsigned long *,
unsigned long *, unsigned long *);
extern void xor_niagara_5(unsigned long, unsigned long *, unsigned long *,
unsigned long *, unsigned long *, unsigned long *);
static struct xor_block_template xor_block_niagara = ;
#undef XOR_TRY_TEMPLATES
#define XOR_TRY_TEMPLATES				\
do  while (0)
#define XOR_SELECT_TEMPLATE(FASTEST) \
((tlb_type == hypervisor && \
(sun4v_chip_type == SUN4V_CHIP_NIAGARA1 || \
sun4v_chip_type == SUN4V_CHIP_NIAGARA2 || \
sun4v_chip_type == SUN4V_CHIP_NIAGARA3)) ? \
&xor_block_niagara : \
&xor_block_VIS)
