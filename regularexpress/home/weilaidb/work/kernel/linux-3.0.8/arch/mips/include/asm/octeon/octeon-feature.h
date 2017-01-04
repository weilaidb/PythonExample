#define __OCTEON_FEATURE_H__
enum octeon_feature ;
static inline int cvmx_fuse_read(int fuse);
static inline int octeon_has_feature(enum octeon_feature feature)
