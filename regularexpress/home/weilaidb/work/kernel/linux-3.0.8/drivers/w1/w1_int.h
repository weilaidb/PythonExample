#define __W1_INT_H
int w1_add_master_device(struct w1_bus_master *);
void w1_remove_master_device(struct w1_bus_master *);
void __w1_remove_master_device(struct w1_master *);
