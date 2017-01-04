#define pr_fmt(fmt) "intc: " fmt
unsigned int create_irq_nr(unsigned int irq_want, int node)
int create_irq(void)
void destroy_irq(unsigned int irq)
void reserve_intc_vectors(struct intc_vect *vectors, unsigned int nr_vecs)
