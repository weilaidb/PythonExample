#define _ASM_X86_X2APIC_H
static const struct cpumask *x2apic_target_cpus(void)
static int x2apic_apic_id_registered(void)
static void x2apic_vector_allocation_domain(int cpu, struct cpumask *retmask)
static void
__x2apic_send_IPI_dest(unsigned int apicid, int vector, unsigned int dest)
static unsigned int x2apic_get_apic_id(unsigned long id)
static unsigned long x2apic_set_apic_id(unsigned int id)
static int x2apic_phys_pkg_id(int initial_apicid, int index_msb)
static void x2apic_send_IPI_self(int vector)
