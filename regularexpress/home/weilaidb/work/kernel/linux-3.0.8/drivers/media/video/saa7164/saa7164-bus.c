int saa7164_bus_setup(struct saa7164_dev *dev)
void saa7164_bus_dump(struct saa7164_dev *dev)
void saa7164_bus_verify(struct saa7164_dev *dev)
void saa7164_bus_dumpmsg(struct saa7164_dev *dev, struct tmComResInfo* m,
void *buf)
int saa7164_bus_set(struct saa7164_dev *dev, struct tmComResInfo* msg,
void *buf)
int saa7164_bus_get(struct saa7164_dev *dev, struct tmComResInfo* msg,
void *buf, int peekonly)
