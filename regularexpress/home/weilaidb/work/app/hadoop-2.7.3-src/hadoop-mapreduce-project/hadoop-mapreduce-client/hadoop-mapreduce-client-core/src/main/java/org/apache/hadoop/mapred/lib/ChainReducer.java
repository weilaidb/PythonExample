package org.apache.hadoop.mapred.lib;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.mapred.*;
import java.io.IOException;
import java.util.Iterator;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class ChainReducer implements Reducer
