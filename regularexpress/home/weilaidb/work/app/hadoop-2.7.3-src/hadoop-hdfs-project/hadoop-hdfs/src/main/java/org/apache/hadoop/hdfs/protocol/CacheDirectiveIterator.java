package org.apache.hadoop.hdfs.protocol;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.BatchedRemoteIterator;
import org.apache.hadoop.fs.InvalidRequestException;
import org.apache.hadoop.ipc.RemoteException;
import org.apache.htrace.Sampler;
import org.apache.htrace.Trace;
import org.apache.htrace.TraceScope;
import com.google.common.base.Preconditions;
@InterfaceAudience.Private
@InterfaceStability.Evolving
public class CacheDirectiveIterator
extends BatchedRemoteIterator<Long, CacheDirectiveEntry>
