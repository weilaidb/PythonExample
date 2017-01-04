#define _ISERIES_RELEASE_DATA_H
#define	HVREL_TAGSINACTIVE	0x8000
#define HVREL_32BIT		0x4000
#define HVREL_NOSHAREDPROCS	0x2000
#define HVREL_NOHMT		0x1000
struct HvReleaseData ;
extern const struct HvReleaseData	hvReleaseData;
