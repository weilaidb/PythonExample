package org.apache.hadoop.fs.slive;
import java.text.NumberFormat;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Random;
import java.util.TreeMap;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.fs.slive.Constants.Distribution;
import org.apache.hadoop.fs.slive.Constants.OperationType;
import org.apache.hadoop.fs.slive.Weights.UniformWeight;
import org.apache.hadoop.fs.slive.ObserveableOp.Observer;
class WeightSelector
