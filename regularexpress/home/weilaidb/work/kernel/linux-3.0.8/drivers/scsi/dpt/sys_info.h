#define         __SYS_INFO_H
#if defined (_DPT_AIX)
uSHORT       cylinders;
uCHAR        heads;
uCHAR        sectors;
};
} driveParam_S;
#define SI_CMOS_Valid           0x0001
#define SI_NumDrivesValid       0x0002
#define SI_ProcessorValid       0x0004
#define SI_MemorySizeValid      0x0008
#define SI_DriveParamsValid     0x0010
#define SI_SmartROMverValid     0x0020
#define SI_OSversionValid       0x0040
#define SI_OSspecificValid      0x0080
#define SI_BusTypeValid         0x0100
#define SI_ALL_VALID            0x0FFF
#define SI_NO_SmartROM          0x8000
#define SI_ISA_BUS      0x00
#define SI_MCA_BUS      0x01
#define SI_EISA_BUS     0x02
#define SI_PCI_BUS      0x04
uCHAR        drive0CMOS;
uCHAR        drive1CMOS;
uCHAR        numDrives;
uCHAR        processorFamily;
uCHAR        processorType;
uCHAR        smartROMMajorVersion;
uCHAR        smartROMMinorVersion;
uCHAR        smartROMRevision;
uSHORT       flags;
uSHORT       conventionalMemSize;
uINT         extendedMemSize;
uINT         osType;
uCHAR        osMajorVersion;
uCHAR        osMinorVersion;
uCHAR        osRevision;
uCHAR        busType;
uSHORT       osSubRevision;
uCHAR        pad[2];
uCHAR        osSubRevision;
uCHAR        busType;
uCHAR        pad[3];
driveParam_S drives[16];
};
} sysInfo_S;
#define DI_DOS_HIGH             0x01
#define DI_DPMI_VALID           0x02
uCHAR        flags;
uSHORT       driverLocation;
uSHORT       DOS_version;
uSHORT       DPMI_version;
};
} DOS_Info_S;
uCHAR        driverName[13];
uCHAR        serverName[48];
uCHAR        netwareVersion;
uCHAR        netwareSubVersion;
uCHAR        netwareRevision;
uSHORT       maxConnections;
uSHORT       connectionsInUse;
uSHORT       maxVolumes;
uCHAR        unused;
uCHAR        SFTlevel;
uCHAR        TTSlevel;
uCHAR        clibMajorVersion;
uCHAR        clibMinorVersion;
uCHAR        clibRevision;
};
} Netware_Info_S;
uCHAR        something;
};
} OS2_Info_S;
uCHAR        something;
};
} WinNT_Info_S;
uCHAR        something;
};
} SCO_Info_S;
uCHAR        something;
};
} USL_Info_S;
#if defined (_DPT_AIX)
#elif defined (UNPACK_FOUR)
