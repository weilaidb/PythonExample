#define DEBUG 1
static struct iommu_table_entry * __init
find_dependents_of(struct iommu_table_entry *start,
struct iommu_table_entry *finish,
struct iommu_table_entry *q)
void __init sort_iommu_table(struct iommu_table_entry *start,
struct iommu_table_entry *finish)
void __init check_iommu_entries(struct iommu_table_entry *start,
struct iommu_table_entry *finish)
inline void check_iommu_entries(struct iommu_table_entry *start,
struct iommu_table_entry *finish)
