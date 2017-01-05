package org.apache.hadoop.hdfs.web.resources;
import java.util.Arrays;
import org.apache.hadoop.util.StringUtils;
abstract class EnumParam<E extends Enum<E>> extends Param<E, EnumParam.Domain<E>>
