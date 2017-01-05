package org.apache.hadoop.util;
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import org.junit.Assert;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.util.IdentityHashStore;
import org.apache.hadoop.util.IdentityHashStore.Visitor;
import org.junit.Test;
public class TestIdentityHashStore
