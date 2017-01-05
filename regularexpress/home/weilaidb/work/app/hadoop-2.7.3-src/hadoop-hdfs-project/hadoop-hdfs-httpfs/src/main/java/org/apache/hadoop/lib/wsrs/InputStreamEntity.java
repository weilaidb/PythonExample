package org.apache.hadoop.lib.wsrs;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.io.IOUtils;
import javax.ws.rs.core.StreamingOutput;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
@InterfaceAudience.Private
public class InputStreamEntity implements StreamingOutput
