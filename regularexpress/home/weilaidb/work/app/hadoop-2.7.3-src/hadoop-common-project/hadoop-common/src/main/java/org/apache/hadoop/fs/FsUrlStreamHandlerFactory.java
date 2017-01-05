package org.apache.hadoop.fs;
import java.io.IOException;
import java.net.URLStreamHandlerFactory;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public class FsUrlStreamHandlerFactory implements
URLStreamHandlerFactory
