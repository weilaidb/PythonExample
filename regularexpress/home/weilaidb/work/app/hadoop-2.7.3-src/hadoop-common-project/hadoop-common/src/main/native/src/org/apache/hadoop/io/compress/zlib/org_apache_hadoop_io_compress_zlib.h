#if !defined ORG_APACHE_HADOOP_IO_COMPRESS_ZLIB_ZLIB_H
#define ORG_APACHE_HADOOP_IO_COMPRESS_ZLIB_ZLIB_H
#define HADOOP_ZLIB_LIBRARY L"zlib1.dll"
#define ZSTREAM(stream) ((z_stream*)((ptrdiff_t)(stream)))
#define JLONG(stream) ((jlong)((ptrdiff_t)(stream)))
