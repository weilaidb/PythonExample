package org.apache.hadoop.lib.wsrs;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.util.HttpExceptionUtils;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import javax.ws.rs.core.Response;
import javax.ws.rs.ext.ExceptionMapper;
@InterfaceAudience.Private
public class ExceptionProvider implements ExceptionMapper<Throwable>
