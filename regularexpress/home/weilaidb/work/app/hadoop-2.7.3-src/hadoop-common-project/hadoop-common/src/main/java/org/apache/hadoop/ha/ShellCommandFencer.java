package org.apache.hadoop.ha;
import java.io.IOException;
import java.lang.reflect.Field;
import java.util.Map;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configured;
import com.google.common.annotations.VisibleForTesting;
import org.apache.hadoop.util.Shell;
public class ShellCommandFencer
extends Configured implements FenceMethod
