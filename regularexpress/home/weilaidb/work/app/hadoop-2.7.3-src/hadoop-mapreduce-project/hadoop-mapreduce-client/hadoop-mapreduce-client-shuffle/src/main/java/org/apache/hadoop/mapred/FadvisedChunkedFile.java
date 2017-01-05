package org.apache.hadoop.mapred;
import java.io.FileDescriptor;
import java.io.IOException;
import java.io.RandomAccessFile;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.io.ReadaheadPool;
import org.apache.hadoop.io.ReadaheadPool.ReadaheadRequest;
import org.apache.hadoop.io.nativeio.NativeIO;
import org.jboss.netty.handler.stream.ChunkedFile;
public class FadvisedChunkedFile extends ChunkedFile
