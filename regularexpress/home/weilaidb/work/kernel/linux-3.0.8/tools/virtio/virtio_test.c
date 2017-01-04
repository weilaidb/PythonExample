#define _GNU_SOURCE
struct vq_info ;
struct vdev_info ;
void vq_notify(struct virtqueue *vq)
void vq_callback(struct virtqueue *vq)
void vhost_vq_setup(struct vdev_info *dev, struct vq_info *info)
static void vq_info_add(struct vdev_info *dev, int num)
static void vdev_info_init(struct vdev_info* dev, unsigned long long features)
static void wait_for_interrupt(struct vdev_info *dev)
static void run_test(struct vdev_info *dev, struct vq_info *vq, int bufs)
const char optstring[] = "h";
const struct option longopts[] = ;
static void help()
int main(int argc, char **argv)
