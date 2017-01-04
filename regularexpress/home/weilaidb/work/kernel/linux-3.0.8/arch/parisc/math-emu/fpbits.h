PA header file -- do not include this header file for non-PA builds.
#define	HOSTWDSZ	32
#define Bitfield_extract(start, length, object) 	\
((object) >> (HOSTWDSZ - (start) - (length)) & 	\
((unsigned)-1 >> (HOSTWDSZ - (length))))
#define Bitfield_signed_extract(start, length, object) \
((int)((object) << start) >> (HOSTWDSZ - (length)))
#define Bitfield_mask(start, len, object)		\
((object) & (((unsigned)-1 >> (HOSTWDSZ-len)) << (HOSTWDSZ-start-len)))
#define Bitfield_deposit(value,start,len,object)  object = \
((object) & ~(((unsigned)-1 >> (HOSTWDSZ-len)) << (HOSTWDSZ-start-len))) | \
(((value) & ((unsigned)-1 >> (HOSTWDSZ-len))) << (HOSTWDSZ-start-len))
