#define CAIF_SHM_H_
struct shmdev_layer ;
extern int caif_shmcore_probe(struct shmdev_layer *pshm_dev);
extern void caif_shmcore_remove(struct net_device *pshm_netdev);
