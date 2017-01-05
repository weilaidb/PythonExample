package org.apache.hadoop.yarn.event;
import org.apache.hadoop.classification.InterfaceAudience.Public;
import org.apache.hadoop.classification.InterfaceStability.Evolving;
@Public
@Evolving
public abstract class AbstractEvent<TYPE extends Enum<TYPE>>
implements Event<TYPE>
