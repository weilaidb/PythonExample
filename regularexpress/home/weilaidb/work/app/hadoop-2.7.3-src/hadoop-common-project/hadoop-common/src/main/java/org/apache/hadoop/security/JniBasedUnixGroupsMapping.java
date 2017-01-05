package org.apache.hadoop.security;
import java.io.IOException;
import java.util.Arrays;
import java.util.List;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.util.NativeCodeLoader;
@InterfaceAudience.LimitedPrivate()
@InterfaceStability.Evolving
public class JniBasedUnixGroupsMapping implements GroupMappingServiceProvider
