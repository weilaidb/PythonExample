package org.apache.hadoop.yarn.state;
import org.apache.hadoop.classification.InterfaceAudience.Public;
import org.apache.hadoop.classification.InterfaceStability.Evolving;
@Public
@Evolving
public interface MultipleArcTransition
<OPERAND, EVENT, STATE extends Enum<STATE>>
