package org.apache.hadoop.hdfs.protocol;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.BatchedRemoteIterator;
import org.apache.htrace.Sampler;
import org.apache.htrace.Trace;
import org.apache.htrace.TraceScope;
@InterfaceAudience.Private
@InterfaceStability.Evolving
public class EncryptionZoneIterator
extends BatchedRemoteIterator<Long, EncryptionZone>
