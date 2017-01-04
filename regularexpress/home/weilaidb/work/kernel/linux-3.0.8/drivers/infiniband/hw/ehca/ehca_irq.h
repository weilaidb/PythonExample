#define __EHCA_IRQ_H
struct ehca_shca;
int ehca_error_data(struct ehca_shca *shca, void *data, u64 resource);
irqreturn_t ehca_interrupt_neq(int irq, void *dev_id);
void ehca_tasklet_neq(unsigned long data);
irqreturn_t ehca_interrupt_eq(int irq, void *dev_id);
void ehca_tasklet_eq(unsigned long data);
void ehca_process_eq(struct ehca_shca *shca, int is_irq);
struct ehca_cpu_comp_task ;
struct ehca_comp_pool ;
int ehca_create_comp_pool(void);
void ehca_destroy_comp_pool(void);
