#define _LINUX_VIRTIO_BALLOON_H
#define VIRTIO_BALLOON_F_MUST_TELL_HOST	0
#define VIRTIO_BALLOON_F_STATS_VQ	1
#define VIRTIO_BALLOON_PFN_SHIFT 12
struct virtio_balloon_config
;
#define VIRTIO_BALLOON_S_SWAP_IN  0
#define VIRTIO_BALLOON_S_SWAP_OUT 1
#define VIRTIO_BALLOON_S_MAJFLT   2
#define VIRTIO_BALLOON_S_MINFLT   3
#define VIRTIO_BALLOON_S_MEMFREE  4
#define VIRTIO_BALLOON_S_MEMTOT   5
#define VIRTIO_BALLOON_S_NR       6
struct virtio_balloon_stat  __attribute__((packed));
