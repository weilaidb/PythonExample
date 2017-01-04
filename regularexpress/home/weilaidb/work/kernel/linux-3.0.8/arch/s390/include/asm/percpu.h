#define __ARCH_S390_PERCPU__
#define __my_cpu_offset S390_lowcore.percpu_offset
#if defined(CONFIG_SMP) && defined(__s390x__) && defined(MODULE)
#define ARCH_NEEDS_WEAK_PER_CPU
#define arch_irqsafe_cpu_to_op(pcp, val, op)				\
do  while (0)
#define irqsafe_cpu_add_1(pcp, val) arch_irqsafe_cpu_to_op(pcp, val, +)
#define irqsafe_cpu_add_2(pcp, val) arch_irqsafe_cpu_to_op(pcp, val, +)
#define irqsafe_cpu_add_4(pcp, val) arch_irqsafe_cpu_to_op(pcp, val, +)
#define irqsafe_cpu_add_8(pcp, val) arch_irqsafe_cpu_to_op(pcp, val, +)
#define irqsafe_cpu_and_1(pcp, val) arch_irqsafe_cpu_to_op(pcp, val, &)
#define irqsafe_cpu_and_2(pcp, val) arch_irqsafe_cpu_to_op(pcp, val, &)
#define irqsafe_cpu_and_4(pcp, val) arch_irqsafe_cpu_to_op(pcp, val, &)
#define irqsafe_cpu_and_8(pcp, val) arch_irqsafe_cpu_to_op(pcp, val, &)
#define irqsafe_cpu_or_1(pcp, val) arch_irqsafe_cpu_to_op(pcp, val, |)
#define irqsafe_cpu_or_2(pcp, val) arch_irqsafe_cpu_to_op(pcp, val, |)
#define irqsafe_cpu_or_4(pcp, val) arch_irqsafe_cpu_to_op(pcp, val, |)
#define irqsafe_cpu_or_8(pcp, val) arch_irqsafe_cpu_to_op(pcp, val, |)
#define irqsafe_cpu_xor_1(pcp, val) arch_irqsafe_cpu_to_op(pcp, val, ^)
#define irqsafe_cpu_xor_2(pcp, val) arch_irqsafe_cpu_to_op(pcp, val, ^)
#define irqsafe_cpu_xor_4(pcp, val) arch_irqsafe_cpu_to_op(pcp, val, ^)
#define irqsafe_cpu_xor_8(pcp, val) arch_irqsafe_cpu_to_op(pcp, val, ^)
#define arch_irqsafe_cpu_cmpxchg(pcp, oval, nval)			\
()
#define irqsafe_cpu_cmpxchg_1(pcp, oval, nval) arch_irqsafe_cpu_cmpxchg(pcp, oval, nval)
#define irqsafe_cpu_cmpxchg_2(pcp, oval, nval) arch_irqsafe_cpu_cmpxchg(pcp, oval, nval)
#define irqsafe_cpu_cmpxchg_4(pcp, oval, nval) arch_irqsafe_cpu_cmpxchg(pcp, oval, nval)
#define irqsafe_cpu_cmpxchg_8(pcp, oval, nval) arch_irqsafe_cpu_cmpxchg(pcp, oval, nval)
