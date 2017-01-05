package org.apache.hadoop.mapred;
import java.io.DataInput;
import java.io.DataOutput;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.Writable;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public class MapTaskCompletionEventsUpdate implements Writable
