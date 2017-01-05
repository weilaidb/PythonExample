package org.apache.hadoop.yarn.webapp.hamlet;
import com.google.common.base.Joiner;
import static com.google.common.base.Preconditions.*;
import com.google.common.base.Splitter;
import com.google.common.collect.Iterables;
import java.io.PrintWriter;
import java.util.EnumSet;
import static java.util.EnumSet.*;
import java.util.Iterator;
import static org.apache.commons.lang.StringEscapeUtils.*;
import static org.apache.hadoop.yarn.webapp.hamlet.HamletImpl.EOpt.*;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.yarn.webapp.SubView;
import org.apache.hadoop.yarn.webapp.WebAppException;
@InterfaceAudience.Private
public class HamletImpl extends HamletSpec
