package org.apache.hadoop.io.nativeio;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.FileDescriptor;
import org.apache.commons.lang.SystemUtils;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public class SharedFileDescriptorFactory
