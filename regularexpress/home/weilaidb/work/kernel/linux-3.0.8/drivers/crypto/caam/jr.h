#define JR_H
int caam_jr_register(struct device *ctrldev, struct device **rdev);
int caam_jr_deregister(struct device *rdev);
int caam_jr_enqueue(struct device *dev, u32 *desc,
void (*cbk)(struct device *dev, u32 *desc, u32 status,
void *areq),
void *areq);
extern int caam_jr_probe(struct platform_device *pdev, struct device_node *np,
int ring);
extern int caam_jr_shutdown(struct device *dev);
