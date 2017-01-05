package org.apache.hadoop.security;
import java.io.IOException;
import java.util.List;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.util.NativeCodeLoader;
import org.apache.hadoop.util.PerformanceAdvisory;
public class JniBasedUnixGroupsMappingWithFallback implements
GroupMappingServiceProvider
