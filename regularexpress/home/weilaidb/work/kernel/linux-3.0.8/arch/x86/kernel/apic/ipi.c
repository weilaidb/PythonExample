void default_send_IPI_mask_sequence_phys(const struct cpumask *mask, int vector)
void default_send_IPI_mask_allbutself_phys(const struct cpumask *mask,
int vector)
void default_send_IPI_mask_sequence_logical(const struct cpumask *mask,
int vector)
void default_send_IPI_mask_allbutself_logical(const struct cpumask *mask,
int vector)
void default_send_IPI_mask_logical(const struct cpumask *cpumask, int vector)
void default_send_IPI_allbutself(int vector)
void default_send_IPI_all(int vector)
void default_send_IPI_self(int vector)
static int convert_apicid_to_cpu(int apic_id)
int safe_smp_processor_id(void)
