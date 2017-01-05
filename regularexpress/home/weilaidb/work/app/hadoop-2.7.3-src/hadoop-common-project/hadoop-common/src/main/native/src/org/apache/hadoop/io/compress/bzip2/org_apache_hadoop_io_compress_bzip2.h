#if !defined ORG_APACHE_HADOOP_IO_COMPRESS_BZIP2_BZIP2_H
#define ORG_APACHE_HADOOP_IO_COMPRESS_BZIP2_BZIP2_H
#define HADOOP_BZIP2_LIBRARY "libbz2.so.1"
#define BZSTREAM(stream) ((bz_stream*)((ptrdiff_t)(stream)))
#define JLONG(stream) ((jlong)((ptrdiff_t)(stream)))
