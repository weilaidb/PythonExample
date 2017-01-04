#define __PVRUSB2_UTIL_H
#define PVR2_DECOMPOSE_LE(t,i,d) \
do  while(0)
#define PVR2_DECOMPOSE_BE(t,i,d) \
do  while(0)
#define PVR2_COMPOSE_LE(t,i) \
((((u32)((t)[i+3])) << 24) | \
(((u32)((t)[i+2])) << 16) | \
(((u32)((t)[i+1])) << 8) | \
((u32)((t)[i])))
#define PVR2_COMPOSE_BE(t,i) \
((((u32)((t)[i])) << 24) | \
(((u32)((t)[i+1])) << 16) | \
(((u32)((t)[i+2])) << 8) | \
((u32)((t)[i+3])))
