#define __CVMX_MIO_H__
#define CVMX_MDIO_PHY_REG_CONTROL 0
typedef union  cvmx_mdio_phy_reg_control_t;
#define CVMX_MDIO_PHY_REG_STATUS 1
typedef union  cvmx_mdio_phy_reg_status_t;
#define CVMX_MDIO_PHY_REG_ID1 2
typedef union  cvmx_mdio_phy_reg_id1_t;
#define CVMX_MDIO_PHY_REG_ID2 3
typedef union  cvmx_mdio_phy_reg_id2_t;
#define CVMX_MDIO_PHY_REG_AUTONEG_ADVER 4
typedef union  cvmx_mdio_phy_reg_autoneg_adver_t;
#define CVMX_MDIO_PHY_REG_LINK_PARTNER_ABILITY 5
typedef union  cvmx_mdio_phy_reg_link_partner_ability_t;
#define CVMX_MDIO_PHY_REG_AUTONEG_EXPANSION 6
typedef union  cvmx_mdio_phy_reg_autoneg_expansion_t;
#define CVMX_MDIO_PHY_REG_CONTROL_1000 9
typedef union  cvmx_mdio_phy_reg_control_1000_t;
#define CVMX_MDIO_PHY_REG_STATUS_1000 10
typedef union  cvmx_mdio_phy_reg_status_1000_t;
#define CVMX_MDIO_PHY_REG_EXTENDED_STATUS 15
typedef union  cvmx_mdio_phy_reg_extended_status_t;
#define CVMX_MDIO_PHY_REG_MMD_CONTROL 13
typedef union  cvmx_mdio_phy_reg_mmd_control_t;
#define CVMX_MDIO_PHY_REG_MMD_ADDRESS_DATA 14
typedef union  cvmx_mdio_phy_reg_mmd_address_data_t;
#define MDIO_CLAUSE_22_WRITE    0
#define MDIO_CLAUSE_22_READ     1
#define MDIO_CLAUSE_45_ADDRESS  0
#define MDIO_CLAUSE_45_WRITE    1
#define MDIO_CLAUSE_45_READ_INC 2
#define MDIO_CLAUSE_45_READ     3
#define CVMX_MMD_DEVICE_PMA_PMD      1
#define CVMX_MMD_DEVICE_WIS          2
#define CVMX_MMD_DEVICE_PCS          3
#define CVMX_MMD_DEVICE_PHY_XS       4
#define CVMX_MMD_DEVICE_DTS_XS       5
#define CVMX_MMD_DEVICE_TC           6
#define CVMX_MMD_DEVICE_CL22_EXT     29
#define CVMX_MMD_DEVICE_VENDOR_1     30
#define CVMX_MMD_DEVICE_VENDOR_2     31
static inline void __cvmx_mdio_set_clause45_mode(int bus_id)
static inline void __cvmx_mdio_set_clause22_mode(int bus_id)
static inline int cvmx_mdio_read(int bus_id, int phy_id, int location)
static inline int cvmx_mdio_write(int bus_id, int phy_id, int location, int val)
static inline int cvmx_mdio_45_read(int bus_id, int phy_id, int device,
int location)
static inline int cvmx_mdio_45_write(int bus_id, int phy_id, int device,
int location, int val)
