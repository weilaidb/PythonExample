package org.apache.hadoop.metrics;
import java.io.IOException;
import java.io.InputStream;
import java.util.ArrayList;
import java.util.Collection;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.Properties;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.metrics.spi.NullContext;
@InterfaceAudience.LimitedPrivate()
@InterfaceStability.Evolving
public class ContextFactory
