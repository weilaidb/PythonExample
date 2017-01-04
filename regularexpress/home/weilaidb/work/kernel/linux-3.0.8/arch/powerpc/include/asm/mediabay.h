#define _PPC_MEDIABAY_H
#define MB_FD		0
#define MB_FD1		1
#define MB_SOUND	2
#define MB_CD		3
#define MB_PCI		5
#define MB_POWER	6
#define MB_NO		7
struct macio_dev;
extern int check_media_bay(struct macio_dev *bay);
extern void lock_media_bay(struct macio_dev *bay);
extern void unlock_media_bay(struct macio_dev *bay);
static inline int check_media_bay(struct macio_dev *bay)
static inline void lock_media_bay(struct macio_dev *bay)
static inline void unlock_media_bay(struct macio_dev *bay)
