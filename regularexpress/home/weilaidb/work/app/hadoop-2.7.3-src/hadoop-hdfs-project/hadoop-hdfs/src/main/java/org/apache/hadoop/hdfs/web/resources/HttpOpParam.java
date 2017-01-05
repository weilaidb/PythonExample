package org.apache.hadoop.hdfs.web.resources;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import javax.ws.rs.core.Response;
public abstract class HttpOpParam<E extends Enum<E> & HttpOpParam.Op>
extends EnumParam<E>
