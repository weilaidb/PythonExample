package org.apache.hadoop.record;
import java.io.IOException;
import java.util.TreeMap;
import java.util.ArrayList;
import java.io.DataOutput;
import java.io.DataOutputStream;
import java.io.OutputStream;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
@Deprecated
@InterfaceAudience.Public
@InterfaceStability.Stable
public class BinaryRecordOutput implements RecordOutput
