#define _ASM_X86_PERCPU_H
#define __percpu_seg		gs
#define __percpu_mov_op		movq
#define __percpu_seg		fs
#define __percpu_mov_op		movl
#define PER_CPU(var, reg)						\
__percpu_mov_op %__percpu_seg:this_cpu_off, reg;		\
lea var(reg), reg
#define PER_CPU_VAR(var)	%__percpu_seg:var
#define PER_CPU(var, reg)	__percpu_mov_op $var, reg
#define PER_CPU_VAR(var)	var
#define INIT_PER_CPU_VAR(var)  init_per_cpu__##var
#define INIT_PER_CPU_VAR(var)  var
#define __percpu_prefix		"%%"__stringify(__percpu_seg)":"
#define __my_cpu_offset		percpu_read(this_cpu_off)
#define __this_cpu_ptr(ptr)				\
()
#define __percpu_prefix		""
#define __percpu_arg(x)		__percpu_prefix "%P" #x
#define DECLARE_INIT_PER_CPU(var) \
extern typeof(var) init_per_cpu_var(var)
#define init_per_cpu_var(var)  init_per_cpu__##var
#define init_per_cpu_var(var)  var
extern void __bad_percpu_size(void);
#define percpu_to_op(op, var, val)			\
do  while (0)
#define percpu_add_op(var, val)						\
do  while (0)
#define percpu_from_op(op, var, constraint)		\
()
#define percpu_unary_op(op, var)			\
()
#define percpu_add_return_op(var, val)					\
()
#define percpu_xchg_op(var, nval)					\
()
#define percpu_cmpxchg_op(var, oval, nval)				\
()
#define percpu_read(var)		percpu_from_op("mov", var, "m" (var))
#define percpu_read_stable(var)		percpu_from_op("mov", var, "p" (&(var)))
#define percpu_write(var, val)		percpu_to_op("mov", var, val)
#define percpu_add(var, val)		percpu_add_op(var, val)
#define percpu_sub(var, val)		percpu_add_op(var, -(val))
#define percpu_and(var, val)		percpu_to_op("and", var, val)
#define percpu_or(var, val)		percpu_to_op("or", var, val)
#define percpu_xor(var, val)		percpu_to_op("xor", var, val)
#define percpu_inc(var)		percpu_unary_op("inc", var)
#define __this_cpu_read_1(pcp)		percpu_from_op("mov", (pcp), "m"(pcp))
#define __this_cpu_read_2(pcp)		percpu_from_op("mov", (pcp), "m"(pcp))
#define __this_cpu_read_4(pcp)		percpu_from_op("mov", (pcp), "m"(pcp))
#define __this_cpu_write_1(pcp, val)	percpu_to_op("mov", (pcp), val)
#define __this_cpu_write_2(pcp, val)	percpu_to_op("mov", (pcp), val)
#define __this_cpu_write_4(pcp, val)	percpu_to_op("mov", (pcp), val)
#define __this_cpu_add_1(pcp, val)	percpu_add_op((pcp), val)
#define __this_cpu_add_2(pcp, val)	percpu_add_op((pcp), val)
#define __this_cpu_add_4(pcp, val)	percpu_add_op((pcp), val)
#define __this_cpu_and_1(pcp, val)	percpu_to_op("and", (pcp), val)
#define __this_cpu_and_2(pcp, val)	percpu_to_op("and", (pcp), val)
#define __this_cpu_and_4(pcp, val)	percpu_to_op("and", (pcp), val)
#define __this_cpu_or_1(pcp, val)	percpu_to_op("or", (pcp), val)
#define __this_cpu_or_2(pcp, val)	percpu_to_op("or", (pcp), val)
#define __this_cpu_or_4(pcp, val)	percpu_to_op("or", (pcp), val)
#define __this_cpu_xor_1(pcp, val)	percpu_to_op("xor", (pcp), val)
#define __this_cpu_xor_2(pcp, val)	percpu_to_op("xor", (pcp), val)
#define __this_cpu_xor_4(pcp, val)	percpu_to_op("xor", (pcp), val)
#define __this_cpu_xchg_8(pcp, nval)	percpu_xchg_op(pcp, nval)
#define __this_cpu_cmpxchg_8(pcp, oval, nval)	percpu_cmpxchg_op(pcp, oval, nval)
#define this_cpu_read_1(pcp)		percpu_from_op("mov", (pcp), "m"(pcp))
#define this_cpu_read_2(pcp)		percpu_from_op("mov", (pcp), "m"(pcp))
#define this_cpu_read_4(pcp)		percpu_from_op("mov", (pcp), "m"(pcp))
#define this_cpu_write_1(pcp, val)	percpu_to_op("mov", (pcp), val)
#define this_cpu_write_2(pcp, val)	percpu_to_op("mov", (pcp), val)
#define this_cpu_write_4(pcp, val)	percpu_to_op("mov", (pcp), val)
#define this_cpu_add_1(pcp, val)	percpu_add_op((pcp), val)
#define this_cpu_add_2(pcp, val)	percpu_add_op((pcp), val)
#define this_cpu_add_4(pcp, val)	percpu_add_op((pcp), val)
#define this_cpu_and_1(pcp, val)	percpu_to_op("and", (pcp), val)
#define this_cpu_and_2(pcp, val)	percpu_to_op("and", (pcp), val)
#define this_cpu_and_4(pcp, val)	percpu_to_op("and", (pcp), val)
#define this_cpu_or_1(pcp, val)		percpu_to_op("or", (pcp), val)
#define this_cpu_or_2(pcp, val)		percpu_to_op("or", (pcp), val)
#define this_cpu_or_4(pcp, val)		percpu_to_op("or", (pcp), val)
#define this_cpu_xor_1(pcp, val)	percpu_to_op("xor", (pcp), val)
#define this_cpu_xor_2(pcp, val)	percpu_to_op("xor", (pcp), val)
#define this_cpu_xor_4(pcp, val)	percpu_to_op("xor", (pcp), val)
#define this_cpu_xchg_1(pcp, nval)	percpu_xchg_op(pcp, nval)
#define this_cpu_xchg_2(pcp, nval)	percpu_xchg_op(pcp, nval)
#define this_cpu_xchg_4(pcp, nval)	percpu_xchg_op(pcp, nval)
#define irqsafe_cpu_add_1(pcp, val)	percpu_add_op((pcp), val)
#define irqsafe_cpu_add_2(pcp, val)	percpu_add_op((pcp), val)
#define irqsafe_cpu_add_4(pcp, val)	percpu_add_op((pcp), val)
#define irqsafe_cpu_and_1(pcp, val)	percpu_to_op("and", (pcp), val)
#define irqsafe_cpu_and_2(pcp, val)	percpu_to_op("and", (pcp), val)
#define irqsafe_cpu_and_4(pcp, val)	percpu_to_op("and", (pcp), val)
#define irqsafe_cpu_or_1(pcp, val)	percpu_to_op("or", (pcp), val)
#define irqsafe_cpu_or_2(pcp, val)	percpu_to_op("or", (pcp), val)
#define irqsafe_cpu_or_4(pcp, val)	percpu_to_op("or", (pcp), val)
#define irqsafe_cpu_xor_1(pcp, val)	percpu_to_op("xor", (pcp), val)
#define irqsafe_cpu_xor_2(pcp, val)	percpu_to_op("xor", (pcp), val)
#define irqsafe_cpu_xor_4(pcp, val)	percpu_to_op("xor", (pcp), val)
#define irqsafe_cpu_xchg_1(pcp, nval)	percpu_xchg_op(pcp, nval)
#define irqsafe_cpu_xchg_2(pcp, nval)	percpu_xchg_op(pcp, nval)
#define irqsafe_cpu_xchg_4(pcp, nval)	percpu_xchg_op(pcp, nval)
#define __this_cpu_add_return_1(pcp, val) percpu_add_return_op(pcp, val)
#define __this_cpu_add_return_2(pcp, val) percpu_add_return_op(pcp, val)
#define __this_cpu_add_return_4(pcp, val) percpu_add_return_op(pcp, val)
#define __this_cpu_cmpxchg_1(pcp, oval, nval)	percpu_cmpxchg_op(pcp, oval, nval)
#define __this_cpu_cmpxchg_2(pcp, oval, nval)	percpu_cmpxchg_op(pcp, oval, nval)
#define __this_cpu_cmpxchg_4(pcp, oval, nval)	percpu_cmpxchg_op(pcp, oval, nval)
#define this_cpu_add_return_1(pcp, val)	percpu_add_return_op(pcp, val)
#define this_cpu_add_return_2(pcp, val)	percpu_add_return_op(pcp, val)
#define this_cpu_add_return_4(pcp, val)	percpu_add_return_op(pcp, val)
#define this_cpu_cmpxchg_1(pcp, oval, nval)	percpu_cmpxchg_op(pcp, oval, nval)
#define this_cpu_cmpxchg_2(pcp, oval, nval)	percpu_cmpxchg_op(pcp, oval, nval)
#define this_cpu_cmpxchg_4(pcp, oval, nval)	percpu_cmpxchg_op(pcp, oval, nval)
#define irqsafe_cpu_cmpxchg_1(pcp, oval, nval)	percpu_cmpxchg_op(pcp, oval, nval)
#define irqsafe_cpu_cmpxchg_2(pcp, oval, nval)	percpu_cmpxchg_op(pcp, oval, nval)
#define irqsafe_cpu_cmpxchg_4(pcp, oval, nval)	percpu_cmpxchg_op(pcp, oval, nval)
#define percpu_cmpxchg8b_double(pcp1, o1, o2, n1, n2)			\
()
#define __this_cpu_cmpxchg_double_4(pcp1, pcp2, o1, o2, n1, n2)		percpu_cmpxchg8b_double(pcp1, o1, o2, n1, n2)
#define this_cpu_cmpxchg_double_4(pcp1, pcp2, o1, o2, n1, n2)		percpu_cmpxchg8b_double(pcp1, o1, o2, n1, n2)
#define irqsafe_cpu_cmpxchg_double_4(pcp1, pcp2, o1, o2, n1, n2)	percpu_cmpxchg8b_double(pcp1, o1, o2, n1, n2)
#define __this_cpu_read_8(pcp)		percpu_from_op("mov", (pcp), "m"(pcp))
#define __this_cpu_write_8(pcp, val)	percpu_to_op("mov", (pcp), val)
#define __this_cpu_add_8(pcp, val)	percpu_add_op((pcp), val)
#define __this_cpu_and_8(pcp, val)	percpu_to_op("and", (pcp), val)
#define __this_cpu_or_8(pcp, val)	percpu_to_op("or", (pcp), val)
#define __this_cpu_xor_8(pcp, val)	percpu_to_op("xor", (pcp), val)
#define __this_cpu_add_return_8(pcp, val) percpu_add_return_op(pcp, val)
#define this_cpu_read_8(pcp)		percpu_from_op("mov", (pcp), "m"(pcp))
#define this_cpu_write_8(pcp, val)	percpu_to_op("mov", (pcp), val)
#define this_cpu_add_8(pcp, val)	percpu_add_op((pcp), val)
#define this_cpu_and_8(pcp, val)	percpu_to_op("and", (pcp), val)
#define this_cpu_or_8(pcp, val)		percpu_to_op("or", (pcp), val)
#define this_cpu_xor_8(pcp, val)	percpu_to_op("xor", (pcp), val)
#define this_cpu_add_return_8(pcp, val)	percpu_add_return_op(pcp, val)
#define this_cpu_xchg_8(pcp, nval)	percpu_xchg_op(pcp, nval)
#define this_cpu_cmpxchg_8(pcp, oval, nval)	percpu_cmpxchg_op(pcp, oval, nval)
#define irqsafe_cpu_add_8(pcp, val)	percpu_add_op((pcp), val)
#define irqsafe_cpu_and_8(pcp, val)	percpu_to_op("and", (pcp), val)
#define irqsafe_cpu_or_8(pcp, val)	percpu_to_op("or", (pcp), val)
#define irqsafe_cpu_xor_8(pcp, val)	percpu_to_op("xor", (pcp), val)
#define irqsafe_cpu_xchg_8(pcp, nval)	percpu_xchg_op(pcp, nval)
#define irqsafe_cpu_cmpxchg_8(pcp, oval, nval)	percpu_cmpxchg_op(pcp, oval, nval)
#define CMPXCHG16B_EMU_CALL "call this_cpu_cmpxchg16b_emu\n\t" ASM_NOP3
#define CMPXCHG16B_EMU_CALL "call this_cpu_cmpxchg16b_emu\n\t" ASM_NOP2
#define percpu_cmpxchg16b_double(pcp1, o1, o2, n1, n2)			\
()
#define __this_cpu_cmpxchg_double_8(pcp1, pcp2, o1, o2, n1, n2)		percpu_cmpxchg16b_double(pcp1, o1, o2, n1, n2)
#define this_cpu_cmpxchg_double_8(pcp1, pcp2, o1, o2, n1, n2)		percpu_cmpxchg16b_double(pcp1, o1, o2, n1, n2)
#define irqsafe_cpu_cmpxchg_double_8(pcp1, pcp2, o1, o2, n1, n2)	percpu_cmpxchg16b_double(pcp1, o1, o2, n1, n2)
#define x86_test_and_clear_bit_percpu(bit, var)				\
()
static __always_inline int x86_this_cpu_constant_test_bit(unsigned int nr,
const unsigned long __percpu *addr)
static inline int x86_this_cpu_variable_test_bit(int nr,
const unsigned long __percpu *addr)
#define x86_this_cpu_test_bit(nr, addr)			\
(__builtin_constant_p((nr))			\
? x86_this_cpu_constant_test_bit((nr), (addr))	\
: x86_this_cpu_variable_test_bit((nr), (addr)))
DECLARE_PER_CPU(unsigned long, this_cpu_off);
#define	DEFINE_EARLY_PER_CPU(_type, _name, _initvalue)			\
DEFINE_PER_CPU(_type, _name) = _initvalue;			\
__typeof__(_type) _name##_early_map[NR_CPUS] __initdata =	\
;	\
__typeof__(_type) *_name##_early_ptr __refdata = _name##_early_map
#define EXPORT_EARLY_PER_CPU_SYMBOL(_name)			\
EXPORT_PER_CPU_SYMBOL(_name)
#define DECLARE_EARLY_PER_CPU(_type, _name)			\
DECLARE_PER_CPU(_type, _name);				\
extern __typeof__(_type) *_name##_early_ptr;		\
extern __typeof__(_type)  _name##_early_map[]
#define	early_per_cpu_ptr(_name) (_name##_early_ptr)
#define	early_per_cpu_map(_name, _idx) (_name##_early_map[_idx])
#define	early_per_cpu(_name, _cpu) 				\
*(early_per_cpu_ptr(_name) ?				\
&early_per_cpu_ptr(_name)[_cpu] :		\
&per_cpu(_name, _cpu))
#define	DEFINE_EARLY_PER_CPU(_type, _name, _initvalue)		\
DEFINE_PER_CPU(_type, _name) = _initvalue
#define EXPORT_EARLY_PER_CPU_SYMBOL(_name)			\
EXPORT_PER_CPU_SYMBOL(_name)
#define DECLARE_EARLY_PER_CPU(_type, _name)			\
DECLARE_PER_CPU(_type, _name)
#define	early_per_cpu(_name, _cpu) per_cpu(_name, _cpu)
#define	early_per_cpu_ptr(_name) NULL
