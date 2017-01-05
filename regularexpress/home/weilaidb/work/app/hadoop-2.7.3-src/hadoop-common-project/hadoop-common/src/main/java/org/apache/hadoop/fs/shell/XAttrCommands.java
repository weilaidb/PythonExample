package org.apache.hadoop.fs.shell;
import java.io.IOException;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.Locale;
import java.util.Map;
import java.util.Map.Entry;
import com.google.common.base.Enums;
import com.google.common.base.Function;
import com.google.common.base.Preconditions;
import org.apache.hadoop.HadoopIllegalArgumentException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.XAttrCodec;
import org.apache.hadoop.util.StringUtils;
@InterfaceAudience.Private
@InterfaceStability.Evolving
class XAttrCommands extends FsCommand
