LONG
ArcGetDirectoryEntry(ULONG FileID, struct linux_vdirent *Buffer,
ULONG N, ULONG *Count)
LONG
ArcOpen(CHAR *Path, enum linux_omode OpenMode, ULONG *FileID)
LONG
ArcClose(ULONG FileID)
LONG
ArcRead(ULONG FileID, VOID *Buffer, ULONG N, ULONG *Count)
LONG
ArcGetReadStatus(ULONG FileID)
LONG
ArcWrite(ULONG FileID, PVOID Buffer, ULONG N, PULONG Count)
LONG
ArcSeek(ULONG FileID, struct linux_bigint *Position, enum linux_seekmode SeekMode)
LONG
ArcMount(char *name, enum linux_mountops op)
LONG
ArcGetFileInformation(ULONG FileID, struct linux_finfo *Information)
LONG ArcSetFileInformation(ULONG FileID, ULONG AttributeFlags,
ULONG AttributeMask)
