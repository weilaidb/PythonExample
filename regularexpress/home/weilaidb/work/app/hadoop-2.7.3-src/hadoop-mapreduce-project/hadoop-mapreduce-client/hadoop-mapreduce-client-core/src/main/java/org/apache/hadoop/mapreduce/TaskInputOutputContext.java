package org.apache.hadoop.mapreduce;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
@InterfaceAudience.Public
@InterfaceStability.Evolving
public interface TaskInputOutputContext<KEYIN,VALUEIN,KEYOUT,VALUEOUT>
extends TaskAttemptContext
