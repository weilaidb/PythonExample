package org.apache.hadoop.yarn.state;
import java.util.EnumMap;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Set;
import java.util.Stack;
import org.apache.hadoop.classification.InterfaceAudience.Public;
import org.apache.hadoop.classification.InterfaceStability.Evolving;
@Public
@Evolving
final public class StateMachineFactory
<OPERAND, STATE extends Enum<STATE>,
EVENTTYPE extends Enum<EVENTTYPE>, EVENT>
