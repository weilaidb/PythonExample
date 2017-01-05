package org.apache.hadoop.hdfs.web.resources;
import java.util.Arrays;
import java.util.EnumSet;
import java.util.Iterator;
import org.apache.hadoop.util.StringUtils;
abstract class EnumSetParam<E extends Enum<E>> extends Param<EnumSet<E>, EnumSetParam.Domain<E>>
