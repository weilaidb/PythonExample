package org.apache.hadoop.lib.wsrs;
import java.util.Arrays;
import java.util.EnumSet;
import java.util.Iterator;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.util.StringUtils;
@InterfaceAudience.Private
public abstract class EnumSetParam<E extends Enum<E>> extends Param<EnumSet<E>>
