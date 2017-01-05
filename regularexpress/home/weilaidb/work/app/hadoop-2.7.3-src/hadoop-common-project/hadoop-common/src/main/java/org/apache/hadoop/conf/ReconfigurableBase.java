package org.apache.hadoop.conf;
import com.google.common.annotations.VisibleForTesting;
import com.google.common.base.Optional;
import com.google.common.base.Preconditions;
import com.google.common.collect.Maps;
import org.apache.commons.logging.*;
import org.apache.hadoop.util.Time;
import org.apache.hadoop.conf.ReconfigurationUtil.PropertyChange;
import java.io.IOException;
import java.util.Collection;
import java.util.Collections;
import java.util.Map;
public abstract class ReconfigurableBase
extends Configured implements Reconfigurable
