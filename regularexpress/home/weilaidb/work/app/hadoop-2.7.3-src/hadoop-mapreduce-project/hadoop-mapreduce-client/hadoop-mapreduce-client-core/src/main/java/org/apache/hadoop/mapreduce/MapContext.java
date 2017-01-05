package org.apache.hadoop.mapreduce;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
@InterfaceAudience.Public
@InterfaceStability.Evolving
public interface MapContext<KEYIN,VALUEIN,KEYOUT,VALUEOUT>
extends TaskInputOutputContext<KEYIN,VALUEIN,KEYOUT,VALUEOUT>
