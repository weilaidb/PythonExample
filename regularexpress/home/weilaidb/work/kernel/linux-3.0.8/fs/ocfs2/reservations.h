#define	OCFS2_RESERVATIONS_H
#define OCFS2_DEFAULT_RESV_LEVEL	2
#define OCFS2_MAX_RESV_LEVEL	9
#define OCFS2_MIN_RESV_LEVEL	0
struct ocfs2_alloc_reservation ;
#define	OCFS2_RESV_FLAG_INUSE	0x01
#define	OCFS2_RESV_FLAG_TMP	0x02
#define	OCFS2_RESV_FLAG_DIR	0x04
struct ocfs2_reservation_map ;
void ocfs2_resv_init_once(struct ocfs2_alloc_reservation *resv);
#define OCFS2_RESV_TYPES	(OCFS2_RESV_FLAG_TMP|OCFS2_RESV_FLAG_DIR)
void ocfs2_resv_set_type(struct ocfs2_alloc_reservation *resv,
unsigned int flags);
int ocfs2_dir_resv_allowed(struct ocfs2_super *osb);
void ocfs2_resv_discard(struct ocfs2_reservation_map *resmap,
struct ocfs2_alloc_reservation *resv);
int ocfs2_resmap_init(struct ocfs2_super *osb,
struct ocfs2_reservation_map *resmap);
void ocfs2_resmap_restart(struct ocfs2_reservation_map *resmap,
unsigned int clen, char *disk_bitmap);
void ocfs2_resmap_uninit(struct ocfs2_reservation_map *resmap);
int ocfs2_resmap_resv_bits(struct ocfs2_reservation_map *resmap,
struct ocfs2_alloc_reservation *resv,
int *cstart, int *clen);
void ocfs2_resmap_claimed_bits(struct ocfs2_reservation_map *resmap,
struct ocfs2_alloc_reservation *resv,
u32 cstart, u32 clen);
