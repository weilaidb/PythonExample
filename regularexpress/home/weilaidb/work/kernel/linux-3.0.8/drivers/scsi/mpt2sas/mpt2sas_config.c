#define MPT2_CONFIG_PAGE_DEFAULT_TIMEOUT 15
#define MPT2_CONFIG_COMMON_SGLFLAGS ((MPI2_SGE_FLAGS_SIMPLE_ELEMENT | \
MPI2_SGE_FLAGS_LAST_ELEMENT | MPI2_SGE_FLAGS_END_OF_BUFFER \
| MPI2_SGE_FLAGS_END_OF_LIST) << MPI2_SGE_FLAGS_SHIFT)
#define MPT2_CONFIG_COMMON_WRITE_SGLFLAGS ((MPI2_SGE_FLAGS_SIMPLE_ELEMENT | \
MPI2_SGE_FLAGS_LAST_ELEMENT | MPI2_SGE_FLAGS_END_OF_BUFFER \
| MPI2_SGE_FLAGS_END_OF_LIST | MPI2_SGE_FLAGS_HOST_TO_IOC) \
<< MPI2_SGE_FLAGS_SHIFT)
struct config_request;
static void
_config_display_some_debug(struct MPT2SAS_ADAPTER *ioc, u16 smid,
char *calling_function_name, MPI2DefaultReply_t *mpi_reply)
static int
_config_alloc_config_dma_memory(struct MPT2SAS_ADAPTER *ioc,
struct config_request *mem)
static void
_config_free_config_dma_memory(struct MPT2SAS_ADAPTER *ioc,
struct config_request *mem)
u8
mpt2sas_config_done(struct MPT2SAS_ADAPTER *ioc, u16 smid, u8 msix_index,
u32 reply)
static int
_config_request(struct MPT2SAS_ADAPTER *ioc, Mpi2ConfigRequest_t
*mpi_request, Mpi2ConfigReply_t *mpi_reply, int timeout,
void *config_page, u16 config_page_sz)
int
mpt2sas_config_get_manufacturing_pg0(struct MPT2SAS_ADAPTER *ioc,
Mpi2ConfigReply_t *mpi_reply, Mpi2ManufacturingPage0_t *config_page)
int
mpt2sas_config_get_manufacturing_pg10(struct MPT2SAS_ADAPTER *ioc,
Mpi2ConfigReply_t *mpi_reply, Mpi2ManufacturingPage10_t *config_page)
int
mpt2sas_config_get_bios_pg2(struct MPT2SAS_ADAPTER *ioc,
Mpi2ConfigReply_t *mpi_reply, Mpi2BiosPage2_t *config_page)
int
mpt2sas_config_get_bios_pg3(struct MPT2SAS_ADAPTER *ioc, Mpi2ConfigReply_t
*mpi_reply, Mpi2BiosPage3_t *config_page)
int
mpt2sas_config_get_iounit_pg0(struct MPT2SAS_ADAPTER *ioc,
Mpi2ConfigReply_t *mpi_reply, Mpi2IOUnitPage0_t *config_page)
int
mpt2sas_config_get_iounit_pg1(struct MPT2SAS_ADAPTER *ioc,
Mpi2ConfigReply_t *mpi_reply, Mpi2IOUnitPage1_t *config_page)
int
mpt2sas_config_set_iounit_pg1(struct MPT2SAS_ADAPTER *ioc,
Mpi2ConfigReply_t *mpi_reply, Mpi2IOUnitPage1_t *config_page)
int
mpt2sas_config_get_ioc_pg8(struct MPT2SAS_ADAPTER *ioc,
Mpi2ConfigReply_t *mpi_reply, Mpi2IOCPage8_t *config_page)
int
mpt2sas_config_get_sas_device_pg0(struct MPT2SAS_ADAPTER *ioc, Mpi2ConfigReply_t
*mpi_reply, Mpi2SasDevicePage0_t *config_page, u32 form, u32 handle)
int
mpt2sas_config_get_sas_device_pg1(struct MPT2SAS_ADAPTER *ioc, Mpi2ConfigReply_t
*mpi_reply, Mpi2SasDevicePage1_t *config_page, u32 form, u32 handle)
int
mpt2sas_config_get_number_hba_phys(struct MPT2SAS_ADAPTER *ioc, u8 *num_phys)
int
mpt2sas_config_get_sas_iounit_pg0(struct MPT2SAS_ADAPTER *ioc, Mpi2ConfigReply_t
*mpi_reply, Mpi2SasIOUnitPage0_t *config_page, u16 sz)
int
mpt2sas_config_get_sas_iounit_pg1(struct MPT2SAS_ADAPTER *ioc, Mpi2ConfigReply_t
*mpi_reply, Mpi2SasIOUnitPage1_t *config_page, u16 sz)
int
mpt2sas_config_set_sas_iounit_pg1(struct MPT2SAS_ADAPTER *ioc, Mpi2ConfigReply_t
*mpi_reply, Mpi2SasIOUnitPage1_t *config_page, u16 sz)
int
mpt2sas_config_get_expander_pg0(struct MPT2SAS_ADAPTER *ioc, Mpi2ConfigReply_t
*mpi_reply, Mpi2ExpanderPage0_t *config_page, u32 form, u32 handle)
int
mpt2sas_config_get_expander_pg1(struct MPT2SAS_ADAPTER *ioc, Mpi2ConfigReply_t
*mpi_reply, Mpi2ExpanderPage1_t *config_page, u32 phy_number,
u16 handle)
int
mpt2sas_config_get_enclosure_pg0(struct MPT2SAS_ADAPTER *ioc, Mpi2ConfigReply_t
*mpi_reply, Mpi2SasEnclosurePage0_t *config_page, u32 form, u32 handle)
int
mpt2sas_config_get_phy_pg0(struct MPT2SAS_ADAPTER *ioc, Mpi2ConfigReply_t
*mpi_reply, Mpi2SasPhyPage0_t *config_page, u32 phy_number)
int
mpt2sas_config_get_phy_pg1(struct MPT2SAS_ADAPTER *ioc, Mpi2ConfigReply_t
*mpi_reply, Mpi2SasPhyPage1_t *config_page, u32 phy_number)
int
mpt2sas_config_get_raid_volume_pg1(struct MPT2SAS_ADAPTER *ioc,
Mpi2ConfigReply_t *mpi_reply, Mpi2RaidVolPage1_t *config_page, u32 form,
u32 handle)
int
mpt2sas_config_get_number_pds(struct MPT2SAS_ADAPTER *ioc, u16 handle,
u8 *num_pds)
int
mpt2sas_config_get_raid_volume_pg0(struct MPT2SAS_ADAPTER *ioc,
Mpi2ConfigReply_t *mpi_reply, Mpi2RaidVolPage0_t *config_page, u32 form,
u32 handle, u16 sz)
int
mpt2sas_config_get_phys_disk_pg0(struct MPT2SAS_ADAPTER *ioc, Mpi2ConfigReply_t
*mpi_reply, Mpi2RaidPhysDiskPage0_t *config_page, u32 form,
u32 form_specific)
int
mpt2sas_config_get_volume_handle(struct MPT2SAS_ADAPTER *ioc, u16 pd_handle,
u16 *volume_handle)
int
mpt2sas_config_get_volume_wwid(struct MPT2SAS_ADAPTER *ioc, u16 volume_handle,
u64 *wwid)
