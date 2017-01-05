package org.apache.hadoop.yarn.state;
import org.apache.hadoop.classification.InterfaceAudience.Public;
import org.apache.hadoop.classification.InterfaceStability.Evolving;
@Public
@Evolving
public interface StateMachine
<STATE extends Enum<STATE>,
EVENTTYPE extends Enum<EVENTTYPE>, EVENT>
