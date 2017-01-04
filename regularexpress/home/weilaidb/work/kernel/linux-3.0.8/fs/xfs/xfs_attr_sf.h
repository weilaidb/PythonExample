#define	__XFS_ATTR_SF_H__
typedef struct xfs_attr_shortform  xfs_attr_shortform_t;
typedef struct xfs_attr_sf_hdr xfs_attr_sf_hdr_t;
typedef struct xfs_attr_sf_entry xfs_attr_sf_entry_t;
typedef struct xfs_attr_sf_sort  xfs_attr_sf_sort_t;
#define XFS_ATTR_SF_ENTSIZE_BYNAME(nlen,vlen) \
(((int)sizeof(xfs_attr_sf_entry_t)-1 + (nlen)+(vlen)))
#define XFS_ATTR_SF_ENTSIZE_MAX \
((1 << (NBBY*(int)sizeof(__uint8_t))) - 1)
#define XFS_ATTR_SF_ENTSIZE(sfep) \
((int)sizeof(xfs_attr_sf_entry_t)-1 + (sfep)->namelen+(sfep)->valuelen)
#define XFS_ATTR_SF_NEXTENTRY(sfep) \
((xfs_attr_sf_entry_t *)((char *)(sfep) + XFS_ATTR_SF_ENTSIZE(sfep)))
#define XFS_ATTR_SF_TOTSIZE(dp) \
(be16_to_cpu(((xfs_attr_shortform_t *)	\
((dp)->i_afp->if_u1.if_data))->hdr.totsize))
