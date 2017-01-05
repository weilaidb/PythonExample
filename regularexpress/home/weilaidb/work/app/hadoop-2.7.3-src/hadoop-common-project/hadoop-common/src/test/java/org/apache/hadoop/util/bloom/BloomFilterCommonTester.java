package org.apache.hadoop.util.bloom;
import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertTrue;
import java.io.IOException;
import java.util.AbstractCollection;
import java.util.Collection;
import java.util.Iterator;
import java.util.Random;
import org.junit.Assert;
import org.apache.hadoop.io.DataInputBuffer;
import org.apache.hadoop.io.DataOutputBuffer;
import org.apache.hadoop.util.hash.Hash;
import org.apache.log4j.Logger;
import com.google.common.collect.ImmutableList;
import com.google.common.collect.ImmutableSet;
public class BloomFilterCommonTester<T extends Filter>
