package org.apache.hadoop.fs;
import java.io.DataInput;
import java.io.DataOutput;
import java.io.IOException;
import org.apache.hadoop.fs.StorageType;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.Writable;
import org.apache.hadoop.util.StringUtils;
@InterfaceAudience.Public
@InterfaceStability.Evolving
public class ContentSummary implements Writable
