package org.apache.hadoop.hdfs.security.token.block;
import java.io.DataInput;
import java.io.DataOutput;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.io.Writable;
import org.apache.hadoop.io.WritableFactories;
import org.apache.hadoop.io.WritableFactory;
@InterfaceAudience.Private
public class ExportedBlockKeys implements Writable
